struct tnode* createTree(int val,struct Typetable *type, char* c, int nodetype, struct tableEntry * st, struct tnode *l,struct tnode *m, struct tnode *r, struct tnode *arglist){
	struct tnode* t = (struct tnode*)malloc(sizeof(struct tnode));
	t->val = val;
	t->type = type;
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
		return createTree(NULL,NULL, c, NULL, NULL,NULL, NULL ,NULL,NULL);
		
}

struct tnode* createLiteralNode(char* c){
		return createTree(NULL,TLookup("str"), c, tLIT, NULL,NULL, NULL ,NULL,NULL);
		
}

struct tnode * createTypeNode(char* typeName){
	return createTree(NULL,TLookup(typeName), NULL,NULL,NULL,NULL,NULL,NULL,NULL);
}


struct tnode * createRetNode(struct tnode* expr){
	struct globalEntry* gentry = gLookup(currFunc);
	if(strcmp(expr->type->name,gentry->type->name)==0){
		return createTree(NULL,expr->type, NULL,tRET,NULL,NULL,expr,NULL,NULL);
	} else {
		yyerror("Return type mismatch\n");
	}
}

struct tnode * createFuncBodyNode(struct tnode* slist, struct tnode* ret){
	return createTree(NULL,ret->type, NULL, tBODY, NULL,slist, NULL ,ret,NULL);
}

struct tnode * createFuncDefNode(struct Typetable *retType, char *funcName, struct tnode* body){
	struct globalEntry* gentry = gLookup(funcName);
	struct localTable* lentry = localTableLookup(funcName);
	struct tableEntry* entry = (struct tableEntry*) malloc(sizeof(struct tableEntry));
		entry->globalEntry= gentry;
		entry->localTable=lentry;
		entry->isLoc=2;
	
	
	if(retType==body->type){
		return createTree(NULL,retType, funcName, tFUNC, entry ,NULL, body ,NULL,NULL);
	}

}


struct tnode * createFuncCallNode(char * funcName, struct tnode * arglist){
	
	struct tableEntry * entry = (struct tableEntry *) malloc (sizeof(struct tableEntry));
	struct globalEntry* gtemp = gLookup(funcName);
	struct tnode* paramlist,*arg;
	
	arg = arglist;
	
	if(gtemp == NULL){
					yyerror("Yacc : Undeclared function");
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
	return createTree(NULL,gtemp->type, funcName, tFCALL, entry ,NULL, arg ,NULL,NULL);
	
}



struct Typetable* findFinalType(struct Typetable* type,struct tnode *field){
	struct Fieldlist* temp= type->fields;
	temp=FLookup(type,field->name);
	if(temp==NULL){yyerror("Invalid field\n");}
	
	//????something for codegen
	field->val = temp->fieldIndex;
	
	field->type=temp->type;
	
	if(field->middle==NULL) {
					return temp->type;
					}
	
