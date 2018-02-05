%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<limits.h>
	#include<string.h>
	#include"st4.h"
	#include"stack.c"
	#include"symbol.c"
	#include"codegen.c"
	#include"ast.c"
	#define YYSTYPE tnode*
	extern FILE *yyin;
	FILE* fout;
%}


%token BEG END READ WRITE NUM SEMI ID IF THEN ELSE ENDIF WHILE DO ENDWHILE BREAK CONTINUE REPEAT UNTIL
%token DECL ENDDECL INT STR LIT BRKP
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
%token COMMA ","
%left ADD SUB
%left MUL DIV
%nonassoc LT GT LE GE EQ NE

%%

prog : Declarations BEG Slist END SEMI {

	 	showST();
		fprintf(fout,"%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\nMOV SP, %d\n",0,2056,0,0,0,0,1,0,staticSize);
		codeGen($3,fout);
		fprintf(fout,"INT 10\n");
		printf("\nSuccessfully parsed program\n");
		exit(1);
		}
	 | Declarations BEG END SEMI{
	 	showST();
	 	printf("Successfully parsed empty program\n");
	 	exit(1);
		};
Declarations : DECL DeclList ENDDECL	{}
				| DECL ENDDECL			{}
			;

DeclList : DeclList Decl	{}
		| Decl 				{}
		;

Decl : Type VarList SEMI	{assignTypeDecl($1,$2);}
		;

Type :	INT					{$$=createTypeNode(intType);}
		|STR				{$$=createTypeNode(stringType);}
		;

VarList :VarList COMMA newVar {	$3->middle=$1;
								$$=$3; }
		|newVar 				{
								$1->middle=NULL;
								$$=$1;};
		
newVar: ID			{
					if(lookupSymbol($1->varname) == NULL){
						insertSymbol($1->varname,NULL,tVAR,1,0,getStaticSpace(1));
						$$=$1;
				} else {
					yyerror("Variable already declared\n");
				}
				}
		|MUL ID { if(lookupSymbol($2->varname) == NULL){
						insertSymbol($2->varname,NULL,tPVAR,1,0,getStaticSpace(1));
						$$=$2;
				} else {
					yyerror("Variable already declared\n");
				}
		}
		|ID '[' NUM ']'{
			if(lookupSymbol($1->varname) == NULL){
					insertSymbol($1->varname,NULL,tARR,$3->val,0,getStaticSpace($3->val));
					$$=$1;
				} else {
					yyerror("Variable already declared\n");
				}
		}
		|ID '[' NUM ']' '[' NUM ']'{
			if(lookupSymbol($1->varname) == NULL){
					insertSymbol($1->varname,NULL,tDARR,$3->val,$6->val,getStaticSpace(($3->val)*($5->val)));
					$$=$1;
				} else {
					yyerror("Variable already declared\n");
				}
		}
		
		;

Slist : Slist Stmt SEMI{
		$$ = createTree(NULL,NULL, NULL,tCONNECT,NULL, $1,NULL, $2);
	}
	| Stmt SEMI{
		$$=$1;
	};
	
