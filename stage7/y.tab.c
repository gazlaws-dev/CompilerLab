/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "st7.y" /* yacc.c:339  */

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

#line 84 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
    TYPE = 281,
    ENDTYPE = 282,
    MOD = 283,
    TUPLE = 284,
    NULLTOKEN = 285,
    EXIT = 286,
    CLASS = 287,
    SELF = 288,
    ENDCLASS = 289,
    NEW = 290,
    DELETE = 291,
    LT = 292,
    GT = 293,
    LE = 294,
    GE = 295,
    EQ = 296,
    NE = 297,
    ADD = 298,
    SUB = 299,
    MUL = 300,
    DIV = 301
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
#define TYPE 281
#define ENDTYPE 282
#define MOD 283
#define TUPLE 284
#define NULLTOKEN 285
#define EXIT 286
#define CLASS 287
#define SELF 288
#define ENDCLASS 289
#define NEW 290
#define DELETE 291
#define LT 292
#define GT 293
#define LE 294
#define GE 295
#define EQ 296
#define NE 297
#define ADD 298
#define SUB 299
#define MUL 300
#define DIV 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 227 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   408

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  120
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  240

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      50,    51,     2,     2,    52,     2,    54,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    49,
       2,    53,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,    48,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    39,    39,    51,    62,    63,    66,    67,    70,    70,
      73,    74,    77,    81,    82,    83,    88,    91,    93,    95,
      97,    97,    97,    99,   103,   104,   107,   111,   112,   114,
     117,   121,   127,   128,   131,   132,   135,   138,   139,   140,
     143,   147,   153,   159,   166,   170,   173,   176,   179,   183,
     188,   209,   233,   244,   249,   253,   257,   264,   264,   265,
     267,   268,   271,   280,   285,   291,   295,   302,   309,   318,
     321,   324,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   351,   355,   360,   370,   374,   379,   390,   395,   402,
     406,   410,   414,   418,   420,   423,   427,   430,   433,   436,
     439,   442,   445,   448,   451,   454,   457,   458,   459,   464,
     467,   494,   495,   500,   508,   510,   511,   515,   519,   523,
     527
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BEG", "END", "READ", "WRITE", "NUM",
  "ID", "IF", "THEN", "ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", "BREAK",
  "CONTINUE", "DECL", "ENDDECL", "INT", "STR", "LIT", "BRKP", "RETURN",
  "MAIN", "TYPE", "ENDTYPE", "MOD", "TUPLE", "NULLTOKEN", "EXIT", "CLASS",
  "SELF", "ENDCLASS", "NEW", "DELETE", "\"<\"", "\">\"", "\"<=\"",
  "\">=\"", "\"==\"", "\"!=\"", "\"+\"", "\"-\"", "\"*\"", "\"/\"", "'{'",
  "'}'", "';'", "'('", "')'", "','", "'='", "'.'", "$accept", "prog",
  "TypeDefBlock", "TypeDefList", "TypeDef", "$@1", "FieldDeclList",
  "FieldDecl", "TypeName", "ClassDefBlock", "ClassDefList", "ClassDef",
  "$@2", "$@3", "Cname", "Fieldlists", "Fld", "MethodDecl", "MDecl",
  "MethodDefns", "GDeclBlock", "GDeclList", "GDecl", "Type", "Gidlist",
  "Gid", "newParamList", "fID", "FDefBlock", "Fdef", "newFID",
  "validParamList", "ParamList", "Param", "LdeclBlock", "LDecList",
  "LDecl", "IdList", "Body", "Retstmt", "MainBlock", "Main", "Slist",
  "Stmt", "AsgStmt", "Field", "FieldFunction", "IfStmt", "WhileStmt",
  "BrkContStmt", "Expr", "ArgList", "Breakpoint", "Exit", "InputStmt",
  "OutputStmt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   123,   125,    59,
      40,    41,    44,    61,    46
};
# endif

#define YYPACT_NINF -153

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-153)))

