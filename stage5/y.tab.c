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
#line 1 "st5.y" /* yacc.c:339  */

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

#line 81 "y.tab.c" /* yacc.c:339  */

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

/* Copy the second part of user declarations.  */

#line 202 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   348

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  184

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    45,     2,
      38,    39,     2,     2,    37,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    36,
       2,    44,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    40,     2,    41,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,    43,     2,     2,     2,     2,
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
      35
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    35,    35,    45,    56,    57,    60,    61,    64,    69,
      71,    74,    78,    84,    88,    94,    99,   104,   111,   115,
     118,   121,   124,   128,   133,   140,   150,   156,   161,   164,
     168,   173,   181,   181,   183,   184,   187,   192,   196,   198,
     198,   202,   208,   212,   219,   226,   234,   237,   240,   243,
     244,   245,   246,   247,   248,   249,   252,   256,   260,   262,
     268,   289,   312,   335,   368,   372,   376,   380,   382,   385,
     389,   392,   395,   398,   401,   404,   407,   410,   413,   416,
     417,   418,   443,   469,   496,   521,   544,   575,   576,   583,
     585,   586
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
  "MAIN", "\"<\"", "\">\"", "\"<=\"", "\">=\"", "\"==\"", "\"!=\"",
  "\"+\"", "\"-\"", "\"*\"", "\"/\"", "';'", "','", "'('", "')'", "'['",
  "']'", "'{'", "'}'", "'='", "'&'", "$accept", "prog", "GDeclBlock",
  "GDeclList", "GDecl", "Type", "Gidlist", "Gid", "newParamList", "fID",
  "FDefBlock", "Fdef", "newFID", "validParamList", "ParamList", "Param",
  "LdeclBlock", "LDecList", "LDecl", "IdList", "IDVar", "Body", "Retstmt",
  "MainBlock", "Main", "Slist", "Stmt", "Breakpoint", "InputStmt",
  "OutputStmt", "AsgStmt", "Var", "IfStmt", "WhileStmt", "BrkContStmt",
  "Expr", "ArgList", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,    59,    44,    40,    41,
      91,    93,   123,   125,    61,    38
};
# endif

#define YYPACT_NINF -153

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-153)))