Stmt : InputStmt	//defaults to $$=$1
		|OutputStmt
		|AsgStmt 
		|IfStmt 
		|WhileStmt
		|BrkContStmt
		|DoWhileStmt
		|Breakpoint
		|RepeatStmt;

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
Var: ID 			{	if(lookupSymbol($1->varname) != NULL){

							$1->Gentry = lookupSymbol($1->varname);
							
							if(($1->Gentry)->nodetype!=tPVAR && (($1->Gentry)->nodetype!=tVAR)){
								yyerror("Type mismatch: Not declared as variable: %s\n",$1->varname);
							}
							$1->nodetype=($1->Gentry)->nodetype;
							$1->type=($1->Gentry)->type;
						} else {
							yyerror("Variable undeclared\n");
						}
						$$ = $1;
					}
		| MUL ID {		//*p=*p+1 turns to q=*p+1
						if(lookupSymbol($2->varname) != NULL){
							$2->Gentry = lookupSymbol($2->varname);
							if(($2->Gentry)->nodetype!=tPVAR){
								yyerror("Type mismatch: Not declared as pointer variable: %s\n",$2->varname);
							}
							//printf("*p type %d %d\n",tPVAR, ($2->Gentry->type)-10);
							$2->nodetype=tPVAR;				//nodetype says pointer
							$2->type=($2->Gentry->type)-10;	//type says not pointer
							
							
						} else {
							yyerror("Variable undeclared\n");
						}
						$$ = $2;
			
		}
		|ID '[' Expr ']' {	if(lookupSymbol($1->varname) != NULL){
								$1->Gentry = lookupSymbol($1->varname);
								
								if(($1->Gentry)->nodetype!=tARR){
									yyerror("Type mismatch: Not declared as array: %s\n",$1->varname);
								}
								
								$1->nodetype=tARR;
								$1->type=($1->Gentry)->type;
								
								if($3->type==intType){
									if(($3->nodetype==tNUM) && ( $3->val >= $1->Gentry->size)){
										yyerror("Array out of bounds\n");
									}
								} else {
									yyerror("Expected interger type as offset\n");
								}
								$1->middle=$3;
							} else {
								yyerror("Variable undeclared\n");
							}				
							$$ = $1;
							}
		| ID '[' Expr ']' '[' Expr ']'{
			if(lookupSymbol($1->varname) != NULL){
				$1->Gentry = lookupSymbol($1->varname);
				if(($1->Gentry)->nodetype!=tDARR){
					yyerror("Type mismatch: Not declared as double array: %s\n",$1->varname);
				}
				$1->nodetype=tDARR;
				$1->type=($1->Gentry)->type;
				if($3->type==intType){
					if(($3->nodetype==tNUM) && ( $3->val >= $1->Gentry->size[0])){
						yyerror(" Array out of bounds\n");
					}
				}
				$1->middle=$3;
				if($6->type==intType){
					if(($6->nodetype==tNUM) && ( $6->val >= $1->Gentry->size[1])){
						yyerror("Array out of bounds\n");
					}
				}
				$1->right=$6;
			} else {
				yyerror("Variable undeclared:%s\n",$1->varname);
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
DoWhileStmt: DO Slist WHILE '(' Expr ')' {
								$$ = createDoWhileNode($2,$5);
								};
RepeatStmt: REPEAT Slist UNTIL '(' Expr ')' {
								$$ = createRepeatNode($2,$5);
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
	| ID				{	if(lookupSymbol($1->varname) != NULL){
								$1->Gentry = lookupSymbol($1->varname);
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
	| MUL ID {		
					if(lookupSymbol($2->varname) != NULL){
						$2->Gentry = lookupSymbol($2->varname);
						
						if($2->Gentry->nodetype==tPVAR){
							$2->type=($2->Gentry)->type-10;
							$2->nodetype=tDEREF;
							$$=$2;
						} else {
							yyerror("Type mismatch: Expected Pointer\n");
						}
					} else {
						yyerror("Variable undeclared\n");
					}
					$$ = $2;
					}
	| '&' ID {	
				if(lookupSymbol($2->varname) != NULL){
						$2->Gentry = lookupSymbol($2->varname);
						
						if($2->Gentry->nodetype==tVAR){
							$2->type=($2->Gentry)->type+10;
							$2->nodetype=tREF;
							$$=$2;
						} else {
							yyerror("Type mismatch: Expected Variable after &\n");
						}
					} else {
						yyerror("Variable undeclared\n");
					}
					$$ = $2;
			}
				
			
	|ID  '[' Expr ']' {
						if(lookupSymbol($1->varname) != NULL){
								$1->Gentry = lookupSymbol($1->varname);
								$1->type=($1->Gentry)->type;
								if(($1->Gentry)->nodetype!=tARR){
									yyerror("Type mismatch: Expected Array\n");
								}
								$1->nodetype=tARR;
								if($3->type==intType){
									$1->middle = $3;
									if(($3->nodetype==tNUM) && ( $3->val >= $1->Gentry->size)){
										yyerror("Array out of bounds\n");
									}
								} else {
									yyerror("Expected integer type for array offset\n");
								}
								$$=$1;
							} else {
								yyerror("Variable undeclared\n");
							}
	
	}
	|ID  '[' Expr ']' '[' Expr ']' {
						if(lookupSymbol($1->varname) != NULL){
								$1->Gentry = lookupSymbol($1->varname);
								$1->type=($1->Gentry)->type;
								if(($1->Gentry)->nodetype!=tDARR){
									yyerror("Type mismatch: Expected Double Array\n");
								}
								$1->nodetype=tDARR;
								if($3->type==intType){
									$1->middle = $3;
									if(($3->nodetype==tNUM) && ( $3->val >= $1->Gentry->size[0])){
										yyerror("Array out of bounds\n");
									}
								} else {
									yyerror("Expected integer type for array offset\n");
								}
								if($6->type==intType){
									$1->right = $6;
									if(($6->nodetype==tNUM) && ( $6->val >= $1->Gentry->size[1])){
										yyerror("Array out of bounds\n");
									}
								} else {
									yyerror("Expected integer type for array offset\n");
								}
								$$=$1;
							} else {
								yyerror("Variable undeclared\n");
							}
	
	}
	
	| LIT {$$ = $1;}
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

