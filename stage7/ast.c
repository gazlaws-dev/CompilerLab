struct tnode* createTree(int val,struct Classtable *ctype,struct Typetable *type, char* c, int nodetype, struct tableEntry * st, struct tnode *l,struct tnode *m, struct tnode *r, struct tnode *arglist){
	struct tnode* t = (struct tnode*)malloc(sizeof(struct tnode));
	t->val = val;
	t->type = type;
	t->ctype = ctype;
	t->name = c;
	t->nodetype= nodetype;
	t->entry=st;
	t->arglist=arglist;
	t->left = l;
	t->middle = m;
	t->right = r;
	return t;
}

struct tnode* createVarNode(char* c){
		return createTree(NULL,NULL,NULL, c, NULL, NULL,NULL, NULL ,NULL,NULL);
		
}

struct tnode* createLiteralNode(char* c){
		return createTree(NULL,NULL,TLookup("str"), c, tLIT, NULL,NULL, NULL ,NULL,NULL);
		
}

struct tnode * createTypeNode(char* typeName){
	return createTree(NULL,CLookup(typeName),TLookup(typeName), typeName,NULL,NULL,NULL,NULL,NULL,NULL);
}


struct tnode * createRetNode(struct tnode* expr){
	struct globalEntry* gentry = gLookup(currFunc);
	
	if(strcmp(currFunc,"main")==0){
		return createTree(NULL,NULL,expr->type, NULL,tRET,NULL,NULL,expr,NULL,NULL);	
	}
	
	if(currCptr!=NULL){
		//check ret types
		return createTree(NULL,NULL,expr->type, NULL,tRET,NULL,NULL,expr,NULL,NULL);
	}
	else if(strcmp(expr->type->name,gentry->type->name)==0){
		return createTree(NULL,NULL,expr->type, NULL,tRET,NULL,NULL,expr,NULL,NULL);
	} else {
		yyerror("Return type mismatch\n");
	}
}

struct tnode * createFuncBodyNode(struct tnode* slist, struct tnode* ret){
	return createTree(NULL,NULL,ret->type, NULL, tBODY, NULL,slist, NULL ,ret,NULL);
}

struct tnode * createFuncDefNode(struct Typetable *retType, char *funcName, struct tnode* body){
	struct globalEntry* gentry = gLookup(funcName);
	struct localTable* lentry = localTableLookup(funcName);
	struct tableEntry* entry = (struct tableEntry*) malloc(sizeof(struct tableEntry));
		entry->globalEntry= gentry;
		entry->localTable=lentry;
		entry->isLoc=2;
	
	
	if(retType==body->type){
		return createTree(NULL,NULL,retType, funcName, tFUNC, entry ,NULL, body ,NULL,NULL);
	}//else?

}

struct tnode * createMethodCall(char* classVarName, char * methodName, struct tnode * arglist){
	
	struct tableEntry * entry = (struct tableEntry *) malloc (sizeof(struct tableEntry));
	struct globalEntry* gtemp = gLookup(classVarName);	//first = Person, having a binding to a statis-> to heap
	struct tnode* paramlist,*arg;	
	struct Memberfunclist* method =  mLookup(methodName,gtemp->ctype);
	
	arg = arglist;
	
	if(gtemp == NULL){
					yyerror("Class cariable undeclared in global\n");
	}
	
	paramlist = method->paramlist;
	while(paramlist!=NULL && arglist!=NULL){
		if(paramlist->type!=arglist->type){
			printf("%s,%s",paramlist->type->name,arglist->type->name);
			yyerror("Arguments call type mismatch\n");
		}
		paramlist=paramlist->middle;
		arglist=arglist->arglist;
	}
	if((paramlist!=NULL && arglist==NULL) || (paramlist==NULL && arglist!=NULL)){
		if(arglist==NULL) {printf("not enough arguments\n");}
		else printf("too many arguments\n");
		yyerror("Parameter-argument number mismatch\n");
		
	}
	
	
	entry->isLoc=0;
	entry->globalEntry=gtemp;	//gtemp has the ctype
	//using middle for first arg in arglist.
	return createTree(NULL,NULL,method->type, methodName, tMCALL, entry ,NULL, arg ,NULL,NULL);
	
}

struct tnode * createFuncCallNode(char * funcName, struct tnode * arglist){
	
	struct tableEntry * entry = (struct tableEntry *) malloc (sizeof(struct tableEntry));
	struct globalEntry* gtemp = gLookup(funcName);
	struct tnode* paramlist,*arg;
	
	arg = arglist;
	
	if(strcmp(funcName,"delete")==0 || strcmp(funcName,"new")==0){
		return createTree(NULL,CLookup(arglist->name),NULL, funcName, tFCALL, NULL ,NULL, arg ,NULL,NULL);
	}
	