#define YYTABLE_NINF -48

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-48)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -15,    15,    17,    -7,  -153,    57,  -153,  -153,    37,    12,
      26,  -153,  -153,  -153,     2,  -153,    32,    19,    77,    84,
    -153,  -153,    51,  -153,  -153,  -153,    75,  -153,    74,    97,
     116,    77,  -153,  -153,   112,  -153,  -153,  -153,    -6,  -153,
     119,  -153,  -153,  -153,   115,    22,  -153,   126,  -153,  -153,
     127,  -153,  -153,   128,  -153,  -153,   131,    19,  -153,    74,
      19,    19,   134,  -153,  -153,    19,  -153,   170,  -153,   175,
      50,  -153,   139,   140,  -153,   173,   179,  -153,   186,    76,
    -153,  -153,    19,   152,    19,   129,   197,    19,   154,  -153,
      19,  -153,   173,  -153,  -153,   193,   150,   153,   230,   157,
      19,  -153,    79,   197,  -153,   155,  -153,   159,  -153,   156,
     160,    91,   162,   169,  -153,  -153,  -153,  -153,   166,   174,
     151,   178,  -153,   176,  -153,  -153,  -153,  -153,  -153,  -153,
    -153,  -153,   161,  -153,   181,   183,   215,  -153,    56,    56,
      11,    -1,    56,    56,   220,     5,    56,   229,   185,  -153,
      56,  -153,  -153,  -153,  -153,  -153,   -26,  -153,  -153,   187,
      56,  -153,  -153,    72,   231,   194,   326,   195,  -153,   250,
     269,  -153,   195,   199,   307,  -153,  -153,   326,    56,    29,
     240,   288,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,  -153,  -153,   243,   227,   238,  -153,  -153,
     326,    81,   -19,   204,   205,  -153,   326,   360,   360,   360,
     360,   360,   360,   345,   345,   366,   366,   206,   230,   230,
    -153,    56,    56,    56,    56,  -153,   130,   180,   326,   100,
     103,   121,   230,  -153,  -153,  -153,  -153,  -153,   209,  -153
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,    17,     8,     0,     7,     1,     0,    33,
       0,     4,     6,    23,     0,    19,     0,     0,     0,     0,
      16,    18,     0,    39,    37,    38,     0,    35,     0,    37,
       0,     0,    49,     3,     0,    15,    13,    14,     0,    11,
       0,    25,    32,    34,    42,     0,    41,     0,    68,    51,
       0,    48,     2,     0,     9,    10,     0,     0,    36,     0,
      46,    55,     0,    12,    24,    20,    28,     0,    40,     0,
       0,    45,     0,    52,    54,    59,     0,    27,     0,     0,
      56,    43,     0,     0,     0,     0,     0,     0,     0,    26,
      46,    44,    59,    53,    58,     0,     0,     0,    71,     0,
      21,    31,     0,     0,    64,    62,    57,     0,    61,     0,
       0,     0,     0,     0,    93,    94,   117,   118,     0,     0,
       0,     0,    74,     0,    75,    76,    77,    78,    79,    72,
      73,    67,     0,    30,     0,     0,     0,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    70,
       0,    22,    29,    50,    63,   107,   110,   111,   113,     0,
       0,   108,   109,     0,     0,     0,    82,    85,    84,     0,
       0,    86,     0,     0,     0,    65,    69,    83,   116,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,     0,     0,     0,    81,    66,
     115,     0,    85,    84,    86,   106,   105,    99,   100,   101,
     102,   103,   104,    95,    96,    97,    98,     0,    71,    71,
     112,     0,   116,   116,   116,    80,     0,     0,   114,     0,
       0,     0,    71,    91,    92,    88,    89,    87,     0,    90
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -153,  -153,  -153,  -153,   251,  -153,  -153,   222,  -153,  -153,
    -153,   244,  -153,  -153,  -153,  -153,  -153,  -153,   200,  -153,
    -153,  -153,   236,     3,  -153,   208,   189,  -153,  -153,   -28,
    -153,  -153,  -153,     9,   172,  -153,   184,  -153,   182,  -153,
     252,  -153,  -152,  -119,  -153,   -98,  -153,  -153,  -153,  -153,
    -134,  -147,  -153,  -153,  -153,  -153
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,     6,    10,    38,    39,    40,     9,
      14,    15,    76,   132,    16,    57,    64,    65,    66,   100,
      18,    26,    27,    69,    45,    46,    70,    47,    31,    32,
      50,    72,    73,    71,    86,    96,    97,   105,    99,   147,
      33,    34,   120,   121,   122,   161,   162,   124,   125,   126,
     200,   201,   127,   128,   129,   130
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     123,   148,    35,    51,   163,   164,   166,   167,   169,   170,
      13,     1,   174,   172,    36,    37,   177,     7,   155,   156,
      28,    30,   123,     4,   178,     8,   181,    23,   179,    28,
      17,   222,   118,   157,    30,   141,    20,   202,   118,    24,
      25,   158,    54,   168,   159,    13,   165,   173,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   101,
      67,   160,   118,   155,   156,     4,   226,   227,    78,    41,
      74,    58,   133,    19,    59,   229,   230,   231,   157,    22,
     238,   203,    44,    23,    11,    23,   158,   228,    95,   159,
      30,    91,    35,    93,    42,    24,    25,    29,    25,    95,
     182,    81,    82,    30,    36,    37,   160,   148,   148,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   148,
     123,   123,    48,   193,    49,    89,    90,    56,   123,   123,
     134,    82,   220,   221,   123,   109,   110,    23,   111,   112,
     123,   232,   233,   113,   140,   141,   114,   115,    94,    24,
      25,   235,   221,   116,   236,   221,   109,   110,    23,   111,
     112,   117,    53,   118,   113,   -47,   119,   114,   115,   106,
      24,    25,   237,   221,   116,   146,    60,    61,    79,    62,
      63,    75,   117,    80,   118,   109,   110,   119,   111,   112,
      83,    85,    84,   113,    88,   234,   114,   115,    87,    92,
      98,   104,   108,   116,    90,   131,   138,   136,   137,   151,
     139,   117,   142,   118,   109,   110,   119,   111,   112,   143,
     144,   239,   113,   154,   145,   114,   115,   149,   171,   150,
     152,   153,   116,   175,   176,   109,   110,   218,   111,   112,
     117,   180,   118,   113,   195,   119,   114,   115,   204,   141,
     198,   217,   219,   116,   223,   224,    12,   225,    21,   182,
      55,   117,    43,   118,   103,    77,   119,    68,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   182,   102,
     107,     0,   194,    52,     0,   135,     0,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   182,     0,     0,
       0,   196,     0,     0,     0,     0,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   182,     0,     0,     0,
     197,     0,     0,     0,     0,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   182,     0,     0,     0,   205,
       0,     0,     0,     0,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   182,     0,   199,     0,     0,     0,
       0,     0,     0,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   182,     0,     0,     0,     0,     0,     0,
       0,     0,   183,   184,   185,   186,   187,   188,   182,     0,
     191,   192,     0,     0,   182,     0,     0,   -48,   -48,   -48,
     -48,   -48,   -48,   183,   184,   185,   186,   187,   188
};

