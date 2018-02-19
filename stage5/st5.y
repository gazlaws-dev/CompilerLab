%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<limits.h>
	#include<string.h>
	#include"st5.h"
	#include"stack.c"
	#include"symbol.c"
	//#include"codegen.c"
	#include"ast.c"
	#define YYSTYPE tnode*
	extern FILE *yyin;
	FILE* fout;
%}


%token BEG END READ WRITE NUM ID IF THEN ELSE ENDIF WHILE DO ENDWHILE BREAK CONTINUE REPEAT UNTIL
%token DECL ENDDECL INT STR LIT BRKP RETURN MAIN
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

prog : GDeclBlock FDefBlock MainBlock {
	 	showST();
		printf("\nSuccessfully parsed program with fdecl\n");
		exit(1);
		}
	 |GDeclBlock MainBlock {
	 	showST();
	 	printf("Successfully parsed program\n");
	 	exit(1);
		}
	;


GDeclBlock : DECL GDeclList ENDDECL		{}
		   |	{}
		   ;

GDeclList  : GDeclList GDecl {}
		   | GDecl {}
		   ;

GDecl	  : Type Gidlist ';'	{	
									gAssignTypeDecl($1, $2);
								}
;

Type :	INT					{
								$$=createTypeNode(intType);}
		|STR				{$$=createTypeNode(stringType);}
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

Gid		:  ID			{
						gInstall($1->name,NULL,tVAR,1,0,getStaticSpace(1),NULL,NULL);
						$$=$1;
				}
			|fID '(' ParamList ')'	{
									gInstall($1->name,NULL,tFUNC, 0,0,NULL, $3,getFLabel());
									$$=$1;
									}
		;
		
fID : ID {
									currFunc=strdup($1->name);
}
;	   
////////////////////////////////////////////

FDefBlock:	FDefBlock Fdef
			|Fdef{};
			
Fdef:		Type newFID '(' validParamList ')' '{' LdeclBlock Body '}'  {
							//gUpdate($2->name,$1->type,$4,$7,$8); //why here?
							
							//$8 is a (slist+return) statement node
							$$ = createFuncDefNode($1->type,$2->name,$8);
							}
	;
newFID: ID {
						
			struct localTable* currTable = gLookup($1->name);
			if(currTable!=NULL){
				localTableCreate($1->name);
				currFunc=strdup($1->name);
			} else {
					yyerror("Did not declare this func\n");
			}
};

validParamList: ParamList {
						paramCheck(currFunc);
}
;

ParamList	:  ParamList ',' Param  {
						localEntryCreate(currFunc, $3->name, $3->type, getLocalSpace());
						$3->middle=$1;
						$$=$3;
						}
		   |  Param	{
						localEntryCreate(currFunc, $1->name, $1->type, getLocalSpace());
						
					}
			|
;

Param		: Type ID {	
						$2->type = $1->type;
						$$=$2;
						}
		   ;
				
LdeclBlock: DECL LDecList ENDDECL | DECL ENDDECL{}
;
LDecList :LDecList LDecl ';'{}
		| LDecl ';'	
;

LDecl: Type IdList {
						addIdListToLocal($1, $2);
					}
;

IdList: IdList ',' ID {
				$3->middle =$1;
				$$=$3;
			}
		| ID	{
				$$=$1;
		};

///////////

Body	  : BEG Slist Retstmt END {
				$$ = createFuncBodyNode($2, $3);
			}
		  ;
Retstmt : RETURN Expr';'{
				struct globalEntry * gEntry= gLookup(currFunc);
				if($2->type==gEntry->type){
					$$=createRetNode($2);
				}else {
				yyerror("Return Type mismatch\n");
				}
				}
		| RETURN ';'
;

Slist : Slist Stmt ';' {
		$$ = createTree(NULL,NULL, NULL,tCONNECT,NULL, $1,NULL, $2);
	}
	| Stmt ';'{
		$$=$1;
	}
	|
	;

Stmt : InputStmt	//defaults to $$=$1
		|OutputStmt
		|AsgStmt 
		|IfStmt 
		|WhileStmt
		|BrkContStmt
		|Breakpoint
		  ;

Breakpoint: BRKP {
	$$ = createTree(NULL,NULL, NULL,tBRKP,NULL, NULL,NULL, NULL);	
	};

InputStmt: READ '(' Expr ')'		{
										$$= createReadNode($3);
								};

OutputStmt: WRITE '(' Expr ')'	{	$$= createWriteNode($3);};

AsgStmt: Var '=' Expr {
					//checks tht exp and id have same type
					$$ = createAsgNode($1, $3);

};
Var: ID 			{	if(lookup($1->name) != NULL){

							$1->entry = lookup($1->name);
							
							if($1->entry->isLoc){
								$1->nodetype=tVAR;
								$1->type=($1->entry->localEntry)->type;
							} else {
								if((($1->entry->globalEntry)->nodetype!=tVAR)){
									yyerror("Type mismatch: Not declared as variable: %s\n",$1->name);
								}
								$1->nodetype=($1->entry->globalEntry)->nodetype;
								$1->type=($1->entry->globalEntry)->type;
							}
						} else {
							yyerror("Variable undeclared\n");
						}
						$$ = $1;
					}
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
	| '(' Expr ')'		{$$ = $2;}
	| NUM				{$$ = $1;}
	| ID				{	if(lookup($1->name) != NULL){
								$1->entry = lookup($1->name);
								//lookup creates the entry acc to where it finds the var declared
								
								if($1->entry->isLoc){
								
									$1->type=($1->entry->localEntry)->type;
									$1->nodetype=tVAR;
									$$=$1;
								
								}
								else {
									$1->type=($1->entry->globalEntry)->type;
								
									if(($1->entry->globalEntry)->nodetype!=tVAR){
										yyerror("Type mismatch: Expected Var \n");
									}
									$1->nodetype=($1->entry->globalEntry)->nodetype;
									$$=$1;
								
								}
						
							} else {
								yyerror("Variable undeclared\n");
							}
						$$ = $1;}	
	| LIT {$$ = $1;}
	| ID '(' ArgList ')'  {
							currFunc=strdup($1->name);
							
							$$ = createFuncCallNode($1->name,$3);
							  }
;

ArgList: ArgList ',' Expr {$3->middle=$1;
							$$=$3;}
		| Expr {$$=$1;}
;

MainBlock : Main '(' ')' '{' LdeclBlock Body '}'
								{	
									//TODO...Some more work to be done
								}
;

Main: INT MAIN {
		currFunc=strdup("main");
		gInstall("main",intType,tFUNC,0,0,0,NULL,getFLabel());
		localTableCreate("main");
	}
;

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
	printf("error: %s\n",s);
	exit(1);
}

//TODO fix this
void getLocalSpace(){return;}

int main(int argc, char* argv[])
{
	
	reg = 0;
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
	yyparse();
	return 0;
}

