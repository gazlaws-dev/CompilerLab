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
    REPEAT = 273,
    UNTIL = 274,
    DECL = 275,
    ENDDECL = 276,
    INT = 277,
    STR = 278,
    LIT = 279,
    BRKP = 280,
    RETURN = 281,
    MAIN = 282,
    LT = 283,
    GT = 284,
    LE = 285,
    GE = 286,
    EQ = 287,
    NE = 288,
    ADD = 289,
    SUB = 290,
    MUL = 291,
    DIV = 292
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
#define REPEAT 273
#define UNTIL 274
#define DECL 275
#define ENDDECL 276
#define INT 277
#define STR 278
#define LIT 279
#define BRKP 280
#define RETURN 281
#define MAIN 282
#define LT 283
#define GT 284
#define LE 285
#define GE 286
#define EQ 287
#define NE 288
#define ADD 289
#define SUB 290
#define MUL 291
#define DIV 292

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

#line 206 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   226

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  143

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

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
      40,    41,     2,     2,    39,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    38,
       2,    44,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    35,    35,    40,    48,    49,    52,    53,    56,    62,
      63,    66,    71,    77,    81,    93,    94,    96,   100,   110,
     112,   113,   116,   123,   123,   125,   125,   128,   131,   132,
     136,   138,   140,   143,   146,   149,   150,   151,   152,   153,
     154,   155,   158,   162,   166,   168,   173,   189,   192,   196,
     200,   202,   205,   209,   212,   215,   218,   221,   224,   227,
     230,   233,   236,   237,   238,   251,   252,   262,   263,   266
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BEG", "END", "READ", "WRITE", "NUM",
  "ID", "IF", "THEN", "ELSE", "ENDIF", "WHILE", "DO", "ENDWHILE", "BREAK",
  "CONTINUE", "REPEAT", "UNTIL", "DECL", "ENDDECL", "INT", "STR", "LIT",
  "BRKP", "RETURN", "MAIN", "\"<\"", "\">\"", "\"<=\"", "\">=\"", "\"==\"",
  "\"!=\"", "\"+\"", "\"-\"", "\"*\"", "\"/\"", "';'", "','", "'('", "')'",
  "'{'", "'}'", "'='", "$accept", "prog", "GDeclBlock", "GDeclList",
  "GDecl", "Type", "Gidlist", "Gid", "FDefBlock", "Fdef", "newFID",
  "ParamList", "Param", "LdeclBlock", "LDecList", "LDecl", "IdList",
  "Body", "Retstmt", "Slist", "Stmt", "Breakpoint", "InputStmt",
  "OutputStmt", "AsgStmt", "Var", "IfStmt", "WhileStmt", "BrkContStmt",
  "Expr", "ArgList", "MainBlock", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,    59,    44,
      40,    41,   123,   125,    61
};
# endif

