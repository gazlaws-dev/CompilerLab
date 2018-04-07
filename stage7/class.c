struct Classtable {
 	char *name;                           //name of the class
	struct Fieldlist *memberfield;        //pointer to Fieldlist 
	struct Memberfunclist *vfuncptr;      //pointer to Memberfunclist
	struct Classtable *parentptr;         //pointer to the parent's class table
	int class_index;                      //position of the class in the virtual function table
	int fieldcount;                       //count of fields
  	int methodcount;                      //count of methods
	struct Classtable *next;              //pointer to next class table entry
};

struct Fieldlist{
	char *name;			//name of the field
	int fieldIndex;			//position of the field
	struct Typetable *type;		//pointer to typetable 
	struct Classtable *ctype;	//pointer to the class containing the field
	struct Fieldlist *next;		//pointer to next fieldlist entry
};

struct Memberfunclist {
 	char *name;                      //name of the member function in the class
	struct Typetable *type;          //pointer to typetable
	struct tnode *paramlist;   //pointer to the head of the formal parameter list
	int funcposition;                //position of the function in the class table
 	int flabel;                      //A label for identifying the starting address of the function's code in the memory
	struct Memberfunclist *next;     //pointer to next Memberfunclist entry
};
struct Classtable* CInstall(char *name,char *parent_class_name);
struct Classtable* CLookup(char *name);
void Class_Finstall(struct Classtable *cptr, char *typename, char *name);
void Class_Minstall(struct Classtable *cptr, char *name, struct Typetable *type, struct tnode *Paramlist);


struct Classtable* CInstall(char *name, char *parent_class_name){
	if(CLookup(name)==NULL){
		struct Classtable *newClass;
		newClass = (struct Classtable*) malloc(sizeof(struct Classtable));
		newClass->name=name;
		newClass->next=classtable;
		newClass->class_index=classIndex++;
		newClass->parentptr = CLookup(parent_class_name);
		classtable=newClass;
		return newClass;
	}
	return NULL;
}

struct Classtable* CLookup(char *name){
	struct Classtable* current = classtable;
	if(name==NULL) return NULL;
	while(current!=NULL){
		if(strcmp(current->name,name)==0){
		
			return current;
		}
		current=current->next;
	}
	return NULL;
}

void Class_Finstall(struct Classtable *cptr, char *typename, char *name){
	struct Fieldlist *newField = (struct Fieldlist*) malloc(sizeof(struct Fieldlist));
		newField->name = name;
		
		if(TLookup(typename)!=NULL){
			newField->type=TLookup(typename);
		} else if(CLookup(typename)!=NULL){
			newField->ctype = CLookup(typename);
		} else {
			yyerror("Field's type not found\n");
		}
	
	cptr->fieldcount++;
		
	if(cptr->memberfield==NULL){
		cptr->memberfield = newField;
		newField->fieldIndex=0;
		return;
	}
	//last field index shows up first!
	newField->fieldIndex = cptr->memberfield->fieldIndex+1;
	newField->next = cptr->memberfield;
	cptr->memberfield = newField;
	return;
}

void Class_Minstall(struct Classtable *cptr, char *name, struct Typetable *type, struct tnode *Paramlist){
	struct Memberfunclist *func = cptr->vfuncptr;
	struct Memberfunclist *newFunc = (struct Memberfunclist*) malloc(sizeof(struct Memberfunclist));
	newFunc->name = name;
	newFunc->type = type;
	newFunc->paramlist = Paramlist;	//has name and type
	if(func == NULL){
		newFunc->funcposition = 0;
		cptr->vfuncptr= newFunc;
	} else {
		while(func->next != NULL){
			func=func->next;
		}
		//here we're at the last func
		newFunc->funcposition = func->funcposition+1;
		func->next = newFunc;
	}
	cptr->methodcount++;
	newFunc->flabel = getFLabel();
	newFunc->next = NULL;
}

struct Memberfunclist* mLookup(char * name,struct Classtable *cptr){
	
	struct Memberfunclist * curr = cptr->vfuncptr;
	while(strcmp(curr->name,name)!=0){
		curr=curr->next;
	}
	
	return curr;
}

int mParamCheck(char * funcName){
	struct Memberfunclist * mEntry = mLookup(funcName,currCptr);
	struct localTable * lTable = localTableLookup(funcName);
	
	struct tnode * gParam = mEntry->paramlist;
	struct localEntry * lParam = lTable->localEntry;
	
	if(lTable==NULL){
		yyerror("no method in local table");
	}
	
	
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
		showST();
		showCL();
		yyerror("Parameter number mismatch, too many in gparam CLASS\n");
		}
	if(gParam==NULL && lParam!=NULL){
		yyerror("Parameter number mismatch, too many in lparam\n");
	}

}

struct Classtable* allClassSearch(char * methodName){
	struct Classtable *cptr = classtable;
	
	while(mLookup(methodName,cptr)!=NULL){
		cptr=cptr->next;
	}
	return cptr;
}


void showCL(){
	struct Classtable* current = classtable;  // Initialize current
	struct Fieldlist* fd;
	struct Memberfunclist* ms;
	
	
	printf("------------ClassTable-------------------\n");
    while (current != NULL)
    {
        printf("Name:%9.9s class_index:%d fieldcount:%d, methodcount:%d\n",current->name,current->class_index,current->fieldcount ,current->methodcount);
        fd = (current->memberfield);
			while(fd!=NULL){
				printf("\tfeild %s,%s\n",fd->name, fd->type->name);
				fd=fd->next;
			}
		
		ms = current->vfuncptr;
		while(ms!=NULL){
			printf("\tmethod %s,%s\n",ms->name, ms->type->name);
			struct tnode *pl = ms->paramlist;
			while(pl!=NULL){
				printf("\t\targ: %s,%s\n", pl->name,pl->type->name);
				pl=pl->middle;
			}
			ms=ms->next;
		}
        current = current->next;
    }

    printf("--------------------------------------------------\n\n");
}