static const yytype_int16 yycheck[] =
{
      98,   120,     8,    31,   138,   139,   140,     8,   142,   143,
       8,    26,   146,     8,    20,    21,   150,     0,     7,     8,
      17,    18,   120,     8,    50,    32,   160,     8,    54,    26,
      18,    50,    33,    22,    31,    54,    34,     8,    33,    20,
      21,    30,    48,   141,    33,     8,    35,   145,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,    87,
      57,    50,    33,     7,     8,     8,   218,   219,    65,    18,
      61,    49,   100,    47,    52,   222,   223,   224,    22,    47,
     232,   179,     8,     8,    27,     8,    30,   221,    85,    33,
      87,    82,     8,    84,    19,    20,    21,    20,    21,    96,
      28,    51,    52,   100,    20,    21,    50,   226,   227,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,   238,
     218,   219,    25,    51,     8,    49,    50,     8,   226,   227,
      51,    52,    51,    52,   232,     5,     6,     8,     8,     9,
     238,    11,    12,    13,    53,    54,    16,    17,    19,    20,
      21,    51,    52,    23,    51,    52,     5,     6,     8,     8,
       9,    31,    50,    33,    13,    50,    36,    16,    17,    19,
      20,    21,    51,    52,    23,    24,    50,    50,     8,    51,
      49,    47,    31,     8,    33,     5,     6,    36,     8,     9,
      51,    18,    52,    13,     8,    15,    16,    17,    19,    47,
       3,     8,    49,    23,    50,    48,    50,    52,    49,    48,
      50,    31,    50,    33,     5,     6,    36,     8,     9,    50,
      54,    12,    13,     8,    50,    16,    17,    49,     8,    53,
      49,    48,    23,     4,    49,     5,     6,    10,     8,     9,
      31,    54,    33,    13,    50,    36,    16,    17,     8,    54,
      51,     8,    14,    23,    50,    50,     5,    51,    14,    28,
      38,    31,    26,    33,    92,    65,    36,    59,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    28,    90,
      96,    -1,    51,    31,    -1,   103,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    28,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    28,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    28,    -1,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    28,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    28,    -1,
      45,    46,    -1,    -1,    28,    -1,    -1,    37,    38,    39,
      40,    41,    42,    37,    38,    39,    40,    41,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    26,    56,    57,     8,    58,    59,     0,    32,    64,
      60,    27,    59,     8,    65,    66,    69,    18,    75,    47,
      34,    66,    47,     8,    20,    21,    76,    77,    78,    20,
      78,    83,    84,    95,    96,     8,    20,    21,    61,    62,
      63,    18,    19,    77,     8,    79,    80,    82,    25,     8,
      85,    84,    95,    50,    48,    62,     8,    70,    49,    52,
      50,    50,    51,    49,    71,    72,    73,    78,    80,    78,
      81,    88,    86,    87,    88,    47,    67,    73,    78,     8,
       8,    51,    52,    51,    52,    18,    89,    19,     8,    49,
      50,    88,    47,    88,    19,    78,    90,    91,     3,    93,
      74,    84,    81,    89,     8,    92,    19,    91,    49,     5,
       6,     8,     9,    13,    16,    17,    23,    31,    33,    36,
      97,    98,    99,   100,   102,   103,   104,   107,   108,   109,
     110,    48,    68,    84,    51,    93,    52,    49,    50,    50,
      53,    54,    50,    50,    54,    50,    24,    94,    98,    49,
      53,    48,    49,    48,     8,     7,     8,    22,    30,    33,
      50,   100,   101,   105,   105,    35,   105,     8,   100,   105,
     105,     8,     8,   100,   105,     4,    49,   105,    50,    54,
      54,   105,    28,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    51,    51,    50,    51,    51,    51,    49,
     105,   106,     8,   100,     8,    51,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,     8,    10,    14,
      51,    52,    50,    50,    50,    51,    97,    97,   105,   106,
     106,   106,    11,    12,    15,    51,    51,    51,    97,    12
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    56,    57,    57,    58,    58,    60,    59,
      61,    61,    62,    63,    63,    63,    64,    64,    65,    65,
      67,    68,    66,    69,    70,    70,    71,    72,    72,    73,
      74,    74,    75,    75,    76,    76,    77,    78,    78,    78,
      79,    79,    80,    80,    81,    81,    81,    82,    83,    83,
      84,    85,    86,    87,    87,    87,    88,    89,    89,    89,
      90,    90,    91,    92,    92,    93,    94,    95,    96,    97,
      97,    97,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    99,    99,   100,   100,   100,   101,   101,   101,
     102,   102,   103,   104,   104,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   106,   106,   106,   107,   108,   109,
     110
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     4,     3,     0,     2,     1,     0,     5,
       2,     1,     3,     1,     1,     1,     3,     0,     2,     1,
       0,     0,    10,     1,     2,     0,     3,     2,     1,     6,
       2,     1,     3,     0,     2,     1,     3,     1,     1,     1,
       3,     1,     1,     4,     3,     1,     0,     1,     2,     1,
       9,     1,     1,     3,     1,     0,     2,     3,     2,     0,
       3,     2,     2,     3,     1,     4,     3,     7,     2,     3,
       2,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       6,     4,     3,     3,     3,     3,     3,     6,     6,     6,
       9,     7,     7,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     4,     1,     3,     1,     0,     1,     1,     4,
       4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 39 "st7.y" /* yacc.c:1646  */
    {
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
#line 1523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 51 "st7.y" /* yacc.c:1646  */
    {
	 	showTT();
	 	showST();
	 	fprintf(fout,"%d\nMAIN\n%d\n%d\n%d\n%d\n%d\n%d\nMOV SP, %d\nMOV BP, %d\n",0,0,0,0,0,1,0,staticSize,staticSize);
	 	//codeGen($4,fout);
	 	fprintf(fout,"INT 10\n");
	 	printf("Successfully parsed program\n");
	 	exit(1);
		}
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 70 "st7.y" /* yacc.c:1646  */
    { TInstall((yyvsp[0])->name); currType=strdup((yyvsp[0])->name);}
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 70 "st7.y" /* yacc.c:1646  */
    {resetFieldIndex();}
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 73 "st7.y" /* yacc.c:1646  */
    {}
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 74 "st7.y" /* yacc.c:1646  */
    {}
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 77 "st7.y" /* yacc.c:1646  */
    { addField(currType, TLookup((yyvsp[-2])->name), (yyvsp[-1])->name);
								}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 88 "st7.y" /* yacc.c:1646  */
    {printf("Classes over!\n");
											currCptr=NULL;
											(yyval)=(yyvsp[-1]);}
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 93 "st7.y" /* yacc.c:1646  */
    {
									(yyval) = createTree(NULL,NULL,NULL, NULL,tCONNECT,NULL, (yyvsp[-1]),NULL, (yyvsp[0]),NULL);}
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 97 "st7.y" /* yacc.c:1646  */
    {printf("Methods\n");}
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 97 "st7.y" /* yacc.c:1646  */
    {printf("Methoddefn\n");}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 97 "st7.y" /* yacc.c:1646  */
    {printf("Class\n");(yyval)=(yyvsp[-3]);}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 99 "st7.y" /* yacc.c:1646  */
    { currCptr = CInstall((yyvsp[0])->name,NULL); printf("Installing %s\n",(yyvsp[0])->name);}
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 107 "st7.y" /* yacc.c:1646  */
    {printf("fld\n");
										Class_Finstall(currCptr,(yyvsp[-2])->name,(yyvsp[-1])->name);}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 114 "st7.y" /* yacc.c:1646  */
    {Class_Minstall(currCptr,(yyvsp[-4])->name,(yyvsp[-5])->type,(yyvsp[-2]));}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 117 "st7.y" /* yacc.c:1646  */
    {	printf("method defanother\n");
									(yyval) = createTree(NULL,NULL,NULL, NULL,tCONNECT,NULL, (yyvsp[-1]),NULL, (yyvsp[0]),NULL);
									}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 121 "st7.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);
            	printf("method def1\n");
					}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 127 "st7.y" /* yacc.c:1646  */
    {printf("GDECL Over\n");}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 128 "st7.y" /* yacc.c:1646  */
    {}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 131 "st7.y" /* yacc.c:1646  */
    {}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 132 "st7.y" /* yacc.c:1646  */
    {}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 135 "st7.y" /* yacc.c:1646  */
    {gAssignTypeDecl((yyvsp[-2]), (yyvsp[-1])); }
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 138 "st7.y" /* yacc.c:1646  */
    {(yyval)=createTypeNode((yyvsp[0])->name);}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 139 "st7.y" /* yacc.c:1646  */
    {(yyval)=createTypeNode((yyvsp[0])->name);}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 140 "st7.y" /* yacc.c:1646  */
    {(yyval)=createTypeNode((yyvsp[0])->name);}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 143 "st7.y" /* yacc.c:1646  */
    {	
								(yyvsp[0])->middle=(yyvsp[-2]);
								(yyval)=(yyvsp[0]);
								}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 147 "st7.y" /* yacc.c:1646  */
    {
								(yyvsp[0])->middle=NULL;
								(yyval)=(yyvsp[0]);
							}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 153 "st7.y" /* yacc.c:1646  */
    {//bst t; tVAR
				//2 for classes tho
				printf("global id\n");
				gInstall((yyvsp[0])->name,NULL,tVAR,2,0,getStaticSpace(2),NULL,NULL);
				(yyval)=(yyvsp[0]);
				}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 159 "st7.y" /* yacc.c:1646  */
    {
									gInstall((yyvsp[-3])->name,NULL,tFUNC, 0,0,NULL, (yyvsp[-1]), getFLabel());
									(yyvsp[-3])->nodetype=tFUNC;
									(yyval)=(yyvsp[-3]);
									}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 166 "st7.y" /* yacc.c:1646  */
    {
						(yyvsp[0])->middle=(yyvsp[-2]);
						(yyval)=(yyvsp[0]);
						}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 170 "st7.y" /* yacc.c:1646  */
    {
		   				(yyval)=(yyvsp[0]);
					}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 173 "st7.y" /* yacc.c:1646  */
    {(yyval)=NULL;}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 176 "st7.y" /* yacc.c:1646  */
    {	currFunc=strdup((yyvsp[0])->name);}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 179 "st7.y" /* yacc.c:1646  */
    {
						(yyval) = createTree(NULL,NULL,NULL, NULL,tCONNECT,NULL, (yyvsp[-1]),NULL, (yyvsp[0]),NULL);
						resetLocalSpace();
						}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 183 "st7.y" /* yacc.c:1646  */
    {	(yyval)=(yyvsp[0]);
						resetLocalSpace();
						}
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 188 "st7.y" /* yacc.c:1646  */
    {
							//$8 is a (slist+return) statement node
							
							(yyval) = createFuncDefNode((yyvsp[-8])->type,(yyvsp[-7])->name,(yyvsp[-1]));
							
							if(currCptr!=NULL){//paramlist check for method
								struct Memberfunclist *mlist =currCptr->vfuncptr;
								while(mlist!=NULL){
									if(strcmp(mlist->name,(yyvsp[-7])->name)==0){
										break;
									}
									mlist=mlist->next;
								}
								if(strcmp(mlist->name,(yyvsp[-7])->name)!=0){
									yyerror("No such method declared");
								}
							
							}else{	resetLocalSpace();}
							}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 209 "st7.y" /* yacc.c:1646  */
    { printf("newfid %s\n",(yyvsp[0])->name);
			if(currCptr==NULL){
				struct localTable* currTable = gLookup((yyvsp[0])->name);
				if(currTable!=NULL){
					localTableCreate((yyvsp[0])->name);
					currFunc=strdup((yyvsp[0])->name);
				} else {
						
						yyerror("Did not declare this func\n");
				}
			} else {
			//might be a method
				struct Memberfunclist* currTable = mLookup((yyvsp[0])->name,currCptr);
				if(currTable!=NULL){
					localTableCreate((yyvsp[0])->name);
					currFunc=strdup((yyvsp[0])->name);
				} else {
						
						yyerror("Did not declare this func\n");
				}
			
			}
}
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 233 "st7.y" /* yacc.c:1646  */
    {
						//Name Equivalence
						if(currCptr==NULL){
							paramCheck(currFunc);
						} else {
							mParamCheck(currFunc);
						}
						printf("valid Function defn\n");
}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 244 "st7.y" /* yacc.c:1646  */
    {
						localEntryCreate(currFunc, (yyvsp[0])->name, (yyvsp[0])->type,(yyvsp[0])->nodetype, getArgSpace());
						(yyvsp[0])->middle=(yyvsp[-2]);
						(yyval)=(yyvsp[0]);
						}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 249 "st7.y" /* yacc.c:1646  */
    {
					localEntryCreate(currFunc, (yyvsp[0])->name, (yyvsp[0])->type,(yyvsp[0])->nodetype, getArgSpace());
					
					}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 253 "st7.y" /* yacc.c:1646  */
    {
				(yyval)=NULL;}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 257 "st7.y" /* yacc.c:1646  */
    {	
						(yyvsp[0])->type = (yyvsp[-1])->type;
						(yyvsp[0])->nodetype=tVAR;
						(yyval)=(yyvsp[0]);
						}
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 264 "st7.y" /* yacc.c:1646  */
    {}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 264 "st7.y" /* yacc.c:1646  */
    {}
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 265 "st7.y" /* yacc.c:1646  */
    {}
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 267 "st7.y" /* yacc.c:1646  */
    {}
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 268 "st7.y" /* yacc.c:1646  */
    {}
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 271 "st7.y" /* yacc.c:1646  */
    {	if(currCptr==NULL){
							addIdListToLocal((yyvsp[-1]), (yyvsp[0]));
						} else {//add to classes' function's local tables
								//Edit: actuall, no chang from how we did it befroe
							addIdListToLocal((yyvsp[-1]), (yyvsp[0]));
						}
					}
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 280 "st7.y" /* yacc.c:1646  */
    {
				(yyvsp[0])->nodetype=tVAR;
				(yyvsp[0])->middle =(yyvsp[-2]);
				(yyval)=(yyvsp[0]);
			}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 285 "st7.y" /* yacc.c:1646  */
    {(yyvsp[0])->nodetype=tVAR;
				(yyval)=(yyvsp[0]);}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 291 "st7.y" /* yacc.c:1646  */
    {
				(yyval) = createFuncBodyNode((yyvsp[-2]), (yyvsp[-1]));	//tBODY
			}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 295 "st7.y" /* yacc.c:1646  */
    {
						(yyval)=createRetNode((yyvsp[-1]));//type checkdone in ast
				}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 303 "st7.y" /* yacc.c:1646  */
    {		
									(yyval) = createFuncDefNode(TLookup((yyvsp[-6])->name),"main",(yyvsp[-1]));
									resetLocalSpace();
								}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 309 "st7.y" /* yacc.c:1646  */
    {
		currFunc=strdup("main");
		printf("INT main\n");
		gInstall("main",TLookup("int"),tFUNC,0,0,0,NULL,NULL);
		localTableCreate("main");
		(yyval)=(yyvsp[-1]);
	}
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 318 "st7.y" /* yacc.c:1646  */
    {
		(yyval) = createTree(NULL,NULL,NULL, NULL,tCONNECT,NULL, (yyvsp[-2]),NULL, (yyvsp[-1]),NULL);
	}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 321 "st7.y" /* yacc.c:1646  */
    {
		(yyval)=(yyvsp[-1]);
	}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 324 "st7.y" /* yacc.c:1646  */
    {(yyval)=NULL;}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 335 "st7.y" /* yacc.c:1646  */
    {
				char *retFunc = strdup(currFunc);
				(yyvsp[-5]) = createVariableNode((yyvsp[-5]));
				
				if(CLookup((yyvsp[-1])->name)==(yyvsp[-5])->ctype){
					printf("New valid\n");
					
				}else {
					yyerror("can't new");
				}
				currFunc=strdup((yyvsp[-3])->name);
				(yyvsp[-4]) = createFuncCallNode("new",(yyvsp[-1]));
				currFunc=retFunc;
				
				(yyval) = createAsgNode((yyvsp[-5]), (yyvsp[-4]));
				}
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 355 "st7.y" /* yacc.c:1646  */
    {
					//checks tht exp and id have same type, or rhs is NULL
					(yyvsp[-2])=createVariableNode((yyvsp[-2]));
					(yyval) = createAsgNode((yyvsp[-2]), (yyvsp[0]));
					}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 360 "st7.y" /* yacc.c:1646  */
    {
				printf("here-var feild\n");
				(yyvsp[-2])=createFieldNode((yyvsp[-2])); 
				//printf("Final type is: %s\n",$1->type->name);
				(yyval) = createAsgNode((yyvsp[-2]), (yyvsp[0]));
		
		}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 370 "st7.y" /* yacc.c:1646  */
    {	//do the check later
						(yyvsp[-2])->middle=(yyvsp[0]);
						(yyval)=(yyvsp[-2]);
				}
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 374 "st7.y" /* yacc.c:1646  */
    {	//do the check later
						//t.num
						(yyvsp[-2])->middle=(yyvsp[0]);
						(yyval)=(yyvsp[-2]);
				}
#line 2051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 379 "st7.y" /* yacc.c:1646  */
    {
			if(currCptr==NULL){
				yyerror("Can't use self outside a method\n");
			}
				(yyvsp[-2])=createVarNode("self");
				(yyvsp[-2])->ctype = currCptr;
				(yyvsp[-2])->middle=(yyvsp[0]);
				(yyval)=(yyvsp[-2]);
		}
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 395 "st7.y" /* yacc.c:1646  */
    {
					char *retFunc = strdup(currFunc);
					printf("here- method call\n");
					currFunc=strdup((yyvsp[-5])->name);
					(yyval) = createMethodCall((yyvsp[-5])->name,(yyvsp[-3])->name,(yyvsp[-1]));
					currFunc=retFunc;
				}
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 406 "st7.y" /* yacc.c:1646  */
    {
							
							(yyval) = createIfNode((yyvsp[-6]),(yyvsp[-3]),(yyvsp[-1]));
						}
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 410 "st7.y" /* yacc.c:1646  */
    {
							(yyval) = createIfNode((yyvsp[-4]),(yyvsp[-1]),NULL);
						}
#line 2094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 414 "st7.y" /* yacc.c:1646  */
    {
							(yyval) = createWhileNode((yyvsp[-4]),(yyvsp[-1]));
							}
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 418 "st7.y" /* yacc.c:1646  */
    { (yyval)=createBreakNode();
					}
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 420 "st7.y" /* yacc.c:1646  */
    {
					(yyval)=createContinueNode();
					}
#line 2117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 423 "st7.y" /* yacc.c:1646  */
    {
							(yyval) = createOpNode(tADD,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 427 "st7.y" /* yacc.c:1646  */
    {
								(yyval) = createOpNode(tSUB,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 430 "st7.y" /* yacc.c:1646  */
    {
								(yyval) = createOpNode(tMUL,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 433 "st7.y" /* yacc.c:1646  */
    {
								(yyval) = createOpNode(tDIV,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 436 "st7.y" /* yacc.c:1646  */
    {		
								(yyval) = createOpNode(tLT,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 439 "st7.y" /* yacc.c:1646  */
    {	
								(yyval) = createOpNode(tGT,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 442 "st7.y" /* yacc.c:1646  */
    {
								(yyval) = createOpNode(tLE,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 445 "st7.y" /* yacc.c:1646  */
    {
								(yyval) = createOpNode(tGE,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 448 "st7.y" /* yacc.c:1646  */
    {
							(yyval) = createOpNode(tEQ,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 451 "st7.y" /* yacc.c:1646  */
    {
							(yyval) = createOpNode(tNE,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 454 "st7.y" /* yacc.c:1646  */
    {
							(yyval) = createOpNode(tMOD,(yyvsp[-2]),(yyvsp[0]));
	}
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 457 "st7.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 458 "st7.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 459 "st7.y" /* yacc.c:1646  */
    {//todo
				(yyvsp[0])=createFieldNode((yyvsp[0])); 
				//printf("Final type is: %s\n",$1->type->name);
				(yyval) = (yyvsp[0]);
			}
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 464 "st7.y" /* yacc.c:1646  */
    {
			
		}
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 467 "st7.y" /* yacc.c:1646  */
    {	
							if(lookup((yyvsp[0])->name) != NULL){
								(yyvsp[0])->entry = lookup((yyvsp[0])->name);
								//lookup creates the entry acc to where it finds the var declared
								if((yyvsp[0])->entry->isLoc){
									
									(yyvsp[0])->type=((yyvsp[0])->entry->localEntry)->type;
									if(((yyvsp[0])->entry->localEntry)->nodetype!=tVAR){
										printf("%s\n",(yyvsp[0])->name);
										yyerror("Type mismatch: Expected Var\n");
									}
									(yyvsp[0])->nodetype=(yyvsp[0])->entry->localEntry->nodetype;
								}
								else {
									(yyvsp[0])->type=((yyvsp[0])->entry->globalEntry)->type;								
									if(((yyvsp[0])->entry->globalEntry)->nodetype!=tVAR){
										yyerror("Type mismatch: Expected Var \n");
									}
									(yyvsp[0])->nodetype=((yyvsp[0])->entry->globalEntry)->nodetype;
								}
							} else if(currCptr!=NULL){
							} else {
								printf("%s\n:",(yyvsp[0])->name);
								yyerror("Variable undeclared\n");
							}
						(yyval) = (yyvsp[0]);
						}
#line 2267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 494 "st7.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 495 "st7.y" /* yacc.c:1646  */
    {	char *retFunc = strdup(currFunc);
							currFunc=strdup((yyvsp[-3])->name);
							(yyval) = createFuncCallNode((yyvsp[-3])->name,(yyvsp[-1]));
							currFunc=retFunc;
							}
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 500 "st7.y" /* yacc.c:1646  */
    {
					(yyvsp[0])->type=TLookup("NULL");
					(yyvsp[0])->val=-1;
					(yyvsp[0])->nodetype=tNUM;
		}
#line 2293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 508 "st7.y" /* yacc.c:1646  */
    {	(yyvsp[0])->arglist=(yyvsp[-2]);
							(yyval)=(yyvsp[0]);}
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 510 "st7.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 511 "st7.y" /* yacc.c:1646  */
    {(yyval)=NULL;}
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 515 "st7.y" /* yacc.c:1646  */
    {
	(yyval) = createTree(NULL,NULL,NULL, NULL,tBRKP,NULL, NULL,NULL, NULL,NULL);	
	}
#line 2320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 519 "st7.y" /* yacc.c:1646  */
    {
		(yyval)=createExitNode();
	}
#line 2328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 523 "st7.y" /* yacc.c:1646  */
    {
										(yyval)= createReadNode((yyvsp[-1]));
								}
#line 2336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 527 "st7.y" /* yacc.c:1646  */
    {	(yyval)= createWriteNode((yyvsp[-1]));}
#line 2342 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2346 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 530 "st7.y" /* yacc.c:1906  */


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