#define YYPACT_NINF -122

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-122)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -4,   -10,    24,    57,  -122,  -122,    -1,  -122,    30,  -122,
      19,    41,    57,  -122,  -122,  -122,  -122,    12,    59,  -122,
      23,  -122,    26,  -122,  -122,   -10,  -122,    30,    42,   -10,
      79,   -34,  -122,  -122,    48,    14,  -122,   -10,  -122,    73,
      61,  -122,    20,   103,    73,  -122,    99,    37,    72,    96,
      68,   103,  -122,    81,  -122,    95,  -122,   106,   107,  -122,
     120,   121,  -122,  -122,  -122,    31,   110,  -122,  -122,  -122,
    -122,   118,  -122,  -122,  -122,  -122,   131,   167,  -122,    11,
      11,    11,    11,   138,   185,   152,  -122,    11,  -122,  -122,
    -122,   148,  -122,    11,    94,   108,   122,   136,  -122,  -122,
    -122,   164,    11,   150,    11,    11,    11,    11,    11,    11,
      11,    11,    11,    11,  -122,  -122,   198,   195,   164,    93,
    -122,    86,    86,    86,    86,    86,    86,   174,   174,   184,
     184,    96,    96,    11,  -122,    56,    69,   164,    96,  -122,
    -122,    83,  -122
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     0,     9,    10,     0,     7,     0,     1,
       9,     0,     0,    16,     3,     4,     6,    13,     0,    12,
       0,    18,     0,    15,     2,    21,     8,     0,     0,    21,
       0,     0,    20,    11,     0,     0,    22,     0,    14,     0,
       0,    19,     0,     0,     0,    24,     0,     0,     0,    34,
       0,     0,    29,    27,    23,     0,    26,     0,     0,    46,
       0,     0,    50,    51,    42,     0,     0,    41,    35,    36,
      37,     0,    38,    39,    40,    69,     0,     0,    25,     0,
       0,     0,     0,     0,     0,     0,    33,     0,    17,    28,
      63,    64,    65,     0,     0,     0,     0,     0,    31,    30,
      32,    45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    43,    44,     0,     0,    68,     0,
      62,    56,    57,    58,    59,    60,    61,    52,    53,    54,
      55,    34,    34,     0,    66,     0,     0,    67,    34,    48,
      49,     0,    47
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -122,  -122,  -122,  -122,   212,     3,  -122,   192,  -122,   208,
    -122,   193,   186,   177,  -122,   178,  -122,   173,  -122,  -121,
     -65,  -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,   -79,
    -122,   214
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     6,     7,    30,    18,    19,    12,    13,
      22,    31,    32,    43,    47,    48,    53,    50,    84,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    94,
     119,    14
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      85,    95,    96,    97,     8,    37,    11,    38,   101,     8,
     135,   136,     4,     5,   103,    11,     1,   141,    90,    91,
      15,     4,     5,   118,     9,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,    92,    57,    58,    17,    59,
      60,    45,     4,     5,    61,    46,    20,    62,    63,    21,
      46,    93,    25,    37,   137,    40,    64,    83,    54,     4,
       5,    57,    58,    28,    59,    60,    29,   138,   139,    61,
      85,    85,    62,    63,    57,    58,    85,    59,    60,    10,
       5,    64,    61,    34,   140,    62,    63,    36,    57,    58,
      39,    59,    60,    42,    64,   142,    61,    26,    27,    62,
      63,    57,    58,    44,    59,    60,    49,    52,    64,    61,
      56,    75,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    64,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   133,    78,   134,   114,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    79,    80,    86,   115,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      81,    82,    87,   116,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    88,    89,    98,   117,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   102,    99,
     100,   120,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   104,   105,   106,   107,   108,   109,   131,   132,
     112,   113,   104,   105,   106,   107,   108,   109,    16,    33,
      23,    51,    35,    41,    76,    55,    24
};

static const yytype_uint8 yycheck[] =
{
      65,    80,    81,    82,     1,    39,     3,    41,    87,     6,
     131,   132,    22,    23,    93,    12,    20,   138,     7,     8,
      21,    22,    23,   102,     0,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    24,     5,     6,     8,     8,
       9,    21,    22,    23,    13,    42,    27,    16,    17,     8,
      47,    40,    40,    39,   133,    41,    25,    26,    21,    22,
      23,     5,     6,    40,     8,     9,    40,    11,    12,    13,
     135,   136,    16,    17,     5,     6,   141,     8,     9,    22,
      23,    25,    13,    41,    15,    16,    17,     8,     5,     6,
      42,     8,     9,    20,    25,    12,    13,    38,    39,    16,
      17,     5,     6,    42,     8,     9,     3,     8,    25,    13,
      38,    43,    16,    17,    28,    29,    30,    31,    32,    33,
      39,    25,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    39,    38,    41,    41,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    40,    40,    38,    41,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      40,    40,    44,    41,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    43,     8,    38,    41,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    40,     4,
      38,    41,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    28,    29,    30,    31,    32,    33,    10,    14,
      36,    37,    28,    29,    30,    31,    32,    33,     6,    27,
      12,    44,    29,    37,    51,    47,    12
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    20,    46,    47,    22,    23,    48,    49,    50,     0,
      22,    50,    53,    54,    76,    21,    49,     8,    51,    52,
      27,     8,    55,    54,    76,    40,    38,    39,    40,    40,
      50,    56,    57,    52,    41,    56,     8,    39,    41,    42,
      41,    57,    20,    58,    42,    21,    50,    59,    60,     3,
      62,    58,     8,    61,    21,    60,    38,     5,     6,     8,
       9,    13,    16,    17,    25,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    43,    62,    39,    38,    40,
      40,    40,    40,    26,    63,    65,    38,    44,    43,     8,
       7,     8,    24,    40,    74,    74,    74,    74,    38,     4,
      38,    74,    40,    74,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    41,    41,    41,    41,    74,    75,
      41,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    10,    14,    39,    41,    64,    64,    74,    11,    12,
      15,    64,    12
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    46,    47,    47,    48,    48,    49,    50,
      50,    51,    51,    52,    52,    53,    53,    54,    55,    56,
      56,    56,    57,    58,    58,    59,    59,    60,    61,    61,
      62,    63,    64,    64,    64,    65,    65,    65,    65,    65,
      65,    65,    66,    67,    68,    69,    70,    71,    71,    72,
      73,    73,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    75,    75,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     3,     0,     2,     1,     3,     1,
       1,     3,     1,     1,     4,     2,     1,     9,     1,     3,
       1,     0,     2,     3,     2,     3,     2,     2,     3,     1,
       4,     2,     3,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     3,     1,     9,     7,     7,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     4,     3,     1,     8
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
		printf("\nSuccessfully parsed program with fdecl\n");
		exit(1);
		}
