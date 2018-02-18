struct Gsymbol{
	char *name; //name of the variable or function
	int type; //type of the variable:(Integer / String)
	int size[2]; //size of an array
	int nodetype;
	int binding; //static binding of global variables
	struct tnode *paramlist;//pointer to the head of the formal parameter list
									//in the case of functions
	int flabel; //a label for identifying the starting address of a function's code
	struct Gsymbol *next; //points to the next Global Symbol Table entry
}; 

struct Lsymbol{
	char *name; //name of the variable
	int type; //type of the variable:(Integer / String)
	int binding; //local binding of the variable
	struct Lsymbol *next;//points to the next Local Symbol Table entry
}; 


struct lstList{
	char *name; //name of the function
	struct Lsymbol *st; //points to the Local Symbol Table
	struct lstList *next;
};

struct Lsymbol* lstListLookup(char *name){
    struct lstList * current = allLST;  // Initialize current
    while (current != NULL)
    {
        if (strcmp(name,current->name)==0){
            return current;
        }
        current = current->next;
    }
    printf("?\n");
    return NULL;
}

void lstListInstall(char *name){
	
	if(lstListLookup(name) == NULL){
		struct lstList* table = (struct lstList*) malloc(sizeof(struct lstList));
		table->name = strdup(name);
		table->next = allLST;
		allLST = table;
		return;
	} else {
		yyerror("Function already declared\n");
		return;
	}
}



void lstListUpdate(char *name, struct Lsymbol* st){

	struct lstList * current = lstListLookup(name);  
    if (current != NULL)
    {
        current->st =st;
    }
    return NULL;
	

}


struct Lsymbol* lLookup(char *name){
    struct Lsymbol * current = currLST;  // Initialize current
    while (current != NULL)
    {
        if (strcmp(name,current->name)==0){
            return current;}
        current = current->next;
    }
    return NULL;
}

struct Lsymbol* lInstall(char *name,int type, int binding){


	if(lLookup(name) == NULL){
		struct Lsymbol* symEntry = (struct Lsymbol*) malloc(sizeof(struct Lsymbol));
		symEntry->name = strdup(name);
		symEntry->type = type; 	//str or int
		symEntry->binding = binding;
		symEntry->next = currLST;
		
		currLST = symEntry;
		return;
	} else {
		yyerror("Variable already declared\n");
		return;
	}
	 
}



struct Gsymbol * gLookup(char * name){
    struct Gsymbol * current = lstListLookup(name);  // Initialize current
    
    while (current != NULL)
    {
        if (strcmp(name,current->name)==0){
        	printf("found in lst%s\n", name);
            return current;}
        current = current->next;
    }
    
   
    current = symtable;
    while (current != NULL)
    {
        if (strcmp(name,current->name)==0){
        	 printf("found in global %s\n", name);
            return current;}
        current = current->next;
    }
    showST();
    return NULL;
}


void gInstall(char *name, int type,int nodetype, int size0,int size1, int binding, struct tnode *paramlist,int flabel){


	if(gLookup(name) == NULL){
					struct Gsymbol* symEntry = (struct Gsymbol*) malloc(sizeof(struct Gsymbol));
					symEntry->name = strdup(name);
					symEntry->type = type; 	//str or int
					symEntry->nodetype = nodetype;
					symEntry->size[0]=size0;
					symEntry->size[1]=size1;
					symEntry->binding = binding;
					symEntry->next = symtable;
					symEntry->paramlist = paramlist;
					symEntry->flabel = flabel;
					symtable = symEntry;
					return;
					} else {
						yyerror("Variable already declared\n");
						return;
					}
	 
}

void gUpdate(char *name, int type, struct tnode *paramlist, struct tnode *lblock, struct tnode *body){

	struct Gsymbol * current = gLookup(name);  
    if (current != NULL)
    {
        current->type = type;
        current->paramlist =paramlist;
    }
    return NULL;
	

}

void gAssignTypeDecl(struct tnode *typeNode, struct tnode *varlist){

	struct Gsymbol * t = NULL;
	
	while(varlist!=NULL){
		t = gLookup(varlist->name);
		
		switch(t->nodetype){	//var, pvar, arr
			case tPVAR: t->type = typeNode->type + 10;		///MAGIC NUMBER DON'T REARRANGE HEADER
									//str, int
						break;
			default: t->type = typeNode->type;
						break;
		}
		varlist=varlist->middle;
	}
}

int getFLabel(){
	return funcLabel++;
}


void showST(){
	struct Gsymbol* current = symtable;  // Initialize current
	printf("------------Symbol Table-------------------\n");
    while (current != NULL)
    {
        printf("Name:%9.9s Size:%d,%d Type:%d-%s, FLabel:%d ,Nodetype: %d,Binding:%d\n",current->name,current->size[0],current->size[1] ,current->type,typeToString(current->type),(current->flabel), (current->nodetype), current->binding);
        if((current->nodetype)==38){
        	struct tnode* pl = (current->paramlist);
			while(pl!=NULL){
				printf("\tPARAMLIST: %s, %s\n",pl->name, typeToString(pl->type));
				pl=pl->middle;
			}
		}
        current = current->next;
    }
    
    current = allLST;
    printf("------------Local Symbol Tables-------------------\n");
    while (current != NULL)
    {
        printf("Name:%9.9s\n", current->name);	//params in st's names
        current = current->next;
    }
    
}


char * typeToString(int type){
	switch(type){
		case intType: return "Integer";
			break;
		case stringType: return "String";
			break;
		case pStringType: return "String Pointer";
			break;
		case pIntType: return "Int Pointer";
			break;
		default: return "Void";
			break;
	}
}
