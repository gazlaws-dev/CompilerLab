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
	struct Paramstruct *paramlist;   //pointer to the head of the formal parameter list
	int funcposition;                //position of the function in the class table
 	int flabel;                      //A label for identifying the starting address of the function's code in the memory
	struct Memberfunclist *next;     //pointer to next Memberfunclist entry
};
struct Classtable* CInstall(char *name,char *parent_class_name);
struct Classtable* CLookup(char *name);
void Class_Finstall(struct Classtable *cptr, char *typename, char *name);
void Class_Minstall(struct Classtable *cptr, char *name, struct Typetable *type, struct Paramstruct *Paramlist);


struct Classtable* CInstall(char *name, char *parent_class_name){
	if(CLookup(name)==NULL){
		struct Classtable *newClass;
		newClass = (struct Classtable*) malloc(sizeof(struct Classtable));
		newClass->name=name;
		newClass->next=classtable;
		classtable=newClass;
		return newClass;
	}
	return NULL;
}

struct Classtable* CLookup(char *name){
	struct Classtable* current = classtable;
	
	while(current!=NULL){
		if(strcmp(current->name,name)==0){
		
			return current;
		}
		current=current->next;
	}
	return NULL;
}

void Class_Finstall(struct Classtable *cptr, char *typename, char *name){
	struct Fieldlist * memberFieldList = cptr->memberfield



}