	if(strcmp(funcName,"free")==0 || strcmp(funcName,"alloc")==0){
		return createTree(NULL,NULL,TLookup("int"), funcName, tFCALL, NULL ,NULL, arg ,NULL,NULL);
	}
	
	if(gtemp == NULL){
					printf("%s: ",funcName);
					yyerror("Undeclared function");
	}
	
	paramlist = gtemp->paramlist;
	while(paramlist!=NULL && arglist!=NULL){
		if(paramlist->type!=arglist->type){
			printf("%s,%s",paramlist->type->name,arglist->type->name);
			yyerror("Arguments call type mismatch\n");
		}
		paramlist=paramlist->middle;
		arglist=arglist->arglist;
	}
	if((paramlist!=NULL && arglist==NULL) || (paramlist==NULL && arglist!=NULL)){
		if(arglist==NULL) {printf("not enough arguments\n");}
		else printf("too many arguments\n");
		yyerror("Parameter-argument number mismatch\n");
		
	}
	
	
	entry->isLoc=0;
	entry->globalEntry=gtemp;
	//using middle for first arg in arglist.
	return createTree(NULL,NULL,gtemp->type, funcName, tFCALL, entry ,NULL, arg ,NULL,NULL);
	
}



struct Typetable* getFinalType(struct Typetable* type,struct tnode *field){
	struct Fieldlist* temp= type->fields;
	temp=FLookup(type,field->name);
	if(temp==NULL){yyerror("Invalid field\n");}
	
	//????something for codegen
	field->val = temp->fieldIndex;
	
	field->type=temp->type;
	
	if(field->middle==NULL) {
					return temp->type;
					}
	
	return getFinalType(temp->type,field->middle);
}


struct tnode * createFieldNode(struct tnode* field){
	field->entry = lookup(field->name);	//for types, would work normally, g/l entry having a type
										//for classes, would be null for self
														//or global entry having a class, but if it's a class, it's not allowed
	field->nodetype=tVAR;
	
	if(field->entry==NULL){
		//check if it's self. or first.
		printf("found a %s\n",field->name);
		if(strcmp(field->name,"self")==0){
			struct Fieldlist *mlist =field->ctype->memberfield;
			
			while(mlist!=NULL){
				if(strcmp(mlist->name,field->middle->name)==0){
					break;
				}
				mlist=mlist->next;
			}
			if(mlist==NULL){
				yyerror("No such field declared");
			}
			field->type=mlist->type;	//can't be ctype - ctypes are all global
				//no need of a recursive "final type" since it's not permitted to do a.b.c (private)
			return field;
		} else {
			printf("No entry for %s\n",field->name);
			yyerror("");
		}
	}
	
	if(field->entry->globalEntry==NULL && field->entry->localEntry==NULL){
		printf("%s Not a valid variable\n",field->name );exit(1);	//ie head doesn't exist
	}
	if(field->entry->isLoc){
		field->type=field->entry->localEntry->type;
	} else {
		field->type=field->entry->globalEntry->type;
		if(field->entry->globalEntry->ctype!=NULL){
			printf("Can't access private feilds of %s\n",field->name);
			yyerror("");
		}
	}
	field->type=getFinalType(field->type,field->middle);
	printf("fieldNode\n");
	return field;	//field->val is the index, 	//to add to the corresponding binding?
					// .name = t //from this and lookup, we can get the binding from symbol table (4096 which holds 1024)
					// .middle = x	recursively get the binding+index (as in case of head.next.next.val)
					//
}

struct tnode * createVariableNode(struct tnode* var){
		if(lookup(var->name) != NULL){
			var->entry = lookup(var->name);
			if(var->entry->isLoc){
				//localEntry has a nodetype for tPVAR now
				printf("Found local variable\n");
				var->nodetype=(var->entry->localEntry)->nodetype;
				var->type=(var->entry->localEntry)->type;
			} else {
							//_a_=&b
				if(((var->entry->globalEntry)->nodetype!=tVAR) && (var->entry->globalEntry)->nodetype!=tPVAR){
					yyerror("Type mismatch: Not a variable");
				}
				var->nodetype=(var->entry->globalEntry)->nodetype;
				var->type=(var->entry->globalEntry)->type;
				var->ctype=(var->entry->globalEntry)->ctype;
			}
		} else if(currCptr!=NULL){
			//class field
			struct Fieldlist * mlist = currCptr->memberfield;
			while(mlist!=NULL){
				if(strcmp(var->name,mlist->name)==0){
					break;
				}
				mlist=mlist->next;
			}
			if(strcmp(var->name,mlist->name)==0){
				var->ctype = currCptr;
				var->type = mlist->type;
				var->nodetype=tVAR;
				printf("found in class fields\n");
			} else {
				yyerror("Variable undeclared in class\n");
			}
			
		} else {
			yyerror("Variable undeclared\n");
		}
	return var;
}
//int/str *p,*c
//int/str q, a
//TODO learn all this perfectly//refactor to be better
//p=&q
//p=c
//pvar = deref + num
//*p = *p+1
//q = *p
//q = a
struct tnode* createAsgNode(struct tnode *l, struct tnode *r){
	
