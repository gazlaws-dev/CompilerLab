%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<limits.h>
	#include<string.h>
	#include"st7.h"
	#include"class.c"
	
	#include"type.c"
	#include"stack.c"
	#include"symbol.c"
	#include"codegen.c"
	#include"ast.c"
	#define YYSTYPE tnode*
	extern FILE *yyin;
	FILE* fout;
%}


%token BEG END READ WRITE NUM ID IF THEN ELSE ENDIF WHILE DO ENDWHILE BREAK CONTINUE
%token DECL ENDDECL INT STR LIT BRKP RETURN MAIN TYPE ENDTYPE MOD TUPLE NULLTOKEN EXIT
%token CLASS SELF ENDCLASS NEW DELETE
%token LT "<"
%token GT ">"
%token LE "<="
%token GE ">="
%token EQ "=="
%token NE "!="
%token ADD "+"
%token SUB "-"
%token MUL "*"
%token DIV "/"
%left ADD SUB
%left MUL DIV
%nonassoc LT GT LE GE EQ NE

%%

prog :  TypeDefBlock ClassDefBlock GDeclBlock FDefBlock MainBlock {
		showTT();
	 	showST();
	 	fprintf(fout,"%d\nMAIN\n%d\n%d\n%d\n%d\n%d\n%d\n",0,0,0,0,0,1,0);
	 	//codeGen($2,fout);
	 	//codeGen($4,fout);
	 	//codeGen($5,fout);
	 	freeAllReg();
	 	fprintf(fout,"INT 10\n");
		printf("\nSuccessfully parsed program with fdecl\n");
		exit(1);
		}
	 |TypeDefBlock ClassDefBlock GDeclBlock MainBlock {
	 	showTT();
	 	showST();
	 	fprintf(fout,"%d\nMAIN\n%d\n%d\n%d\n%d\n%d\n%d\nMOV SP, %d\nMOV BP, %d\n",0,0,0,0,0,1,0,staticSize,staticSize);
	 	//codeGen($4,fout);
	 	fprintf(fout,"INT 10\n");
	 	printf("Successfully parsed program\n");
	 	exit(1);
		}
	;

TypeDefBlock  : TYPE TypeDefList ENDTYPE	//{printf("typedefdone\n");}
              |                                               
              ;

TypeDefList   : TypeDefList TypeDef
              | TypeDef
              ;

TypeDef       : ID { TInstall($1->name); currType=strdup($1->name);} '{' FieldDeclList '}'   {resetFieldIndex();}
              ;

FieldDeclList : FieldDeclList FieldDecl {}
              | FieldDecl {}
              ;

FieldDecl    : TypeName ID ';'	{ addField(currType, TLookup($1->name), $2->name);
								}
;

TypeName     : INT
             | STR		
             | ID      //{printf("id\n");} //TypeName for user-defined types
;

//CLASS

ClassDefBlock : CLASS ClassDefList ENDCLASS	{printf("Classes over!\n");
											currCptr=NULL;
											$$=$2;}
                |
;
ClassDefList : ClassDefList ClassDef{
									$$ = createTree(NULL,NULL,NULL, NULL,tCONNECT,NULL, $1,NULL, $2,NULL);}
               | ClassDef	
;
ClassDef      : Cname '{' DECL Fieldlists MethodDecl {printf("Methods\n");} ENDDECL MethodDefns {printf("Methoddefn\n");}'}'	{printf("Class\n");$$=$7;}
;
Cname         : ID       	{ currCptr = CInstall($1->name,NULL); printf("Installing %s\n",$1->name);}         
             // | ID Extends ID	{currCptr = CInstall($1->name,$3->name);}
;

Fieldlists 	: Fieldlists Fld
		|
; 

Fld         : Type ID ';'		{printf("fld\n");
										Class_Finstall(currCptr,$1->name,$2->name);} //Installing the field to the class
;

MethodDecl : MethodDecl MDecl 
	   | MDecl 
;
MDecl      : Type ID '(' newParamList ')' ';' {Class_Minstall(currCptr,$2->name,$1->type,$4);} 
											//Installing the method to class