#line 1402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 40 "st5.y" /* yacc.c:1646  */
    {
	 	showST();
	 	printf("Successfully parsed program\n");
	 	exit(1);
		}
#line 1412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 48 "st5.y" /* yacc.c:1646  */
    {}
#line 1418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 49 "st5.y" /* yacc.c:1646  */
    {}
#line 1424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 52 "st5.y" /* yacc.c:1646  */
    {}
#line 1430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 53 "st5.y" /* yacc.c:1646  */
    {}
#line 1436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 56 "st5.y" /* yacc.c:1646  */
    {
									gAssignTypeDecl((yyvsp[-2]), (yyvsp[-1]));
									//assign it in lst also
								}
#line 1445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 62 "st5.y" /* yacc.c:1646  */
    {(yyval)=createTypeNode(intType);}
#line 1451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 63 "st5.y" /* yacc.c:1646  */
    {(yyval)=createTypeNode(stringType);}
#line 1457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 66 "st5.y" /* yacc.c:1646  */
    {
								showST();
								(yyvsp[0])->middle=(yyvsp[-2]);
								(yyval)=(yyvsp[0]);
								}
#line 1467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 71 "st5.y" /* yacc.c:1646  */
    {	
								(yyvsp[0])->middle=NULL;
								(yyval)=(yyvsp[0]);
							}
#line 1476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 77 "st5.y" /* yacc.c:1646  */
    {
						gInstall((yyvsp[0])->name,NULL,tVAR,1,0,getStaticSpace(1),NULL,NULL);
						(yyval)=(yyvsp[0]);
				}
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 81 "st5.y" /* yacc.c:1646  */
    {
									gInstall((yyvsp[-3])->name,NULL,tFUNC, 0,0,NULL, (yyvsp[-1]),getFLabel());
									printf("new func: %s\n",(yyvsp[-2])->name);
									lstListInstall((yyvsp[-3])->name);
									//currLST = lstListLookup($2->name);
									lInstall((yyvsp[-3])->name,(yyvsp[-3])->type,0);	//set type later;get dynamic space
									(yyval)=(yyvsp[-3]);
									}
#line 1498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 96 "st5.y" /* yacc.c:1646  */
    {
							gUpdate((yyvsp[-7])->name,(yyvsp[-8])->type,(yyvsp[-5]),(yyvsp[-2]),(yyvsp[-1]));
							}
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 100 "st5.y" /* yacc.c:1646  */
    {
			struct Lsymbol* currLST =lstListLookup((yyvsp[0])->name);
						if(currLST!=NULL){
							printf("exists\n");
							lInstall(currLST->name,0,0);	//set type in Fdef and get dynamic space
						} else {
							yyerror("Did not declare this func\n");
						}
}
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 110 "st5.y" /* yacc.c:1646  */
    { (yyvsp[0])->middle=(yyvsp[-2]);
										(yyval)=(yyvsp[0]);}
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 112 "st5.y" /* yacc.c:1646  */
    {	(yyval)=(yyvsp[0]); }
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 116 "st5.y" /* yacc.c:1646  */
    {///?
						}
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 123 "st5.y" /* yacc.c:1646  */
    {}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 138 "st5.y" /* yacc.c:1646  */
    {}
