%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<limits.h>
	#include<string.h>
	#include"st5.h"
	#include"stack.c"
	#include"symbol.c"
	#include"codegen.c"
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
									//assign it in lst also
								}
;

Type :	INT					{$$=createTypeNode(intType);}
		|STR				{$$=createTypeNode(stringType);}
		;

Gidlist	: Gidlist ',' Gid	{
								showST();
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
			|ID '(' ParamList ')'	{
									gInstall($1->name,NULL,tFUNC, 0,0,NULL, $3,getFLabel());
									printf("new func: %s\n",$2->name);
									lstListInstall($1->name);
									//currLST = lstListLookup($2->name);
									lInstall($1->name,$1->type,0);	//set type later;get dynamic space
									$$=$1;
									}
		;
		   
////////////////////////////////////////////

FDefBlock:	FDefBlock Fdef
			|Fdef;
			
Fdef:		Type newFID '(' ParamList ')' '{' LdeclBlock Body '}'  {
							gUpdate($2->name,$1->type,$4,$7,$8);
							}
	;
newFID: ID {
			struct Lsymbol* currLST =lstListLookup($1->name);
						if(currLST!=NULL){
							strcpy(currentLST,$1->name);
						} else {
							yyerror("Did not declare this func\n");
						}
};

ParamList	:  ParamList ',' Param  { 	
										$3->middle=$1;
										$$=$3;}
		   |  Param	{			lstListLookup(currentLST);
		   						lInstall(,$1->type,0);
		   					$$=$1; }
		   |  //There can be functions with no parameters
;

Param		: Type ID {///?
						}
		   ;


////////
//							
LdeclBlock: DECL LDecList ENDDECL | DECL ENDDECL{};

LDecList :LDecList LDecl ';'| LDecl ';'
;

LDecl:Type IdList 
;

IdList:IdList ',' ID 
	| ID;

///////////

Body	  : BEG Slist Retstmt END
		  ;
Retstmt : RETURN ';'{};

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
Var: ID 			{	if(gLookup($1->name) != NULL){

							$1->Gentry = gLookup($1->name);
							
							if(($1->Gentry)->nodetype!=tPVAR && (($1->Gentry)->nodetype!=tVAR)){
								yyerror("Type mismatch: Not declared as variable: %s\n",$1->name);
							}
							$1->nodetype=($1->Gentry)->nodetype;
							$1->type=($1->Gentry)->type;
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
	| ID				{	if(gLookup($1->name) != NULL){
								$1->Gentry = gLookup($1->name);
								$1->type=($1->Gentry)->type;
								
								if(($1->Gentry)->nodetype!=tVAR && ($1->Gentry)->nodetype!=tPVAR){
									yyerror("Type mismatch: Expected Var or PVar \n");
								}
								$1->nodetype=($1->Gentry)->nodetype;
								$$=$1;
							} else {
								yyerror("Variable undeclared\n");
							}
						$$ = $1;}	
	| LIT {$$ = $1;}
	| ID '(' ArgList ')'  {
//								gtemp = GLookup($1->name);
//								if(gtemp == NULL){
//									yyerror("Yacc : Undefined function");exit(1);
//								}
//								//$$ = TreeCreate(gtemp->type,NODETYPE_FUNCTION,$1->name,(union Constant){},$3,NULL,NULL,NULL);
								//$$->Gentry = gtemp;
							  }
;

ArgList: ArgList ',' Expr 
		| Expr 
;

MainBlock : INT MAIN '(' ')' '{' LdeclBlock Body '}'
								{
									gInstall("main",intType,tFUNC,0,0,0,NULL,getFLabel());
									//gtemp = gInstall("MAIN",inttype,0,NULL);
									//...Some more work to be done
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