#define YYTABLE_NINF -22

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-22)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -10,    -5,    19,    38,  -153,  -153,    31,  -153,    10,  -153,
       2,    15,    38,  -153,  -153,     5,  -153,  -153,   -33,    54,
      46,  -153,    28,  -153,  -153,    40,  -153,  -153,    47,    80,
    -153,  -153,    10,    -5,    -5,    48,    53,  -153,    13,   -13,
    -153,    62,    70,  -153,    94,    74,  -153,   110,    -5,  -153,
      77,    -5,    35,   117,   115,  -153,  -153,    94,  -153,  -153,
      14,    51,    90,   132,    86,    89,   117,  -153,   125,   102,
    -153,  -153,   107,  -153,   106,   108,   111,   109,   112,  -153,
    -153,  -153,   144,    87,   118,  -153,  -153,  -153,  -153,   123,
    -153,  -153,  -153,  -153,  -153,   126,  -153,    14,  -153,    23,
      23,    23,    23,    23,  -153,    23,   164,   134,  -153,    23,
    -153,  -153,  -153,    25,  -153,   174,    23,   175,   210,   224,
     130,   238,   252,   280,  -153,  -153,   291,    23,    23,  -153,
     266,   145,    23,    23,    23,    23,    23,    23,    23,    23,
      23,    23,  -153,  -153,   158,   176,   170,  -153,   291,    60,
     146,  -153,    23,   311,   311,   311,   311,   311,   311,   301,
     301,   317,   317,    23,   132,   132,    23,  -153,   159,   162,
     178,    68,   100,   291,    23,  -153,  -153,   132,  -153,  -153,
     194,   119,  -153,  -153
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     0,     9,    10,     0,     7,     0,     1,
       9,     0,     0,    23,     3,     0,     4,     6,    13,     0,
       0,    12,     0,    45,    25,     0,    22,     2,     0,     0,
      15,     8,     0,    20,    29,     0,     0,    11,     0,     0,
      19,     0,    26,    28,     0,    16,    30,     0,     0,    14,
       0,     0,     0,     0,     0,    31,    18,     0,    27,    33,
      39,     0,     0,    48,     0,     0,     0,    40,     0,    36,
      38,    32,     0,    35,     0,     0,    60,     0,     0,    67,
      68,    56,     0,     0,     0,    55,    49,    50,    51,     0,
      52,    53,    54,    44,    17,     0,    41,    39,    34,     0,
       0,     0,     0,     0,    61,     0,     0,     0,    47,     0,
      24,    37,    80,    81,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    46,    59,    91,     0,    82,
       0,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    57,    58,    62,     0,     0,    43,    90,     0,
       0,    79,     0,    73,    74,    75,    76,    77,    78,    69,
      70,    71,    72,     0,    48,    48,     0,    88,    85,     0,
       0,     0,     0,    89,     0,    84,    63,    48,    65,    66,
       0,     0,    86,    64
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -153,  -153,  -153,  -153,   195,     8,  -153,   168,  -153,  -153,
    -153,   190,  -153,  -153,  -153,    -2,   157,  -153,   154,  -153,
     120,   150,  -153,   206,  -153,  -152,   -83,  -153,  -153,  -153,
    -153,  -153,  -153,  -153,  -153,   -99,  -153
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     6,     7,    38,    20,    21,    39,    22,
      12,    13,    25,    41,    42,    40,    53,    61,    62,    69,
      70,    64,   106,    14,    15,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,   118,   149
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     107,   119,   120,   121,   122,   -21,   123,    29,     1,     8,
     126,    11,   171,   172,     8,     4,     5,   130,    18,     9,
      11,    46,    67,    24,    48,   181,    49,    23,   148,   150,
     112,   113,    43,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,    28,    19,   114,    56,    47,    68,    58,
      16,     4,     5,   169,    59,     4,     5,   115,    10,     5,
      60,   116,    30,   127,   170,   128,    33,   173,   117,    60,
      71,     4,     5,    74,    75,   180,    76,    77,    34,   177,
     178,    78,    31,    32,    79,    80,    35,    36,   107,   107,
      44,    81,    74,    75,    45,    76,    77,   166,   107,   167,
      78,    50,    82,    79,    80,    74,    75,    51,    76,    77,
      81,   105,    52,    78,    54,   179,    79,    80,    55,    57,
      63,    82,    65,    81,    74,    75,    73,    76,    77,    93,
      94,   183,    78,    96,    82,    79,    80,    74,    75,    97,
      76,    77,    81,    98,    99,    78,   100,   102,    79,    80,
     103,   101,   104,    82,   108,    81,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,    82,   109,   124,   110,
     125,   144,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   129,   131,   165,   152,   164,   168,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   163,   174,
      37,    17,    26,   175,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,    66,    72,    95,   111,    27,   176,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
       0,     0,     0,     0,     0,   182,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,     0,     0,     0,   142,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
       0,     0,     0,   143,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,     0,     0,     0,   145,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,     0,     0,
       0,   146,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,     0,     0,     0,   151,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   147,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   132,   133,   134,
     135,   136,   137,     0,     0,   140,   141,   -22,   -22,   -22,
     -22,   -22,   -22,   132,   133,   134,   135,   136,   137
};