;
MethodDefns : MethodDefns Fdef {	printf("method defanother\n");
									$$ = createTree(NULL,NULL,NULL, NULL,tCONNECT,NULL, $1,NULL, $2,NULL);
									}
						
            | Fdef {$$=$1;
            	printf("method def1\n");
					}
;


GDeclBlock : DECL GDeclList ENDDECL		{printf("GDECL Over\n");}
		   |	{}
		   ;

GDeclList  : GDeclList GDecl {}
		   | GDecl {}
		   ;

GDecl	  : Type Gidlist ';'	{gAssignTypeDecl($1, $2); }
;

Type :	INT					{$$=createTypeNode($1->name);}
		|STR				{$$=createTypeNode($1->name);}
		|ID					{$$=createTypeNode($1->name);}
		;

Gidlist	: Gidlist ',' Gid	{	
								$3->middle=$1;
								$$=$3;
								}
		|Gid				{
								$1->middle=NULL;
								$$=$1;
							} 
;

Gid		:ID		{//bst t; tVAR
				//2 for classes tho
				printf("global id\n");
				gInstall($1->name,NULL,tVAR,2,0,getStaticSpace(2),NULL,NULL);
				$$=$1;
				}
		|fID '(' newParamList ')'	{
									gInstall($1->name,NULL,tFUNC, 0,0,NULL, $3, getFLabel());
									$1->nodetype=tFUNC;
									$$=$1;
									}
		;
		
newParamList	:  newParamList ',' Param  {
						$3->middle=$1;
						$$=$3;
						}
		   	|  Param	{
		   				$$=$1;
					}
			|	{$$=NULL;}
;
		
fID : ID {	currFunc=strdup($1->name);}
;

FDefBlock:	 FDefBlock Fdef {
						$$ = createTree(NULL,NULL,NULL, NULL,tCONNECT,NULL, $1,NULL, $2,NULL);
						resetLocalSpace();
						}
			|Fdef 	{	$$=$1;
						resetLocalSpace();
						}
			;
			
Fdef:		Type newFID '(' validParamList ')' '{' LdeclBlock Body '}'  {
							//$8 is a (slist+return) statement node
							
							$$ = createFuncDefNode($1->type,$2->name,$8);
							
							if(currCptr!=NULL){//paramlist check for method
								struct Memberfunclist *mlist =currCptr->vfuncptr;
								while(mlist!=NULL){
									if(strcmp(mlist->name,$2->name)==0){
										break;
									}
									mlist=mlist->next;
								}
								if(strcmp(mlist->name,$2->name)!=0){
									yyerror("No such method declared");
								}
							
							}else{	resetLocalSpace();}
							}
			
	;
newFID: ID { printf("newfid %s\n",$1->name);
			if(currCptr==NULL){
				struct localTable* currTable = gLookup($1->name);
				if(currTable!=NULL){
					localTableCreate($1->name);
					currFunc=strdup($1->name);
				} else {
						
						yyerror("Did not declare this func\n");
				}
			} else {
			//might be a method
				struct Memberfunclist* currTable = mLookup($1->name,currCptr);
				if(currTable!=NULL){
					localTableCreate($1->name);
					currFunc=strdup($1->name);
				} else {
						
						yyerror("Did not declare this func\n");
				}
			
			}
};

validParamList: ParamList {
						//Name Equivalence
						if(currCptr==NULL){
							paramCheck(currFunc);
						} else {
							mParamCheck(currFunc);
						}
						printf("valid Function defn\n");
}
;

ParamList	:  ParamList ',' Param  {
						localEntryCreate(currFunc, $3->name, $3->type,$3->nodetype, getArgSpace());
						$3->middle=$1;
						$$=$3;
						}
			|	Param	{
					localEntryCreate(currFunc, $1->name, $1->type,$1->nodetype, getArgSpace());
					
					}
			|	{
				$$=NULL;}
;

Param		: Type ID {	
						$2->type = $1->type;
						$2->nodetype=tVAR;
						$$=$2;
						}
		   ;
				
LdeclBlock: DECL LDecList ENDDECL{} | DECL ENDDECL{}
			| {}
;
LDecList :LDecList LDecl ';'{}
		| LDecl ';'	{}
;