	return findFinalType(temp->type,field->middle);
}


struct tnode * createFieldNode(struct tnode* field){
	field->entry = lookup(field->name);
	field->nodetype=tUTYPE;
	//no need? tVAR with a middle means ot's a utype, but only utypes take NULL , so we need it 
	if(field->entry->globalEntry==NULL && field->entry->localEntry==NULL){
		printf("%s Not a valid variable\n",field->name );exit(1);	//ie head doesn't exist
	}
	if(field->entry->isLoc){
		field->type=field->entry->localEntry->type;
	} else {
		field->type=field->entry->globalEntry->type;
	}
	field->type=findFinalType(field->type,field->middle);
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
				var->nodetype=(var->entry->localEntry)->nodetype;
				var->type=(var->entry->localEntry)->type;
			} else {
							//_a_=&b
				if(((var->entry->globalEntry)->nodetype!=tVAR) && (var->entry->globalEntry)->nodetype!=tPVAR){
					yyerror("Type mismatch: Not a variable");
				}
				var->nodetype=(var->entry->globalEntry)->nodetype;
				var->type=(var->entry->globalEntry)->type;
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
	if(	l->nodetype==tPVAR &&
		(r->nodetype==tREF || r->nodetype==tPVAR) && //ref(treated as a pvar) both addresses
		(strcmp(l->type->name,r->type->name)==0)
		){	
			return createTree(NULL,NULL, NULL,tASSIGN,NULL, l, NULL,r,NULL);
		}
	else if((l->nodetype==tVAR||  l->nodetype==tARR || l->nodetype==tDARR || l->nodetype == tPVAR) && //expr should be value. not pointer
			(r->nodetype!= tREF && r->nodetype != tPVAR) &&
			//can be defer(trated as a var), or a var/arr/darr- all just values, not addresses  
			(strcmp(l->type->name,r->type->name)==0)){
				
		return createTree(NULL,NULL, NULL,tASSIGN,NULL, l, NULL,r,NULL);
	}else if(strcmp(r->type->name,"NULL")==0){
			return createTree(NULL,NULL, NULL,tASSIGN,NULL, l, NULL,r,NULL);
		}
	else{
		printf("%s:%d,%s\n,%d,%s\n\n",l->name,l->nodetype,l->type->name,r->nodetype,r->type->name);
		yyerror("Type mismatch - cannot assign \n");
		}
}



struct tnode* createNumNode(int val){
	return createTree(val,TLookup("int"), NULL,tNUM, NULL,NULL,NULL,NULL,NULL);
}

struct tnode* createOpNode(int nodetype, struct tnode *l, struct tnode *r){
	if ((strcmp(l->type->name,"int")==0) && (strcmp(r->type->name,"int")==0)){
		switch(nodetype){
			case tADD:
			case tSUB:
			case tMUL:
			case tDIV:
			case tMOD:
					return createTree(NULL,TLookup("int"), NULL,nodetype,NULL, l, NULL, r,NULL);
					break;
			case tLT:
			case tGT:
			case tLE:
			case tGE:
			case tEQ:
			case tNE:
					return createTree(NULL, TLookup("bool"), NULL,nodetype,NULL, l, NULL, r,NULL);
					break;
			}
		}
	else{	
			showST();
			printf("Type mismatch %d,%s %d,%s\n",l->nodetype,l->type->name,r->nodetype,r->type->name);
			exit(1);
		}
}


struct tnode* createReadNode(struct tnode *r){
	if(r->nodetype==tVAR || r->nodetype==tARR|| r->nodetype==tDARR || r->nodetype==tDEREF){
		return createTree(NULL, NULL ,NULL, tREAD,NULL, NULL, NULL, r,NULL);
	} else {
		yyerror("Expected variable for Read\n");
	}
	
}

struct tnode* createWriteNode(struct tnode *r){
	if((strcmp(r->type->name,"int") == 0) || (strcmp(r->type->name,"str") == 0)){
		return createTree(NULL,NULL, NULL, tWRITE,NULL, NULL, NULL, r,NULL);
	}else {
		yyerror("Type mismatch- can't write\n");
		}
}

struct tnode* createIfNode(struct tnode *l, struct tnode *m, struct tnode *r){
	if(strcmp(l->type->name,"bool") == 0)
		return createTree(NULL,NULL, NULL, tIF,NULL, l, m, r,NULL);
	else{
		yyerror("Type mismatch - guard of if must be a conditional\n");
		}
}

struct tnode* createWhileNode(struct tnode *l, struct tnode *r){
	if(strcmp(l->type->name,"bool") == 0){
		return createTree(NULL,NULL, NULL,tWHILE,NULL, l, NULL,r,NULL);
	}else{
		yyerror("Type mismatch - guard of while must be a conditional\n");
		}
}

struct tnode* createBreakNode(){
	return createTree(NULL, NULL ,NULL, tBREAK,NULL, NULL, NULL, NULL,NULL);
}
struct tnode* createContinueNode(){
	return createTree(NULL, NULL ,NULL, tCONTINUE,NULL, NULL, NULL, NULL,NULL);
}