static const yytype_int16 yycheck[] =
{
      83,   100,   101,   102,   103,    38,   105,    40,    18,     1,
     109,     3,   164,   165,     6,    20,    21,   116,     8,     0,
      12,     8,     8,     8,    37,   177,    39,    25,   127,   128,
       7,     8,    34,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,    38,    34,    22,    48,    34,    34,    51,
      19,    20,    21,   152,    19,    20,    21,    34,    20,    21,
      52,    38,     8,    38,   163,    40,    38,   166,    45,    61,
      19,    20,    21,     5,     6,   174,     8,     9,    38,    11,
      12,    13,    36,    37,    16,    17,    39,     7,   171,   172,
      42,    23,     5,     6,    41,     8,     9,    37,   181,    39,
      13,    39,    34,    16,    17,     5,     6,    37,     8,     9,
      23,    24,    18,    13,    40,    15,    16,    17,     8,    42,
       3,    34,     7,    23,     5,     6,    36,     8,     9,    43,
      41,    12,    13,     8,    34,    16,    17,     5,     6,    37,
       8,     9,    23,    36,    38,    13,    38,    38,    16,    17,
      38,    40,     8,    34,    36,    23,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    34,    44,     4,    43,
      36,    41,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,     8,     8,    14,    40,    10,    41,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    40,    40,
      32,     6,    12,    41,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    57,    61,    66,    97,    12,    41,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    41,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    39,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    39,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    39,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    39,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    39,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    26,    27,    28,
      29,    30,    31,    -1,    -1,    34,    35,    26,    27,    28,
      29,    30,    31,    26,    27,    28,    29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    18,    47,    48,    20,    21,    49,    50,    51,     0,
      20,    51,    56,    57,    69,    70,    19,    50,     8,    34,
      52,    53,    55,    25,     8,    58,    57,    69,    38,    40,
       8,    36,    37,    38,    38,    39,     7,    53,    51,    54,
      61,    59,    60,    61,    42,    41,     8,    34,    37,    39,
      39,    37,    18,    62,    40,     8,    61,    42,    61,    19,
      51,    63,    64,     3,    67,     7,    62,     8,    34,    65,
      66,    19,    64,    36,     5,     6,     8,     9,    13,    16,
      17,    23,    34,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    43,    41,    67,     8,    37,    36,    38,
      38,    40,    38,    38,     8,    24,    68,    72,    36,    44,
      43,    66,     7,     8,    22,    34,    38,    45,    81,    81,
      81,    81,    81,    81,     4,    36,    81,    38,    40,     8,
      81,     8,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    39,    39,    41,    39,    39,    36,    81,    82,
      81,    39,    40,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    40,    10,    14,    37,    39,    41,    81,
      81,    71,    71,    81,    40,    41,    41,    11,    12,    15,
      81,    71,    41,    12
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    47,    48,    48,    49,    49,    50,    51,
      51,    52,    52,    53,    53,    53,    53,    53,    54,    54,
      54,    55,    56,    56,    57,    58,    59,    60,    60,    60,
      61,    61,    62,    62,    63,    63,    64,    65,    65,    66,
      66,    66,    67,    68,    69,    70,    71,    71,    71,    72,
      72,    72,    72,    72,    72,    72,    73,    74,    75,    76,
      77,    77,    77,    77,    78,    78,    79,    80,    80,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    82,
      82,    82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     3,     0,     2,     1,     3,     1,
       1,     3,     1,     1,     4,     2,     4,     7,     3,     1,
       0,     1,     2,     1,     9,     1,     1,     3,     1,     0,
       2,     3,     3,     2,     3,     2,     2,     3,     1,     0,
       1,     2,     4,     3,     7,     2,     3,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     3,
       1,     2,     4,     7,     9,     7,     7,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     2,     2,     5,     4,     7,     1,     4,     3,
       1,     0
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
#line 35 "st5.y" /* yacc.c:1646  */
    {
	 	showST();
	 	fprintf(fout,"%d\nMAIN\n%d\n%d\n%d\n%d\n%d\n%d\n",0,0,0,0,0,1,0);
	 	codeGen((yyvsp[-1]),fout);
	 	freeAllReg();
	 	codeGen((yyvsp[0]),fout);
	 	fprintf(fout,"INT 10\n");
		printf("\nSuccessfully parsed program with fdecl\n");
		exit(1);
		}
#line 1449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 45 "st5.y" /* yacc.c:1646  */
    {
	 	showST();
	 	fprintf(fout,"%d\nMAIN\n%d\n%d\n%d\n%d\n%d\n%d\nMOV SP, %d\nMOV BP, %d\n",0,0,0,0,0,1,0,staticSize,staticSize);
	 	codeGen((yyvsp[0]),fout);
	 	fprintf(fout,"INT 10\n");
	 	printf("Successfully parsed program\n");
	 	exit(1);
		}
#line 1462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 56 "st5.y" /* yacc.c:1646  */
    {}
#line 1468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 57 "st5.y" /* yacc.c:1646  */
    {}
#line 1474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 60 "st5.y" /* yacc.c:1646  */
    {}
#line 1480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 61 "st5.y" /* yacc.c:1646  */
    {}
#line 1486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 64 "st5.y" /* yacc.c:1646  */
    {	
									gAssignTypeDecl((yyvsp[-2]), (yyvsp[-1]));
								}
#line 1494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 69 "st5.y" /* yacc.c:1646  */
    {
								(yyval)=createTypeNode(intType);}
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 71 "st5.y" /* yacc.c:1646  */
    {(yyval)=createTypeNode(stringType);}
#line 1507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 74 "st5.y" /* yacc.c:1646  */
    {	
								(yyvsp[0])->middle=(yyvsp[-2]);
								(yyval)=(yyvsp[0]);
								}
#line 1516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 78 "st5.y" /* yacc.c:1646  */
    {
								(yyvsp[0])->middle=NULL;
								(yyval)=(yyvsp[0]);
							}
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 84 "st5.y" /* yacc.c:1646  */
    {
				gInstall((yyvsp[0])->name,NULL,tVAR,1,0,getStaticSpace(1),NULL,NULL);
				(yyval)=(yyvsp[0]);
				}
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 88 "st5.y" /* yacc.c:1646  */
    {
									
									gInstall((yyvsp[-3])->name,NULL,tFUNC, 0,0,NULL, (yyvsp[-1]), getFLabel());
									(yyvsp[-3])->nodetype=tFUNC;
									(yyval)=(yyvsp[-3]);
									}
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 94 "st5.y" /* yacc.c:1646  */
    {
				gInstall((yyvsp[-1])->name,NULL,tPVAR,1,0,getStaticSpace(1),NULL,NULL);
				(yyvsp[0])->nodetype=tPVAR;
				(yyval)=(yyvsp[0]);
				}
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 99 "st5.y" /* yacc.c:1646  */
    {
				gInstall((yyvsp[-3])->name,NULL,tARR,(yyvsp[-1])->val,0,getStaticSpace((yyvsp[-1])->val),NULL,NULL);
				(yyvsp[-3])->nodetype=tARR;
				(yyval)=(yyvsp[-3]);
		}
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 104 "st5.y" /* yacc.c:1646  */
    {
				gInstall((yyvsp[-6])->name,NULL,tDARR,(yyvsp[-4])->val,(yyvsp[-1])->val,getStaticSpace(((yyvsp[-4])->val)*((yyvsp[-2])->val)),NULL,NULL);
				(yyvsp[-6])->nodetype=tDARR;
				(yyval)=(yyvsp[-6]);
		}
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 111 "st5.y" /* yacc.c:1646  */
    {
						(yyvsp[0])->middle=(yyvsp[-2]);
						(yyval)=(yyvsp[0]);
						}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 115 "st5.y" /* yacc.c:1646  */
    {
		   				(yyval)=(yyvsp[0]);
					}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 118 "st5.y" /* yacc.c:1646  */
    {(yyval)=NULL;}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 121 "st5.y" /* yacc.c:1646  */
    {	currFunc=strdup((yyvsp[0])->name);}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 124 "st5.y" /* yacc.c:1646  */
    {
						(yyval) = createTree(NULL,NULL, NULL,tCONNECT,NULL, (yyvsp[-1]),NULL, (yyvsp[0]),NULL);
						resetLocalSpace();
						}
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 128 "st5.y" /* yacc.c:1646  */
    {
						(yyval)=(yyvsp[0]);
						resetLocalSpace();
						}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 133 "st5.y" /* yacc.c:1646  */
    {
							//$8 is a (slist+return) statement node
							
							(yyval) = createFuncDefNode((yyvsp[-8])->type,(yyvsp[-7])->name,(yyvsp[-1]));
							resetLocalSpace();
							}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 140 "st5.y" /* yacc.c:1646  */
    {
			struct localTable* currTable = gLookup((yyvsp[0])->name);
			if(currTable!=NULL){
				localTableCreate((yyvsp[0])->name);
				currFunc=strdup((yyvsp[0])->name);
			} else {
					yyerror("Did not declare this func\n");
			}
}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 150 "st5.y" /* yacc.c:1646  */
    {
						//Name Equivalence
						paramCheck(currFunc);
}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 156 "st5.y" /* yacc.c:1646  */
    {
						localEntryCreate(currFunc, (yyvsp[0])->name, (yyvsp[0])->type,(yyvsp[0])->nodetype, getArgSpace());
						(yyvsp[0])->middle=(yyvsp[-2]);
						(yyval)=(yyvsp[0]);
						}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 161 "st5.y" /* yacc.c:1646  */
    {
						localEntryCreate(currFunc, (yyvsp[0])->name, (yyvsp[0])->type,(yyvsp[0])->nodetype, getArgSpace());
					}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 164 "st5.y" /* yacc.c:1646  */
    {
				(yyval)=NULL;}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 168 "st5.y" /* yacc.c:1646  */
    {	
						(yyvsp[0])->type = (yyvsp[-1])->type;
						(yyvsp[0])->nodetype=tVAR;
						(yyval)=(yyvsp[0]);
						}
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 173 "st5.y" /* yacc.c:1646  */
    {
				//+10?
				(yyvsp[0])->type = (yyvsp[-2])->type;
				(yyvsp[0])->nodetype=tPVAR;
				(yyval)=(yyvsp[0]);
			}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 181 "st5.y" /* yacc.c:1646  */
    {}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 181 "st5.y" /* yacc.c:1646  */
    {}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 183 "st5.y" /* yacc.c:1646  */
    {}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 184 "st5.y" /* yacc.c:1646  */
    {}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 187 "st5.y" /* yacc.c:1646  */
    {	
						addIdListToLocal((yyvsp[-1]), (yyvsp[0]));
					}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 192 "st5.y" /* yacc.c:1646  */
    {
				(yyvsp[0])->middle =(yyvsp[-2]);
				(yyval)=(yyvsp[0]);
			}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 196 "st5.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 198 "st5.y" /* yacc.c:1646  */
    {
				(yyvsp[0])->nodetype=tVAR;
				(yyval)=(yyvsp[0]);
			}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 202 "st5.y" /* yacc.c:1646  */
    {
				(yyvsp[0])->nodetype=tPVAR;
				(yyval)=(yyvsp[0]);
		}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 208 "st5.y" /* yacc.c:1646  */
    {
				(yyval) = createFuncBodyNode((yyvsp[-2]), (yyvsp[-1]));	//tBODY
			}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 212 "st5.y" /* yacc.c:1646  */
    {
						(yyval)=createRetNode((yyvsp[-1]));//type checkdone in ast
				}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 220 "st5.y" /* yacc.c:1646  */
    {
									(yyval) = createFuncDefNode((yyvsp[-6])->type,"main",(yyvsp[-1]));
									resetLocalSpace();
								}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 226 "st5.y" /* yacc.c:1646  */
    {
		currFunc=strdup("main");
		gInstall("main",intType,tFUNC,0,0,0,NULL,NULL);
		localTableCreate("main");
		(yyval)=(yyvsp[-1]);
	}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 234 "st5.y" /* yacc.c:1646  */
    {
		(yyval) = createTree(NULL,NULL, NULL,tCONNECT,NULL, (yyvsp[-2]),NULL, (yyvsp[-1]),NULL);
	}
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 237 "st5.y" /* yacc.c:1646  */
    {
		(yyval)=(yyvsp[-1]);
	}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 240 "st5.y" /* yacc.c:1646  */
    {(yyval)=NULL;}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 252 "st5.y" /* yacc.c:1646  */
    {
	(yyval) = createTree(NULL,NULL, NULL,tBRKP,NULL, NULL,NULL, NULL,NULL);	
	}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 256 "st5.y" /* yacc.c:1646  */
    {
										(yyval)= createReadNode((yyvsp[-1]));
								}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 260 "st5.y" /* yacc.c:1646  */
    {	(yyval)= createWriteNode((yyvsp[-1]));}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 262 "st5.y" /* yacc.c:1646  */
    {
					
					//checks tht exp and id have same type
					(yyval) = createAsgNode((yyvsp[-2]), (yyvsp[0]));

}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 268 "st5.y" /* yacc.c:1646  */
    {	
						
						if(lookup((yyvsp[0])->name) != NULL){
							(yyvsp[0])->entry = lookup((yyvsp[0])->name);
							if((yyvsp[0])->entry->isLoc){
								//localEntry has a nodetype for tPVAR now
								(yyvsp[0])->nodetype=((yyvsp[0])->entry->localEntry)->nodetype;
								(yyvsp[0])->type=((yyvsp[0])->entry->localEntry)->type;
							} else {
								//_a_=&b
								if((((yyvsp[0])->entry->globalEntry)->nodetype!=tVAR) && ((yyvsp[0])->entry->globalEntry)->nodetype!=tPVAR){
									yyerror("Type mismatch: Not a variable");
								}
								(yyvsp[0])->nodetype=((yyvsp[0])->entry->globalEntry)->nodetype;
								(yyvsp[0])->type=((yyvsp[0])->entry->globalEntry)->type;
							}
						} else {
							yyerror("Variable undeclared\n");
						}
						(yyval) = (yyvsp[0]);
					}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 289 "st5.y" /* yacc.c:1646  */
    {		//*p=*p+1 turns to q=*p+1
						if(lookup((yyvsp[0])->name) != NULL){
							(yyvsp[0])->entry = lookup((yyvsp[0])->name);							
							if((yyvsp[0])->entry->isLoc){
								if((yyvsp[0])->entry->localEntry->nodetype!=tPVAR){
									yyerror("Type mismatch: Not declared as pointer variable\n");
								}
								(yyvsp[0])->type=((yyvsp[0])->entry->localEntry->type)-10;	//type says not pointer
								
							} else {
								if((yyvsp[0])->entry->globalEntry->nodetype!=tPVAR){
								yyerror("Type mismatch: Not declared as pointer variable\n");
								}
								(yyvsp[0])->type=((yyvsp[0])->entry->globalEntry->type)-10;	//type says not pointer
							}
							(yyvsp[0])->nodetype=tPVAR;				//nodetype says pointer
							
														
						} else {
							yyerror("Variable undeclared\n");
						}
						(yyval) = (yyvsp[0]);
		}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 312 "st5.y" /* yacc.c:1646  */
    {	if(lookup((yyvsp[-3])->name) != NULL){
								(yyvsp[-3])->entry = lookup((yyvsp[-3])->name);
								//will never be a local variable, not even an argument
								if(((yyvsp[-3])->entry)->globalEntry->nodetype!=tARR){
									yyerror("Type mismatch: Not declared as array\n");
								}
								
								(yyvsp[-3])->nodetype=tARR;
								(yyvsp[-3])->type=((yyvsp[-3])->entry)->globalEntry->type;
								
								if((yyvsp[-1])->type==intType){
									if(((yyvsp[-1])->nodetype==tNUM) && ( (yyvsp[-1])->val >= (yyvsp[-3])->entry->globalEntry->size[0])){
										yyerror("Array out of bounds\n");
									}
								} else {
									yyerror("Expected interger type as offset\n");
								}
								(yyvsp[-3])->middle=(yyvsp[-1]);
							} else {
								yyerror("Variable undeclared\n");
							}				
							(yyval) = (yyvsp[-3]);
							}
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 335 "st5.y" /* yacc.c:1646  */
    {
							if(lookup((yyvsp[-6])->name) != NULL){
								(yyvsp[-6])->entry = lookup((yyvsp[-6])->name);
								//will never be a local variable, not even an argument
								if(((yyvsp[-6])->entry)->globalEntry->nodetype!=tDARR){
									yyerror("Type mismatch: Not declared as array\n");
								}
								
								(yyvsp[-6])->nodetype=tDARR;
								(yyvsp[-6])->type=((yyvsp[-6])->entry)->globalEntry->type;
								
								if((yyvsp[-4])->type==intType){
									if(((yyvsp[-4])->nodetype==tNUM) && ( (yyvsp[-4])->val >= (yyvsp[-6])->entry->globalEntry->size[0])){
										yyerror("Array out of bounds\n");
									}
								} else {
									yyerror("Expected interger type as offset\n");
								}
							
								if((yyvsp[-1])->type==intType){
									if(((yyvsp[-1])->nodetype==tNUM) && ( (yyvsp[-1])->val >= (yyvsp[-6])->entry->globalEntry->size[1])){
										yyerror("Array out of bounds\n");
									}
								}
								(yyvsp[-6])->right=(yyvsp[-1]);		
								(yyval) = (yyvsp[-6]);
							} else {
								yyerror("Variable undeclared\n");
							}	
			
		}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 368 "st5.y" /* yacc.c:1646  */
    {
							
							(yyval) = createIfNode((yyvsp[-6]),(yyvsp[-3]),(yyvsp[-1]));
						}
#line 1985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 372 "st5.y" /* yacc.c:1646  */
    {
							(yyval) = createIfNode((yyvsp[-4]),(yyvsp[-1]),NULL);
						}
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 376 "st5.y" /* yacc.c:1646  */
    {
							(yyval) = createWhileNode((yyvsp[-4]),(yyvsp[-1]));
							}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 380 "st5.y" /* yacc.c:1646  */
    { (yyval)=createBreakNode();
					}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 382 "st5.y" /* yacc.c:1646  */
    {
					(yyval)=createContinueNode();
					}
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 385 "st5.y" /* yacc.c:1646  */
    {
							(yyval) = createOpNode(tADD,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 389 "st5.y" /* yacc.c:1646  */
    {
								(yyval) = createOpNode(tSUB,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 392 "st5.y" /* yacc.c:1646  */
    {
								(yyval) = createOpNode(tMUL,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 395 "st5.y" /* yacc.c:1646  */
    {
								(yyval) = createOpNode(tDIV,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 398 "st5.y" /* yacc.c:1646  */
    {		
								(yyval) = createOpNode(tLT,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 401 "st5.y" /* yacc.c:1646  */
    {	
								(yyval) = createOpNode(tGT,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 404 "st5.y" /* yacc.c:1646  */
    {
								(yyval) = createOpNode(tLE,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 407 "st5.y" /* yacc.c:1646  */
    {
								(yyval) = createOpNode(tGE,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 410 "st5.y" /* yacc.c:1646  */
    {
							(yyval) = createOpNode(tEQ,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 413 "st5.y" /* yacc.c:1646  */
    {
							(yyval) = createOpNode(tNE,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 416 "st5.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 417 "st5.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 418 "st5.y" /* yacc.c:1646  */
    {	
							if(lookup((yyvsp[0])->name) != NULL){
								(yyvsp[0])->entry = lookup((yyvsp[0])->name);
								//lookup creates the entry acc to where it finds the var declared
								if((yyvsp[0])->entry->isLoc){
									(yyvsp[0])->type=((yyvsp[0])->entry->localEntry)->type;
									if(((yyvsp[0])->entry->localEntry)->nodetype!=tVAR && ((yyvsp[0])->entry->localEntry)->nodetype!=tPVAR){
										printf("%s\n",(yyvsp[0])->name);
										yyerror("Type mismatch: Expected Var or PVar \n");
									}
									(yyvsp[0])->nodetype=(yyvsp[0])->entry->localEntry->nodetype;
								}
								else {
									(yyvsp[0])->type=((yyvsp[0])->entry->globalEntry)->type;								
									if(((yyvsp[0])->entry->globalEntry)->nodetype!=tVAR && ((yyvsp[0])->entry->globalEntry)->nodetype!=tPVAR){
										yyerror("Type mismatch: Expected Var \n");
									}
									(yyvsp[0])->nodetype=((yyvsp[0])->entry->globalEntry)->nodetype;
								}
							} else {
								printf("%s\n:",(yyvsp[0])->name);
								yyerror("Variable undeclared\n");
							}
						(yyval) = (yyvsp[0]);
						}
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 443 "st5.y" /* yacc.c:1646  */
    {		
					if(lookup((yyvsp[0])->name) != NULL){
						(yyvsp[0])->entry = lookup((yyvsp[0])->name);
						if((yyvsp[0])->entry->isLoc){						
							if((yyvsp[0])->entry->localEntry->nodetype==tPVAR){
								(yyvsp[0])->type=((yyvsp[0])->entry->localEntry)->type-10;
								(yyvsp[0])->nodetype=tDEREF;
								(yyval)=(yyvsp[0]);
							} else {
								yyerror("Type mismatch: Expected Pointer\n");
							}
						} else {
							if((yyvsp[0])->entry->globalEntry->nodetype==tPVAR){
									(yyvsp[0])->type=((yyvsp[0])->entry->globalEntry)->type-10;
									(yyvsp[0])->nodetype=tDEREF;
									(yyval)=(yyvsp[0]);
								} else {
									yyerror("Type mismatch: Expected Pointer\n");
								}
					
							}
					} else {
						yyerror("Variable undeclared\n");
					}
					(yyval) = (yyvsp[0]);
			}
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 469 "st5.y" /* yacc.c:1646  */
    {	
				if(lookup((yyvsp[0])->name) != NULL){
						(yyvsp[0])->entry = lookup((yyvsp[0])->name);
						
						if((yyvsp[0])->entry->isLoc){						
								if((yyvsp[0])->entry->localEntry->nodetype==tVAR){
								(yyvsp[0])->type=((yyvsp[0])->entry->localEntry)->type+10;
								(yyvsp[0])->nodetype=tREF;
								(yyval)=(yyvsp[0]);
							} else {
								yyerror("Type mismatch: Expected Variable after &\n");
							}
						} else {
							if((yyvsp[0])->entry->globalEntry->nodetype==tVAR){
								(yyvsp[0])->type=((yyvsp[0])->entry->globalEntry)->type+10;
								(yyvsp[0])->nodetype=tREF;
								(yyval)=(yyvsp[0]);
							} else {
								yyerror("Type mismatch: Expected Variable after &\n");
							}
						}
					
				} else {
						yyerror("Variable undeclared\n");
					}
				(yyval) = (yyvsp[0]);
			}
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 496 "st5.y" /* yacc.c:1646  */
    {
					if(lookup((yyvsp[-3])->name) != NULL){
						(yyvsp[-3])->entry = lookup((yyvsp[-3])->name);
						//can't be local
						if((yyvsp[-3])->entry->globalEntry->nodetype==tARR){
								(yyvsp[-3])->type=((yyvsp[-3])->entry->globalEntry)->type+10;
								(yyvsp[-3])->nodetype=tREF;
								(yyval)=(yyvsp[-3]);
								if((yyvsp[-1])->type==intType){
									(yyvsp[-3])->middle = (yyvsp[-1]);
									if(((yyvsp[-2])->nodetype==tNUM) && ( (yyvsp[-1])->val >= (yyvsp[-3])->entry->globalEntry->size)){
										yyerror("Array out of bounds\n");
									}
								} else {
									yyerror("Expected integer type for array offset\n");
								}
						} else {
								yyerror("Type mismatch: Expected Array after &\n");
						}
					} else {
							yyerror("Array undeclared\n");
						}
				(yyval) = (yyvsp[-3]);
					
	}
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 521 "st5.y" /* yacc.c:1646  */
    {
						if(lookup((yyvsp[-3])->name) != NULL){
								(yyvsp[-3])->entry = lookup((yyvsp[-3])->name);
								//must be global
								(yyvsp[-3])->type=((yyvsp[-3])->entry->globalEntry)->type;
								if(((yyvsp[-3])->entry->globalEntry)->nodetype!=tARR){
									yyerror("Type mismatch: Expected Array\n");
								}
								(yyvsp[-3])->nodetype=tARR;
								if((yyvsp[-1])->type==intType){
									(yyvsp[-3])->middle = (yyvsp[-1]);
									if(((yyvsp[-1])->nodetype==tNUM) && ( (yyvsp[-1])->val >= (yyvsp[-3])->entry->globalEntry->size)){
										yyerror("Array out of bounds\n");
									}
								} else {
									yyerror("Expected integer type for array offset\n");
								}
								(yyval)=(yyvsp[-3]);
							} else {
								yyerror("Variable undeclared\n");
							}
	
	}
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 544 "st5.y" /* yacc.c:1646  */
    {
						if(lookup((yyvsp[-6])->name) != NULL){
								(yyvsp[-6])->entry = lookup((yyvsp[-6])->name);
								(yyvsp[-6])->type=((yyvsp[-6])->entry->globalEntry)->type;
								if(((yyvsp[-6])->entry->globalEntry)->nodetype!=tDARR){
									yyerror("Type mismatch: Expected Double Array\n");
								}
								(yyvsp[-6])->nodetype=tDARR;
								if((yyvsp[-4])->type==intType){
									(yyvsp[-6])->middle = (yyvsp[-4]);
									if(((yyvsp[-4])->nodetype==tNUM) && ( (yyvsp[-4])->val >= (yyvsp[-6])->entry->globalEntry->size[0])){
										yyerror("Array out of bounds\n");
									}
								} else {
									yyerror("Expected integer type for array offset\n");
								}
								if((yyvsp[-1])->type==intType){
									(yyvsp[-6])->right = (yyvsp[-1]);
									if(((yyvsp[-1])->nodetype==tNUM) && ( (yyvsp[-1])->val >= (yyvsp[-6])->entry->globalEntry->size[1])){
										yyerror("Array out of bounds\n");
									}
								} else {
									yyerror("Expected integer type for array offset\n");
								}
								(yyval)=(yyvsp[-6]);
							} else {
								yyerror("Variable undeclared\n");
							}
	
	}
#line 2294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 575 "st5.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 576 "st5.y" /* yacc.c:1646  */
    {	char *retFunc = strdup(currFunc);
							currFunc=strdup((yyvsp[-3])->name);
							(yyval) = createFuncCallNode((yyvsp[-3])->name,(yyvsp[-1]));
							currFunc=retFunc;
							}
#line 2310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 583 "st5.y" /* yacc.c:1646  */
    {	(yyvsp[0])->arglist=(yyvsp[-2]);
							(yyval)=(yyvsp[0]);}
#line 2317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 585 "st5.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 586 "st5.y" /* yacc.c:1646  */
    {(yyval)=NULL;}
#line 2329 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2333 "y.tab.c" /* yacc.c:1646  */
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
#line 591 "st5.y" /* yacc.c:1906  */


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
{	showST();
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
	yyparse();
	return 0;
}

