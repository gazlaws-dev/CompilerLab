struct localTable* localTableLookup(char *name){
    struct localTable* current = allLST;  // Initialize current
    while (current != NULL)
    {
        if (strcmp(name,current->funcName)==0){
            return current;
        }
        current = current->next;
    }
    return NULL;
}

struct localTable* localTableCreate(char *name){
	
	if(localTableLookup(name) == NULL){
		struct localTable* table = (struct localTable*) malloc(sizeof(struct localTable));
		table->funcName = strdup(name);
		table->next = allLST;
		allLST = table;
		return table;
	} else {
		yyerror("Function already declared\n");	//
		return NULL;
	}
}



void localEntryCreate(char *funcName, char *varName, struct Typetable * type,int nodetype, int binding){

	struct localTable * current = localTableLookup(funcName);  
	
	//check if it already exists in lookup
    if (current != NULL)
    {
        struct localEntry * currParam =  (struct localEntry*) malloc(sizeof(struct localEntry));
        currParam->name = strdup(varName);
        if(nodetype==tPVAR) type=type->next;
        currParam->type = type;
        currParam->nodetype = nodetype;
        currParam->binding=binding;
        
        currParam->next = current->localEntry;	//new entry
        current->localEntry =currParam;	//update table
    }
    return NULL;
}

int paramCheck(char * funcName){
	struct globalEntry * gEntry = gLookup(funcName);
	struct localTable * lTable = localTableLookup(funcName);
	
	struct tnode * gParam = gEntry->paramlist;
	struct localEntry * lParam = lTable->localEntry;
	
	
	
	while(gParam!=NULL && lParam!=NULL){
		if ((strcmp(gParam->name,lParam->name)==0) &&(gParam->type==lParam->type)){
            gParam=gParam->middle;
            lParam=lParam->next;
        } else {
        	//showST();
        	yyerror("Parameter name/type mismatch");
        }
	}
	
	if((gParam!=NULL && lParam==NULL)){
		yyerror("Parameter number mismatch, too many in gparam HERE\n");
		}
	if(gParam==NULL && lParam!=NULL){
		yyerror("Parameter number mismatch, too many in lparam\n");
	}

}



struct localEntry * localEntryLookup(char * funcName, char * varName){
    struct localTable * current = allLST;
    while (current != NULL)
    {
        if (strcmp(funcName,current->funcName)==0){
            break;
    	}
        current = current->next;
    }
    
    if((current != NULL)){
    	 struct localEntry * currEntry = current->localEntry;
    	 while (currEntry != NULL)
			{
				if (strcmp(varName,currEntry->name)==0){
				    return currEntry;
			}
				currEntry = currEntry->next;
			}
    	 
    }
    
    return NULL;
}

struct globalEntry * gLookup(char * name){
    struct globalEntry * current = symtable;
    
   
    
    while (current != NULL)
    {
    	
        if (strcmp(name,current->name)==0){
            return current;
         }
        current = current->next;
    }
    return NULL;
}


struct tableEntry * lookup(char * name){

	struct tableEntry * entryForVar = (struct tableEntry *)malloc(sizeof(struct tableEntry));
	
	struct globalEntry* glo;
	struct localEntry * loc;
	loc = localEntryLookup(currFunc, name);
	glo = gLookup(name);
	
	if(loc!=NULL){
		entryForVar->isLoc =1;
		entryForVar->localEntry = loc;
	} else {
		entryForVar->isLoc =0;
		entryForVar->globalEntry = glo;
	}
	
	if(loc==NULL && glo==NULL)
		return NULL;
		
	return entryForVar;

}

void gInstall(char *name, char* typename,int nodetype, int size0,int size1, int binding, struct tnode *paramlist,int flabel){


	if(gLookup(name) == NULL){
					struct globalEntry* symEntry = (struct globalEntry*) malloc(sizeof(struct globalEntry));
					symEntry->name = strdup(name);
					if(TLookup(typename)!=NULL){
						symEntry->type=TLookup(typename);
					} else if(CLookup(typename)!=NULL){
						symEntry->ctype = CLookup(typename);
					}
					symEntry->nodetype = nodetype;
					symEntry->size[0]=size0;
					symEntry->size[1]=size1;
					symEntry->binding = binding;
					symEntry->next = symtable;
					
					symEntry->paramlist = paramlist;
					while(paramlist){
						if(paramlist->nodetype==tPVAR){
							paramlist->type+=10;
						}
						paramlist=paramlist->middle;
					}
					symEntry->flabel = flabel;
					symtable = symEntry;
					return;
	} else {
		yyerror("Variable already declared\n");
		return;
	}
	 
}


void gAssignTypeDecl(struct tnode *typeNode, struct tnode *varlist){	//typeNode has the name 'int, str, bst',etc

	struct globalEntry * t = NULL; 	
	 
	if(typeNode->type!=NULL){
		while(varlist!=NULL){
			t = gLookup(varlist->name);
			t->type = typeNode->type;
			varlist=varlist->middle;
		}
	} else {
		while(varlist!=NULL){
			t = gLookup(varlist->name);
			t->ctype = typeNode->ctype;		//should work...
											//should classes get more space here?
			varlist=varlist->middle;
		}
		showST();
	
	}
}


void addIdListToLocal(struct  tnode * typeNode, struct  tnode * idList){
//for each id, make and localEntry in localTable for "currFunc"
	struct localTable * currTable = localTableLookup(currFunc);
	struct localEntry * lookupEntry = localEntryLookup(currFunc,idList->name);
	struct Typetable *pType=typeNode->type;
		
	while(idList!=NULL && lookupEntry==NULL){
		lookupEntry = localEntryLookup(currFunc, idList->name);
		
		if(lookupEntry!=NULL){
			yyerror("Variable name already used\n");
		}
		if(idList->nodetype==tPVAR) {pType=pType->next;}
		localEntryCreate(currFunc, idList->name, pType, idList->nodetype ,getLocalSpace());

		idList=idList->middle;
	}
	//showST();
	return;
}



int getFLabel(){
	return funcLabel++;
}


void showST(){
	struct globalEntry* current = symtable;  // Initialize current
	struct localTable* currLocal = symtable;
	printf("------------Symbol Table-------------------\n");
    while (current != NULL)
    {
    	struct Classtable * ct = current->ctype;
    	char * type;
    	
    	if(current->type==NULL && current->ctype==NULL){
    		 current = current->next;
    		 continue;
    	}
    	
    	if(ct!=NULL){
    		type= strdup(current->ctype->name);
    	} else {
    		type= strdup(current->type->name);
    	}
        printf("Name:%9.9s Size:%d Type:%s, FLabel:%d ,Nodetype: %d,Binding:%d\n",current->name,current->size[0],type,(current->flabel), (current->nodetype), current->binding);
        if((current->nodetype)==38){
        	struct tnode* pl = (current->paramlist);
			while(pl!=NULL){
				printf("\tPARAMLIST: %s, %s,%d\n",pl->name, pl->type->name,pl->nodetype);
				pl=pl->middle;
			}
		}
        current = current->next;
    }
    
    currLocal = allLST;
    printf("------------Local Symbol Tables-------------------\n");
    while (currLocal != NULL)
    {	struct localEntry* lv = currLocal->localEntry;
        printf("Name:%9.9s\n", currLocal->funcName);	//params in st's names
        	
			while(lv!=NULL){
				printf("\tLocal vars: %s, %s,%d,%d\n ",lv->name, lv->type->name,lv->nodetype,lv->binding);
				lv=lv->next;
			}
        currLocal = currLocal->next;
    }
    printf("--------------------------------------------------\n\n");
}


