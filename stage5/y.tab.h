/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BEG = 258,
    END = 259,
    READ = 260,
    WRITE = 261,
    NUM = 262,
    ID = 263,
    IF = 264,
    THEN = 265,
    ELSE = 266,
    ENDIF = 267,
    WHILE = 268,
    DO = 269,
    ENDWHILE = 270,
    BREAK = 271,
    CONTINUE = 272,
    DECL = 273,
    ENDDECL = 274,
    INT = 275,
    STR = 276,
    LIT = 277,
    BRKP = 278,
    RETURN = 279,
    MAIN = 280,
    LT = 281,
    GT = 282,
    LE = 283,
    GE = 284,
    EQ = 285,
    NE = 286,
    ADD = 287,
    SUB = 288,
    MUL = 289,
    DIV = 290
  };
#endif
/* Tokens.  */
#define BEG 258
#define END 259
#define READ 260
#define WRITE 261
#define NUM 262
#define ID 263
#define IF 264
#define THEN 265
#define ELSE 266
#define ENDIF 267
#define WHILE 268
#define DO 269
#define ENDWHILE 270
#define BREAK 271
#define CONTINUE 272
#define DECL 273
#define ENDDECL 274
#define INT 275
#define STR 276
#define LIT 277
#define BRKP 278
#define RETURN 279
#define MAIN 280
#define LT 281
#define GT 282
#define LE 283
#define GE 284
#define EQ 285
#define NE 286
#define ADD 287
#define SUB 288
#define MUL 289
#define DIV 290

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