		if(r->ctype!=NULL && (strcmp(l->ctype->name,r->ctype->name)==0) ){
				printf("new");
				return createTree(NULL,NULL,NULL, NULL,tASSIGN,NULL, l, NULL,r,NULL);
		}
		else if(strcmp(l->type->name,r->type->name)==0){	
				return createTree(NULL,NULL,NULL, NULL,tASSIGN,NULL, l, NULL,r,NULL);
		}
		else if(strcmp(r->type->name,"NULL")==0){
				return createTree(NULL,NULL,NULL, NULL,tASSIGN,NULL, l, NULL,r,NULL);
			}
		else if(strcmp(r->name,"new")==0 || strcmp(r->name,"delete") && l->ctype!=NULL ){
			return createTree(NULL,NULL,NULL, NULL,tASSIGN,NULL, l, NULL,r,NULL);
		}else if(strcmp(r->name,"alloc")==0 || strcmp(r->name,"free") && l->nodetype==tVAR ){
			return createTree(NULL,NULL,NULL, NULL,tASSIGN,NULL, l, NULL,r,NULL);
		}
		else{
			printf("%s:%d,%s\n,%d,%s\n\n",l->name,l->nodetype,l->type->name,r->nodetype,r->type->name);
			yyerror("Type mismatch - cannot assign \n");
		}
}



struct tnode* createNumNode(int val){
	return createTree(val,NULL,TLookup("int"), NULL,tNUM, NULL,NULL,NULL,NULL,NULL);
}

struct tnode* createExitNode(){
	return createTree(NULL,NULL,NULL, NULL,tEXIT, NULL,NULL,NULL,NULL,NULL);
}

struct tnode* createOpNode(int nodetype, struct tnode *l, struct tnode *r){
	if (((strcmp(l->type->name,"int")==0) && (strcmp(r->type->name,"int")==0))
		|| (strcmp(r->type->name,"NULL")==0)
		){
		switch(nodetype){
			case tADD:
			case tSUB:
			case tMUL:
			case tDIV:
			case tMOD:
					return createTree(NULL,NULL,TLookup("int"), NULL,nodetype,NULL, l, NULL, r,NULL);
					break;
			case tLT:
			case tGT:
			case tLE:
			case tGE:
			case tEQ:
			case tNE:
					return createTree(NULL,NULL, TLookup("bool"), NULL,nodetype,NULL, l, NULL, r,NULL);
					break;
			}
	}else{	
		showST();
		
		printf("Operator Type mismatch %d,%s %d,%s\n",l->nodetype,l->type->name,r->nodetype,r->type->name);
		exit(1);
	}
}


struct tnode* createReadNode(struct tnode *r){
	if(r->nodetype==tVAR || r->nodetype==tARR|| r->nodetype==tDARR || r->nodetype==tDEREF){
		return createTree(NULL,NULL, NULL ,NULL, tREAD,NULL, NULL, NULL, r,NULL);
	} else {
		yyerror("Expected variable for Read\n");
	}
	
}

struct tnode* createWriteNode(struct tnode *r){
	if((strcmp(r->type->name,"int") == 0) || (strcmp(r->type->name,"str") == 0)){
		return createTree(NULL,NULL,NULL, NULL, tWRITE,NULL, NULL, NULL, r,NULL);
	}else {
		yyerror("Type mismatch- can't write\n");
		}
}

struct tnode* createIfNode(struct tnode *l, struct tnode *m, struct tnode *r){
	if(strcmp(l->type->name,"bool") == 0)
		return createTree(NULL,NULL,NULL, NULL, tIF,NULL, l, m, r,NULL);
	else{
		yyerror("Type mismatch - guard of if must be a conditional\n");
		}
}

struct tnode* createWhileNode(struct tnode *l, struct tnode *r){
	if(strcmp(l->type->name,"bool") == 0){
		return createTree(NULL,NULL,NULL, NULL,tWHILE,NULL, l, NULL,r,NULL);
	}else{
		yyerror("Type mismatch - guard of while must be a conditional\n");
		}
}

struct tnode* createBreakNode(){
	return createTree(NULL,NULL, NULL ,NULL, tBREAK,NULL, NULL, NULL, NULL,NULL);
}
struct tnode* createContinueNode(){
	return createTree(NULL,NULL, NULL ,NULL, tCONTINUE,NULL, NULL, NULL, NULL,NULL);
}



