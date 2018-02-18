struct tnode* createTree(int val,int type, char* c, int nodetype, struct Gsymbol * st, struct tnode *l,struct tnode *m, struct tnode *r){
	struct tnode* t = (struct tnode*)malloc(sizeof(struct tnode));
	t->val = val;
	t->type = type;
	t->name = c;
	t->nodetype= nodetype;
	t->Gentry=st;
	t->left = l;
	t->middle = m;
	t->right = r;
	return t;
}

struct tnode* createVarNode(char* c){
		return createTree(NULL,NULL, c, NULL, NULL,NULL, NULL ,NULL);
		
}

struct tnode* createLiteralNode(char* c){
		return createTree(NULL,stringType, c, tLIT, NULL,NULL, NULL ,NULL);
		
}

struct tnode * createTypeNode(int type){
	return createTree(NULL,type, NULL,NULL,NULL,NULL,NULL,NULL);
}


//int/str *p,*c
//int/str q, a

//p=&q
//p=c
//pvar = deref + num
//*p = *p+1
//q = *p
//q = a
struct tnode* createAsgNode(struct tnode *l, struct tnode *r){

	if(	l->nodetype==tPVAR &&
		(r->nodetype==tREF || r->nodetype==tPVAR) && //ref(treated as a pvar) both addresses
		(l->type == r->type)
		){
			return createTree(NULL,NULL, NULL,tASSIGN,NULL, l, NULL,r);
		}
	else if((l->nodetype==tVAR||  l->nodetype==tARR || l->nodetype==tDARR || l->nodetype == tPVAR) && //expr should be value. not pointer
			(r->nodetype!= tREF && r->nodetype != tPVAR) &&
			//can be defer(trated as a var), or a var/arr/darr- all just values, not addresses  
			(l->type == r->type)){
		return createTree(NULL,NULL, NULL,tASSIGN,NULL, l, NULL,r);
	}else{
		yyerror("Type mismatch - cannot assign \n");
		}
		
}



struct tnode* createNumNode(int val){
	return createTree(val,intType, NULL,tNUM, NULL,NULL,NULL,NULL);
}

struct tnode* createOpNode(int nodetype, struct tnode *l, struct tnode *r){
	if ((l->type == intType) && (r->type==intType)){
		switch(nodetype){
			case tADD:
			case tSUB:
			case tMUL:
			case tDIV:
					return createTree(NULL, intType, NULL,nodetype,NULL, l, NULL, r);
					break;
			case tLT:
			case tGT:
			case tLE:
			case tGE:
			case tEQ:
			case tNE:
					return createTree(NULL, boolType, NULL,nodetype,NULL, l, NULL, r);
					break;
			}
		}
	else{	showST();
			printf("Type mismatch %d,%d %d,%d\n",l->nodetype,l->type,r->nodetype,r->type);
			exit(1);
		}
}


struct tnode* createReadNode(struct tnode *r){
	if(r->nodetype==tVAR || r->nodetype==tARR|| r->nodetype==tDARR || r->nodetype==tDEREF){
		return createTree(NULL, NULL ,NULL, tREAD,NULL, NULL, NULL, r);
	} else {
		yyerror("Expected variable for Read\n");
	}
	
}

struct tnode* createWriteNode(struct tnode *r){
	if(((r->type) == intType) || ((r->type) == stringType)){
		return createTree(NULL,NULL, NULL, tWRITE,NULL, NULL, NULL, r);
	}else {
		yyerror("Type mismatch- can't write\n");
		}
}

struct tnode* createIfNode(struct tnode *l, struct tnode *m, struct tnode *r){
	if((l->type) == boolType)
		return createTree(NULL,NULL, NULL, tIF,NULL, l, m, r);
	else{
		yyerror("Type mismatch - guard of if must be a conditional\n");
		}
}

struct tnode* createWhileNode(struct tnode *l, struct tnode *r){
	if((l->type) == boolType){
		return createTree(NULL,NULL, NULL,tWHILE,NULL, l, NULL,r);
	}else{
		yyerror("Type mismatch - guard of while must be a conditional\n");
		}
}

struct tnode* createDoWhileNode(struct tnode *l, struct tnode *r){
	if((r->type) == boolType){
		return createTree(NULL,NULL, NULL,tDOWHILE,NULL, l, NULL,r);
	}else{
		yyerror("Type mismatch - guard of do while must be a conditional\n");
		}
}

struct tnode* createRepeatNode(struct tnode *l, struct tnode *r){
	if((r->type) == boolType){
		return createTree(NULL,NULL, NULL,tREPEAT,NULL, l, NULL,r);
	}else{
		yyerror("Type mismatch - guard of repeat must be a conditional\n");
		}
}
struct tnode* createBreakNode(){
	return createTree(NULL, NULL ,NULL, tBREAK,NULL, NULL, NULL, NULL);
}
struct tnode* createContinueNode(){
	return createTree(NULL, NULL ,NULL, tCONTINUE,NULL, NULL, NULL, NULL);
}