#line 1552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 140 "st5.y" /* yacc.c:1646  */
    {
		(yyval) = createTree(NULL,NULL, NULL,tCONNECT,NULL, (yyvsp[-2]),NULL, (yyvsp[-1]));
	}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 143 "st5.y" /* yacc.c:1646  */
    {
		(yyval)=(yyvsp[-1]);
	}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 158 "st5.y" /* yacc.c:1646  */
    {
	(yyval) = createTree(NULL,NULL, NULL,tBRKP,NULL, NULL,NULL, NULL);	
	}
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 162 "st5.y" /* yacc.c:1646  */
    {
										(yyval)= createReadNode((yyvsp[-1]));
								}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 166 "st5.y" /* yacc.c:1646  */
    {	(yyval)= createWriteNode((yyvsp[-1]));}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 168 "st5.y" /* yacc.c:1646  */
    {
					//checks tht exp and id have same type
					(yyval) = createAsgNode((yyvsp[-2]), (yyvsp[0]));

}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 173 "st5.y" /* yacc.c:1646  */
    {	if(gLookup((yyvsp[0])->name) != NULL){

							(yyvsp[0])->Gentry = gLookup((yyvsp[0])->name);
							
							if(((yyvsp[0])->Gentry)->nodetype!=tPVAR && (((yyvsp[0])->Gentry)->nodetype!=tVAR)){
								yyerror("Type mismatch: Not declared as variable: %s\n",(yyvsp[0])->name);
							}
							(yyvsp[0])->nodetype=((yyvsp[0])->Gentry)->nodetype;
							(yyvsp[0])->type=((yyvsp[0])->Gentry)->type;
						} else {
							yyerror("Variable undeclared\n");
						}
						(yyval) = (yyvsp[0]);
					}
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 189 "st5.y" /* yacc.c:1646  */
    {
							(yyval) = createIfNode((yyvsp[-6]),(yyvsp[-3]),(yyvsp[-1]));
						}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 192 "st5.y" /* yacc.c:1646  */
    {
							(yyval) = createIfNode((yyvsp[-4]),(yyvsp[-1]),NULL);
						}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 196 "st5.y" /* yacc.c:1646  */
    {
							(yyval) = createWhileNode((yyvsp[-4]),(yyvsp[-1]));
							}
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 200 "st5.y" /* yacc.c:1646  */
    { (yyval)=createBreakNode();
					}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 202 "st5.y" /* yacc.c:1646  */
    {
					(yyval)=createContinueNode();
					}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 205 "st5.y" /* yacc.c:1646  */
    {
							(yyval) = createOpNode(tADD,(yyvsp[-2]),(yyvsp[0]));
						}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 209 "st5.y" /* yacc.c:1646  */
    {
								(yyval) = createOpNode(tSUB,(yyvsp[-2]),(yyvsp[0]));
						}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 212 "st5.y" /* yacc.c:1646  */
    {
								(yyval) = createOpNode(tMUL,(yyvsp[-2]),(yyvsp[0]));
						}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 215 "st5.y" /* yacc.c:1646  */
    {
								(yyval) = createOpNode(tDIV,(yyvsp[-2]),(yyvsp[0]));
						}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 218 "st5.y" /* yacc.c:1646  */
    {		
								(yyval) = createOpNode(tLT,(yyvsp[-2]),(yyvsp[0]));
						}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 221 "st5.y" /* yacc.c:1646  */
    {	
								(yyval) = createOpNode(tGT,(yyvsp[-2]),(yyvsp[0]));
						}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 224 "st5.y" /* yacc.c:1646  */
    {
								(yyval) = createOpNode(tLE,(yyvsp[-2]),(yyvsp[0]));
						}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 227 "st5.y" /* yacc.c:1646  */
    {
								(yyval) = createOpNode(tGE,(yyvsp[-2]),(yyvsp[0]));
						}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 230 "st5.y" /* yacc.c:1646  */
    {
							(yyval) = createOpNode(tEQ,(yyvsp[-2]),(yyvsp[0]));
						}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 233 "st5.y" /* yacc.c:1646  */
    {
							(yyval) = createOpNode(tNE,(yyvsp[-2]),(yyvsp[0]));
						}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 236 "st5.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 237 "st5.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 238 "st5.y" /* yacc.c:1646  */
    {	if(gLookup((yyvsp[0])->name) != NULL){
								(yyvsp[0])->Gentry = gLookup((yyvsp[0])->name);
								(yyvsp[0])->type=((yyvsp[0])->Gentry)->type;
								
								if(((yyvsp[0])->Gentry)->nodetype!=tVAR && ((yyvsp[0])->Gentry)->nodetype!=tPVAR){
									yyerror("Type mismatch: Expected Var or PVar \n");
								}
								(yyvsp[0])->nodetype=((yyvsp[0])->Gentry)->nodetype;
								(yyval)=(yyvsp[0]);
							} else {
								yyerror("Variable undeclared\n");
							}
						(yyval) = (yyvsp[0]);}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 251 "st5.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 252 "st5.y" /* yacc.c:1646  */
    {
//								gtemp = GLookup($1->name);
//								if(gtemp == NULL){
//									yyerror("Yacc : Undefined function");exit(1);
//								}
//								//$$ = TreeCreate(gtemp->type,NODETYPE_FUNCTION,$1->name,(union Constant){},$3,NULL,NULL,NULL);
								//$$->Gentry = gtemp;
							  }
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 267 "st5.y" /* yacc.c:1646  */
    {
									gInstall("main",intType,tFUNC,0,0,0,NULL,getFLabel());
									//gtemp = gInstall("MAIN",inttype,0,NULL);
									//...Some more work to be done
								}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1801 "y.tab.c" /* yacc.c:1646  */
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
#line 275 "st5.y" /* yacc.c:1906  */


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

