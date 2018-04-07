


//updated one in class.c
/*struct Fieldlist{*/
/*  char *name;              //name of the field*/
/*  int fieldIndex;          //the position of the field in the field list*/
/*  struct Typetable *type;  //pointer to type table entry of the field's type*/
/*  struct Fieldlist *next;  //pointer to the next field*/
/*};*/

void TypeTableCreate(){	//initiate with int,str, boolean, void
						//pint entry?
	struct Typetable *entry1,*entry0,*entry2,*entry3,*entry4,*entry5,*entry6;
	entry0 = (struct Typetable*) malloc(sizeof(struct Typetable));
	entry1 = (struct Typetable*) malloc(sizeof(struct Typetable));
	entry2 = (struct Typetable*) malloc(sizeof(struct Typetable));
	entry3 = (struct Typetable*) malloc(sizeof(struct Typetable));
	entry4 = (struct Typetable*) malloc(sizeof(struct Typetable));
	entry5 = (struct Typetable*) malloc(sizeof(struct Typetable));
	entry6 = (struct Typetable*) malloc(sizeof(struct Typetable));
	
	entry0->name = "int";
	entry0->size=1;
	entry0->fields=NULL;
	entry0->next=entry1;
	
	entry1->name = "pint";
	entry1->size=1;
	entry1->fields=NULL;
	entry1->prev=entry0;
	entry1->next=entry2;
	
	entry2->name = "str";
	entry2->size=1;
	entry2->fields=NULL;
	entry2->next=entry3;
	
	entry3->name = "pstr";
	entry3->size=1;
	entry3->fields=NULL;
	entry3->prev=entry2;
	entry3->next=entry4;
	
	entry4->name = "bool";
	entry4->size=1;
	entry4->fields=NULL;
	entry4->next=entry5;

	entry5->name = "void";
	entry5->size=1;
	entry5->fields=NULL;
	entry5->next=entry6;
	
	entry6->name = "NULL";
	entry6->size=1;
	entry6->fields=NULL;
	entry6->next=NULL;
	
	
	typetable = entry0;
}

struct Typetable* TLookup(char *name){

	struct Typetable* current = typetable;
	if(name==NULL){return NULL;}
	while(current!=NULL){
		if(strcmp(current->name,name)==0){
		
			return current;
		}
		current=current->next;
	}
	return NULL;
}

struct Typetable* TInstall(char *name){
	
	if(TLookup(name)==NULL){
		struct Typetable *newType;
		newType = (struct Typetable*) malloc(sizeof(struct Typetable));
		newType->name=name;
		newType->next=typetable;
		typetable=newType;
		return newType;
	}
	return NULL;
}

void addField(char* currType, struct Typetable* fieldType, char *fieldName){
	struct Fieldlist * fieldEntry = (struct Fieldlist *) malloc (sizeof(struct Fieldlist));
	struct Typetable* type=TLookup(currType);
	
	fieldEntry->fieldIndex = fieldIndexCount++;
	if(fieldIndexCount==8){
		yyerror("Too many members (max 8)\n");
	}
	fieldEntry->name =fieldName;
	fieldEntry->type = fieldType;
	fieldEntry->next = type->fields;
	type->fields=fieldEntry;
	type->size+=1;	//takes care of intergers, str, ptr to user defined type
	
}

struct Fieldlist* FLookup(Typetable *type, char *name){
	struct Fieldlist * currentField;
	currentField = type->fields;
	
	while(currentField){
		if(strcmp(name,currentField->name)==0){
			return currentField;
		}
		currentField=currentField->next;
	}
	return NULL;
}

int GetSize(Typetable * type){
	return type->size;
}

void showTT(){

	struct Typetable* current = typetable;
	struct Fieldlist* cFL;
	while(current){
	
	printf("Type: %s, Size: %d\n",current->name, current->size);
	cFL = current->fields;
		while(cFL){
			printf("field name %s",cFL->name);
			printf(", type: %s,index: %d\n",cFL->type->name,cFL->fieldIndex );
			cFL=cFL->next;
		}
	current=current->next;
	}


}