LDecl: Type IdList {	if(currCptr==NULL){
							addIdListToLocal($1, $2);
						} else {//add to classes' function's local tables
								//Edit: actuall, no chang from how we did it befroe
							addIdListToLocal($1, $2);
						}
					}
;

IdList: IdList ',' ID {
				$3->nodetype=tVAR;
				$3->middle =$1;
				$$=$3;
			}
		| ID {$1->nodetype=tVAR;
				$$=$1;}
;

;

Body	: BEG Slist Retstmt END {
				$$ = createFuncBodyNode($2, $3);	//tBODY
			}
;
Retstmt : RETURN Expr';'{
						$$=createRetNode($2);//type checkdone in ast
				}
;



MainBlock : Main '(' ')' '{' LdeclBlock Body '}'
								{		
									$$ = createFuncDefNode(TLookup($1->name),"main",$6);
									resetLocalSpace();
								}
;

Main: INT MAIN {
		currFunc=strdup("main");
		printf("INT main\n");
		gInstall("main",TLookup("int"),tFUNC,0,0,0,NULL,NULL);
		localTableCreate("main");
		$$=$1;
	}
;

Slist : Slist Stmt ';' {
		$$ = createTree(NULL,NULL,NULL, NULL,tCONNECT,NULL, $1,NULL, $2,NULL);
	}
	| Stmt ';'{
		$$=$1;
	}
	|{$$=NULL;}
	;

Stmt : InputStmt	//defaults to $$=$1
		|OutputStmt
		|AsgStmt 
		|IfStmt 
		|WhileStmt
		|BrkContStmt
		|Breakpoint
		|Exit
		|ID '=' NEW '(' ID ')' {
				char *retFunc = strdup(currFunc);
				$1 = createVariableNode($1);
				
				if(CLookup($5->name)==$1->ctype){
					printf("New valid\n");
					
				}else {
					yyerror("can't new");
				}
				currFunc=strdup($3->name);
				$2 = createFuncCallNode("new",$5);
				currFunc=retFunc;
				
				$$ = createAsgNode($1, $2);
				}
		|DELETE '(' Field ')'
;


AsgStmt:  ID '=' Expr {
					//checks tht exp and id have same type, or rhs is NULL
					$1=createVariableNode($1);
					$$ = createAsgNode($1, $3);
					}
		| Field '=' Expr {
				printf("here-var feild\n");
				$1=createFieldNode($1); 
				//printf("Final type is: %s\n",$1->type->name);
				$$ = createAsgNode($1, $3);
		
		}
		
;

Field: ID '.' Field {	//do the check later
						$1->middle=$3;
						$$=$1;
				}
		| ID '.' ID{	//do the check later
						//t.num
						$1->middle=$3;
						$$=$1;
				}
		|SELF '.' ID {
			if(currCptr==NULL){
				yyerror("Can't use self outside a method\n");
			}
				$1=createVarNode("self");
				$1->ctype = currCptr;
				$1->middle=$3;
				$$=$1;
		}
;
//Member functions of a class can access only its member fields, methods, local variables, arguments and methods of member fields.
FieldFunction : SELF '.' ID '(' ArgList ')'	//TODO

				//This will not occur inside a class.
				
				
				|ID '.' ID '(' ArgList ')'{
					char *retFunc = strdup(currFunc);
					printf("here- method call\n");
					currFunc=strdup($1->name);
					$$ = createMethodCall($1->name,$3->name,$5);
					currFunc=retFunc;
				}
				|ID '.' Field '(' ArgList ')' 
;


IfStmt: IF '(' Expr ')' THEN Slist ELSE Slist ENDIF {
							
							$$ = createIfNode($3,$6,$8);
						}
		| IF '(' Expr ')' THEN Slist ENDIF {
							$$ = createIfNode($3,$6,NULL);
						}
						;
WhileStmt: WHILE '(' Expr ')' DO Slist ENDWHILE {
							$$ = createWhileNode($3,$6);
							};

BrkContStmt: BREAK { $$=createBreakNode();
					}
			| CONTINUE {
					$$=createContinueNode();
					};
