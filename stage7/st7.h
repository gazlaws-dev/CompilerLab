#define tNUM 0
#define tADD 1
#define tSUB 2
#define tMUL 3
#define tDIV 4
#define tREAD 5
#define tWRITE 6
#define tASSIGN 7
#define tVAR 8
#define tCONNECT 9
#define tLT 10
#define tGT 11
#define tLE 12
#define tGE 13
#define tEQ 14
#define tNE 15
#define tIF 16
#define tWHILE 17
#define tBREAK 18
#define tCONTINUE 19
#define intType 21
#define stringType 22
#define boolType 23
#define tupleType 24
#define heapBase 4096
#define tPVAR 25
#define tMOD 26
#define tUTYPE 8	//27?
#define tLIT 28
#define tARR 29
#define tDARR 30
#define pIntType 31
#define pStringType 32
#define pTupleType 33
#define tBRKP 34
#define tREF 35
#define tDEREF 36
#define tEXIT 37
#define tFUNC 38
#define tFCALL 39
#define tRET 40
#define tBODY 41
#define tMCALL 42

int tempreg;
int label;
int funcLabel=1;
//int tempCount=0;
int memory[26];
struct StackNode* breakstack;
struct StackNode* contstack;
int staticSize = 4096;	//leave space for main's return value and return address?
int localOffset=1;
int argOffset=-3;
int fieldIndexCount =0;
int classIndex=0;

struct globalEntry * gLookup(char * name);

struct Classtable * classtable = NULL;
struct Typetable * typetable = NULL;
struct globalEntry * symtable = NULL;
struct localTable * allLST = NULL;
char *currFunc,*currType;
struct Classtable * currCptr = NULL;

// A structure to represent a stack
struct StackNode
{
    int data;
    struct StackNode* next;
};
typedef struct tnode { 
	int val;	// value of a number for NUM nodes.
	//int type;	//type of variable
	struct Typetable *type;
	struct Classtable * ctype;
	char* name;	//name of a variable for ID nodes  
	int nodetype;  // information about non-leaf nodes - read/write/connector/+/* etc. 
	struct tableEntry *entry; //pointerto entry for global variables and functions 
	struct tnode *left,*middle,*right,*arglist;	//left and right branches   
}tnode;


typedef struct Typetable{
    char *name;                 //type name
    int size;                   //size of the type
    struct Fieldlist *fields;   //pointer to the head of fields list
    struct Typetable *next,*prev;     // pointer to the next type table entry
} Typetable;


struct Typetable* TLookup(char *name);


struct tableEntry{
	int isLoc;
	struct globalEntry* globalEntry;
	struct localEntry* localEntry;
	struct localTable* localTable;
};

struct globalEntry{
	char *name; //name of the variable or function
	//int type; //type of the variable:(Integer / String)
	struct Typetable *type; //pointer to the Typetable entry of variable type/return type of the function
	struct Classtable *ctype;
	int size[2]; //size of an array
	int nodetype;
	int binding; //static binding of global variables
	struct tnode *paramlist;//pointer to the head of the formal parameter list
									//in the case of functions
	int flabel; //a label for identifying the starting address of a function's code
	struct globalEntry *next; //points to the next Global Symbol Table entry
}; 


struct localEntry{
	char *name; //name of the variable
	struct Typetable *type; //type of the variable
	int nodetype; //just for pointer/var
	int binding; //local binding of the variable
	struct localEntry *next;//points to the next Local Symbol Table entry
}; 


struct localTable{
	char *funcName; //name of the function
	struct localEntry * localEntry; //points to the first param in this function's Local Symbol Table
	struct localTable *next;
};

struct localTable* localTableLookup(char *name);