Expr : Expr "+" Expr	{
							$$ = createOpNode(tADD,$1,$3);
						}
						
	| Expr "-" Expr  	{
								$$ = createOpNode(tSUB,$1,$3);
						}
	| Expr "*" Expr		{
								$$ = createOpNode(tMUL,$1,$3);
						}
	| Expr "/" Expr		{
								$$ = createOpNode(tDIV,$1,$3);
						}
	| Expr "<" Expr		{		
								$$ = createOpNode(tLT,$1,$3);
						}
	| Expr ">" Expr		{	
								$$ = createOpNode(tGT,$1,$3);
						}
	| Expr "<=" Expr		{
								$$ = createOpNode(tLE,$1,$3);
						}
	| Expr ">=" Expr		{
								$$ = createOpNode(tGE,$1,$3);
						}
	| Expr "==" Expr	{
							$$ = createOpNode(tEQ,$1,$3);
						}
	| Expr "!=" Expr	{
							$$ = createOpNode(tNE,$1,$3);
						}
	| Expr MOD Expr {
							$$ = createOpNode(tMOD,$1,$3);
	}
	| '(' Expr ')'		{$$ = $2;}
	| NUM				{$$ = $1;}
	| Field {//todo
				$1=createFieldNode($1); 
				//printf("Final type is: %s\n",$1->type->name);
				$$ = $1;
			}
	| FieldFunction	 {
			
		}
	| ID				{	
							if(lookup($1->name) != NULL){
								$1->entry = lookup($1->name);
								//lookup creates the entry acc to where it finds the var declared
								if($1->entry->isLoc){
									
									$1->type=($1->entry->localEntry)->type;
									if(($1->entry->localEntry)->nodetype!=tVAR){
										printf("%s\n",$1->name);
										yyerror("Type mismatch: Expected Var\n");
									}
									$1->nodetype=$1->entry->localEntry->nodetype;
								}
								else {
									$1->type=($1->entry->globalEntry)->type;								
									if(($1->entry->globalEntry)->nodetype!=tVAR){
										yyerror("Type mismatch: Expected Var \n");
									}
									$1->nodetype=($1->entry->globalEntry)->nodetype;
								}
							} else if(currCptr!=NULL){
							} else {
								printf("%s\n:",$1->name);
								yyerror("Variable undeclared\n");
							}
						$$ = $1;
						}	
	| LIT {$$ = $1;}
	| ID '(' ArgList ')'  {	char *retFunc = strdup(currFunc);
							currFunc=strdup($1->name);
							$$ = createFuncCallNode($1->name,$3);
							currFunc=retFunc;
							}
	| NULLTOKEN {
					$1->type=TLookup("NULL");
					$1->val=-1;
					$1->nodetype=tNUM;
		}

;

ArgList: ArgList ',' Expr {	$3->arglist=$1;
							$$=$3;}
		| Expr {$$=$1;}
		|{$$=NULL;}
;


Breakpoint: BRKP {
	$$ = createTree(NULL,NULL,NULL, NULL,tBRKP,NULL, NULL,NULL, NULL,NULL);	
	};
	
Exit: EXIT {
		$$=createExitNode();
	}
;
InputStmt: READ '(' Expr ')'		{
										$$= createReadNode($3);
								};

OutputStmt: WRITE '(' Expr ')'	{	$$= createWriteNode($3);};


%%

int getStaticSpace(int size){
	//upto 5119
	if(staticSize+size >= 5119){
		yyerror("No space for allocation\n");
		exit(1);
	}
	staticSize+=size;
	return staticSize-size;
}

yyerror(char const *s)
{		
	showST();
	printf("error: %s\n",s);
	exit(1);
}

int getLocalSpace(){
	return localOffset++;
}

int getArgSpace(){
	return argOffset--;
}

void resetLocalSpace(){
	localOffset=1;
	argOffset=-3;
}


void resetFieldIndex(){
	fieldIndexCount=0;
}
int main(int argc, char* argv[])
{
	
	tempreg = 0;
	if(argc > 2)
	{
		FILE *fp = fopen(argv[1], "r");
		fout = fopen(argv[2], "w");
		if(fp)
			yyin = fp;
		
	} else {
		//printf("\nExpected filename for input and output\n ./a.out <inputfile> <outputfile>\n\n");
		//return 0;
	}
	TypeTableCreate();
	yyparse();
	return 0;
}

