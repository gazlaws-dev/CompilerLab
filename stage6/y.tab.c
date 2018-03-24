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
#line 1 "st6.y" /* yacc.c:339  */

	#include<stdio.h>
	#include<stdlib.h>
	#include<limits.h>
	#include<string.h>
	#include"st6.h"
	#include"type.c"
	#include"stack.c"
	#include"symbol.c"
	#include"codegen.c"
	#include"ast.c"
	#define YYSTYPE tnode*
	extern FILE *yyin;
	FILE* fout;

#line 82 "y.tab.c" /* yacc.c:339  */

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
    LT = 287,
    GT = 288,
    LE = 289,
    GE = 290,
    EQ = 291,
    NE = 292,
    ADD = 293,
    SUB = 294,
    MUL = 295,
    DIV = 296
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
#define LT 287
#define GT 288
#define LE 289
#define GE 290
#define EQ 291
#define NE 292
#define ADD 293
#define SUB 294
#define MUL 295
#define DIV 296

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

#line 215 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   424

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  214

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    52,     2,
      46,    47,     2,     2,    45,     2,    51,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    44,
       2,    50,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    48,     2,    49,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    36,    36,    47,    58,    59,    62,    63,    66,    66,
      69,    70,    73,    77,    78,    79,    81,    82,    85,    86,
      89,    92,    93,    94,    97,   101,   107,   111,   116,   121,
     126,   133,   137,   140,   143,   146,   150,   156,   163,   173,
     179,   184,   187,   191,   196,   204,   204,   205,   207,   208,
     211,   216,   220,   222,   222,   226,   232,   236,   243,   250,
     258,   261,   264,   267,   268,   269,   270,   271,   272,   273,
     274,   277,   281,   285,   289,   291,   297,   301,   307,   311,
     314,   337,   360,   393,   397,   401,   405,   407,   410,   414,
     417,   420,   423,   426,   429,   432,   435,   438,   441,   444,
     445,   446,   451,   476,   502,   529,   554,   577,   608,   609,
     614,   622,   624,   625
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
  "MAIN", "TYPE", "ENDTYPE", "MOD", "TUPLE", "NULLTOKEN", "EXIT", "\"<\"",
  "\">\"", "\"<=\"", "\">=\"", "\"==\"", "\"!=\"", "\"+\"", "\"-\"",
  "\"*\"", "\"/\"", "'{'", "'}'", "';'", "','", "'('", "')'", "'['", "']'",
  "'='", "'.'", "'&'", "$accept", "prog", "TypeDefBlock", "TypeDefList",
  "TypeDef", "$@1", "FieldDeclList", "FieldDecl", "TypeName", "GDeclBlock",
  "GDeclList", "GDecl", "Type", "Gidlist", "Gid", "newParamList", "fID",
  "FDefBlock", "Fdef", "newFID", "validParamList", "ParamList", "Param",
  "LdeclBlock", "LDecList", "LDecl", "IdList", "IDVar", "Body", "Retstmt",
  "MainBlock", "Main", "Slist", "Stmt", "Breakpoint", "Exit", "InputStmt",
  "OutputStmt", "AsgStmt", "Field", "Var", "IfStmt", "WhileStmt",
  "BrkContStmt", "Expr", "ArgList", YY_NULLPTR
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
     295,   296,   123,   125,    59,    44,    40,    41,    91,    93,
      61,    46,    38
};
# endif

#define YYPACT_NINF -167

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-167)))

#define YYTABLE_NINF -35

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-35)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,     3,    20,    16,  -167,     5,  -167,  -167,    51,   115,
      12,  -167,  -167,  -167,  -167,  -167,    65,  -167,    -5,    41,
      66,   115,  -167,  -167,    31,   133,  -167,  -167,   -15,    81,
      18,  -167,    49,  -167,  -167,    61,  -167,  -167,    67,  -167,
    -167,  -167,    -6,  -167,   108,   110,  -167,  -167,    -5,    51,
      51,    78,  -167,  -167,    77,    73,  -167,    -4,    35,  -167,
      84,    80,  -167,   127,  -167,    98,  -167,   140,    51,  -167,
     107,    51,   180,   152,   149,  -167,  -167,   127,  -167,  -167,
       0,   383,   120,   167,   125,   129,   152,  -167,   161,   136,
    -167,  -167,   135,  -167,   141,   143,   -29,   145,   146,  -167,
    -167,  -167,  -167,   174,   134,   142,  -167,  -167,  -167,  -167,
    -167,  -167,   147,  -167,  -167,  -167,  -167,  -167,   150,  -167,
       0,  -167,    48,    48,    48,   187,    48,    48,  -167,    48,
     192,   158,  -167,    48,  -167,  -167,  -167,    45,  -167,  -167,
     195,    48,   197,  -167,   266,   282,   176,   155,  -167,   298,
     314,   346,  -167,  -167,   360,    48,    48,  -167,   330,   170,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,  -167,  -167,   171,   210,   207,  -167,   360,    68,   194,
    -167,    48,   360,   377,   377,   377,   377,   377,   377,    69,
      69,   387,   387,    48,   167,   167,    48,  -167,   175,   212,
     230,   121,    52,   360,    48,  -167,  -167,   167,  -167,  -167,
     248,   154,  -167,  -167
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,    17,     8,     0,     7,     1,     0,     0,
       0,     4,     6,    23,    21,    22,     0,    19,     0,    21,
       0,     0,    36,     3,     0,     0,    16,    18,    26,     0,
       0,    25,     0,    59,    38,     0,    35,     2,     0,    15,
      13,    14,     0,    11,     0,     0,    28,    20,     0,    33,
      42,     0,     9,    10,     0,     0,    24,     0,     0,    32,
       0,    39,    41,    47,    12,    29,    43,     0,     0,    27,
       0,     0,     0,     0,     0,    44,    31,    47,    40,    46,
      53,     0,     0,    62,     0,     0,     0,    54,     0,    50,
      52,    45,     0,    49,     0,     0,    79,     0,     0,    86,
      87,    71,    72,     0,     0,     0,    69,    70,    63,    64,
      65,    78,     0,    66,    67,    68,    58,    30,     0,    55,
      53,    48,     0,     0,     0,     0,     0,     0,    80,     0,
       0,     0,    61,     0,    37,    51,   100,   102,   108,   110,
       0,     0,     0,   101,     0,     0,     0,    77,    76,     0,
       0,     0,    56,    60,    75,   113,     0,   103,     0,   104,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,    81,     0,     0,    57,   112,     0,     0,
      99,     0,    98,    92,    93,    94,    95,    96,    97,    88,
      89,    90,    91,     0,    62,    62,     0,   109,   106,     0,
       0,     0,     0,   111,     0,   105,    82,    62,    84,    85,
       0,     0,   107,    83
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -167,  -167,  -167,  -167,   219,  -167,  -167,   196,  -167,  -167,
    -167,   220,     9,  -167,   189,  -167,  -167,  -167,   218,  -167,
    -167,  -167,   -45,   164,  -167,   173,  -167,   122,   169,  -167,
     235,  -167,  -166,  -103,  -167,  -167,  -167,  -167,  -167,   -83,
    -167,  -167,  -167,  -167,  -117,  -167
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,     6,    10,    42,    43,    44,     9,
      16,    17,    57,    30,    31,    58,    32,    21,    22,    35,
      60,    61,    59,    73,    81,    82,    89,    90,    84,   130,
      23,    24,   104,   105,   106,   107,   108,   109,   110,   143,
     112,   113,   114,   115,   144,   178
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     111,   131,    39,    28,    66,    62,   145,   146,    87,   149,
     150,     4,   151,     4,    40,    41,   154,    18,    20,   124,
       7,   111,   125,    76,   158,    18,    78,     1,   201,   202,
      20,   -34,    11,    45,     8,    29,    67,    52,   177,   179,
      88,   211,   148,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,    25,   136,   137,    94,    95,    13,
      96,    97,    47,    48,   199,    98,    33,   209,    99,   100,
     138,    14,    15,    13,    34,   101,   200,    38,   139,   203,
      68,    80,    69,   102,    26,    14,    15,   210,   140,    46,
      80,   155,   103,   156,   141,    49,   125,   160,   131,   131,
     142,   161,   162,   163,   164,   165,   166,    50,   131,   169,
     170,   111,   111,   196,    51,   197,    54,    55,   111,   111,
      63,    64,    65,    13,   111,    71,    94,    95,   111,    96,
      97,    70,   207,   208,    98,    19,    15,    99,   100,    94,
      95,    39,    96,    97,   101,    72,    74,    98,    75,    77,
      99,   100,   102,    40,    41,    83,    85,   101,   129,    94,
      95,   103,    96,    97,    93,   102,   213,    98,   116,   119,
      99,   100,    94,    95,   103,    96,    97,   101,   117,   121,
      98,   120,   128,    99,   100,   102,   132,   122,    13,   123,
     101,   126,   127,   134,   103,   147,   152,   133,   102,    79,
      14,    15,   153,   157,   160,   159,   125,   103,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   181,   193,
     194,   195,   160,   204,    12,   173,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,    27,    56,    53,    36,
     160,    86,   135,   198,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,    92,   118,    37,     0,   160,     0,
       0,   205,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,     0,     0,     0,     0,   160,     0,     0,   206,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
       0,     0,     0,     0,   160,     0,     0,   212,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,     0,     0,
     160,     0,     0,   171,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,     0,     0,   160,     0,     0,   172,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
       0,     0,   160,     0,     0,   174,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,     0,     0,   160,     0,
       0,   175,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,     0,     0,   160,     0,     0,   180,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   160,     0,
     176,    13,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,    91,    14,    15,   160,     0,     0,     0,   -35,
     -35,   -35,   -35,   -35,   -35,   160,     0,     0,     0,   161,
     162,   163,   164,   165,   166
};

static const yytype_int16 yycheck[] =
{
      83,   104,     8,     8,     8,    50,   123,   124,     8,   126,
     127,     8,   129,     8,    20,    21,   133,     8,     9,    48,
       0,   104,    51,    68,   141,    16,    71,    26,   194,   195,
      21,    46,    27,    48,    18,    40,    40,    43,   155,   156,
      40,   207,   125,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,    42,     7,     8,     5,     6,     8,
       8,     9,    44,    45,   181,    13,    25,    15,    16,    17,
      22,    20,    21,     8,     8,    23,   193,    46,    30,   196,
      45,    72,    47,    31,    19,    20,    21,   204,    40,     8,
      81,    46,    40,    48,    46,    46,    51,    28,   201,   202,
      52,    32,    33,    34,    35,    36,    37,    46,   211,    40,
      41,   194,   195,    45,    47,    47,     8,     7,   201,   202,
      42,    44,    49,     8,   207,    45,     5,     6,   211,     8,
       9,    47,    11,    12,    13,    20,    21,    16,    17,     5,
       6,     8,     8,     9,    23,    18,    48,    13,     8,    42,
      16,    17,    31,    20,    21,     3,     7,    23,    24,     5,
       6,    40,     8,     9,    44,    31,    12,    13,    43,     8,
      16,    17,     5,     6,    40,     8,     9,    23,    49,    44,
      13,    45,     8,    16,    17,    31,    44,    46,     8,    46,
      23,    46,    46,    43,    40,     8,     4,    50,    31,    19,
      20,    21,    44,     8,    28,     8,    51,    40,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    48,    48,
      10,    14,    28,    48,     5,    49,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    16,    48,    42,    21,
      28,    77,   120,    49,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    81,    86,    21,    -1,    28,    -1,
      -1,    49,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    28,    -1,    -1,    49,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    49,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      28,    -1,    -1,    47,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    28,    -1,    -1,    47,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    28,    -1,    -1,    47,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    -1,    28,    -1,
      -1,    47,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    28,    -1,    -1,    47,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    28,    -1,
      44,     8,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    19,    20,    21,    28,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    28,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    26,    54,    55,     8,    56,    57,     0,    18,    62,
      58,    27,    57,     8,    20,    21,    63,    64,    65,    20,
      65,    70,    71,    83,    84,    42,    19,    64,     8,    40,
      66,    67,    69,    25,     8,    72,    71,    83,    46,     8,
      20,    21,    59,    60,    61,    48,     8,    44,    45,    46,
      46,    47,    43,    60,     8,     7,    67,    65,    68,    75,
      73,    74,    75,    42,    44,    49,     8,    40,    45,    47,
      47,    45,    18,    76,    48,     8,    75,    42,    75,    19,
      65,    77,    78,     3,    81,     7,    76,     8,    40,    79,
      80,    19,    78,    44,     5,     6,     8,     9,    13,    16,
      17,    23,    31,    40,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    43,    49,    81,     8,
      45,    44,    46,    46,    48,    51,    46,    46,     8,    24,
      82,    86,    44,    50,    43,    80,     7,     8,    22,    30,
      40,    46,    52,    92,    97,    97,    97,     8,    92,    97,
      97,    97,     4,    44,    97,    46,    48,     8,    97,     8,
      28,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    47,    47,    49,    47,    47,    44,    97,    98,    97,
      47,    48,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    48,    10,    14,    45,    47,    49,    97,
      97,    85,    85,    97,    48,    49,    49,    11,    12,    15,
      97,    85,    49,    12
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    54,    55,    55,    56,    56,    58,    57,
      59,    59,    60,    61,    61,    61,    62,    62,    63,    63,
      64,    65,    65,    65,    66,    66,    67,    67,    67,    67,
      67,    68,    68,    68,    69,    70,    70,    71,    72,    73,
      74,    74,    74,    75,    75,    76,    76,    76,    77,    77,
      78,    79,    79,    80,    80,    80,    81,    82,    83,    84,
      85,    85,    85,    86,    86,    86,    86,    86,    86,    86,
      86,    87,    88,    89,    90,    91,    92,    92,    93,    93,
      93,    93,    93,    94,    94,    95,    96,    96,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    98,    98,    98
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     3,     3,     0,     2,     1,     0,     5,
       2,     1,     3,     1,     1,     1,     3,     0,     2,     1,
       3,     1,     1,     1,     3,     1,     1,     4,     2,     4,
       7,     3,     1,     0,     1,     2,     1,     9,     1,     1,
       3,     1,     0,     2,     3,     3,     2,     0,     3,     2,
       2,     3,     1,     0,     1,     2,     4,     3,     7,     2,
       3,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     3,     3,     3,     1,     1,
       2,     4,     7,     9,     7,     7,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     2,     2,     5,     4,     7,     1,     4,
       1,     3,     1,     0
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
#line 36 "st6.y" /* yacc.c:1646  */
    {
		showTT();
	 	showST();
	 	fprintf(fout,"%d\nMAIN\n%d\n%d\n%d\n%d\n%d\n%d\n",0,0,0,0,0,1,0);
	 	codeGen((yyvsp[-1]),fout);
	 	codeGen((yyvsp[0]),fout);
	 	freeAllReg();
	 	fprintf(fout,"INT 10\n");
		printf("\nSuccessfully parsed program with fdecl\n");
		exit(1);
		}
#line 1499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 47 "st6.y" /* yacc.c:1646  */
    {
	 	showTT();
	 	showST();
	 	fprintf(fout,"%d\nMAIN\n%d\n%d\n%d\n%d\n%d\n%d\nMOV SP, %d\nMOV BP, %d\n",0,0,0,0,0,1,0,staticSize,staticSize);
	 	codeGen((yyvsp[0]),fout);
	 	fprintf(fout,"INT 10\n");
	 	printf("Successfully parsed program\n");
	 	exit(1);
		}
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 66 "st6.y" /* yacc.c:1646  */
    { TInstall((yyvsp[0])->name); currType=strdup((yyvsp[0])->name);}
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 66 "st6.y" /* yacc.c:1646  */
    {resetFieldIndex();}
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 69 "st6.y" /* yacc.c:1646  */
    {}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 70 "st6.y" /* yacc.c:1646  */
    {}
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 73 "st6.y" /* yacc.c:1646  */
    { addField(currType, TLookup((yyvsp[-2])->name), (yyvsp[-1])->name);
								}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 81 "st6.y" /* yacc.c:1646  */
    {}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 82 "st6.y" /* yacc.c:1646  */
    {}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 85 "st6.y" /* yacc.c:1646  */
    {}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 86 "st6.y" /* yacc.c:1646  */
    {}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 89 "st6.y" /* yacc.c:1646  */
    {gAssignTypeDecl((yyvsp[-2]), (yyvsp[-1])); }
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 92 "st6.y" /* yacc.c:1646  */
    {(yyval)=createTypeNode((yyvsp[0])->name);}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 93 "st6.y" /* yacc.c:1646  */
    {(yyval)=createTypeNode((yyvsp[0])->name);}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 94 "st6.y" /* yacc.c:1646  */
    {(yyval)=createTypeNode((yyvsp[0])->name);}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 97 "st6.y" /* yacc.c:1646  */
    {	
								(yyvsp[0])->middle=(yyvsp[-2]);
								(yyval)=(yyvsp[0]);
								}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 101 "st6.y" /* yacc.c:1646  */
    {
								(yyvsp[0])->middle=NULL;
								(yyval)=(yyvsp[0]);
							}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 107 "st6.y" /* yacc.c:1646  */
    {//bst t; tVAR
				gInstall((yyvsp[0])->name,NULL,tVAR,1,0,getStaticSpace(1),NULL,NULL);
				(yyval)=(yyvsp[0]);
				}
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 111 "st6.y" /* yacc.c:1646  */
    {
									gInstall((yyvsp[-3])->name,NULL,tFUNC, 0,0,NULL, (yyvsp[-1]), getFLabel());
									(yyvsp[-3])->nodetype=tFUNC;
									(yyval)=(yyvsp[-3]);
									}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 116 "st6.y" /* yacc.c:1646  */
    {
				gInstall((yyvsp[-1])->name,NULL,tPVAR,1,0,getStaticSpace(1),NULL,NULL);
				(yyvsp[0])->nodetype=tPVAR;
				(yyval)=(yyvsp[0]);
				}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 121 "st6.y" /* yacc.c:1646  */
    {
				gInstall((yyvsp[-3])->name,NULL,tARR,(yyvsp[-1])->val,0,getStaticSpace((yyvsp[-1])->val),NULL,NULL);
				(yyvsp[-3])->nodetype=tARR;
				(yyval)=(yyvsp[-3]);
		}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 126 "st6.y" /* yacc.c:1646  */
    {
				gInstall((yyvsp[-6])->name,NULL,tDARR,(yyvsp[-4])->val,(yyvsp[-1])->val,getStaticSpace(((yyvsp[-4])->val)*((yyvsp[-2])->val)),NULL,NULL);
				(yyvsp[-6])->nodetype=tDARR;
				(yyval)=(yyvsp[-6]);
		}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 133 "st6.y" /* yacc.c:1646  */
    {
						(yyvsp[0])->middle=(yyvsp[-2]);
						(yyval)=(yyvsp[0]);
						}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 137 "st6.y" /* yacc.c:1646  */
    {
		   				(yyval)=(yyvsp[0]);
					}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 140 "st6.y" /* yacc.c:1646  */
    {(yyval)=NULL;}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 143 "st6.y" /* yacc.c:1646  */
    {	currFunc=strdup((yyvsp[0])->name);}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 146 "st6.y" /* yacc.c:1646  */
    {
						(yyval) = createTree(NULL,NULL, NULL,tCONNECT,NULL, (yyvsp[-1]),NULL, (yyvsp[0]),NULL);
						resetLocalSpace();
						}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 150 "st6.y" /* yacc.c:1646  */
    {
						(yyval)=(yyvsp[0]);
						resetLocalSpace();
						}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 156 "st6.y" /* yacc.c:1646  */
    {
							//$8 is a (slist+return) statement node
							(yyval) = createFuncDefNode((yyvsp[-8])->type,(yyvsp[-7])->name,(yyvsp[-1]));
							resetLocalSpace();
							}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 163 "st6.y" /* yacc.c:1646  */
    {
			struct localTable* currTable = gLookup((yyvsp[0])->name);
			if(currTable!=NULL){
				localTableCreate((yyvsp[0])->name);
				currFunc=strdup((yyvsp[0])->name);
			} else {
					yyerror("Did not declare this func\n");
			}
}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 173 "st6.y" /* yacc.c:1646  */
    {
						//Name Equivalence
						paramCheck(currFunc);
}
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 179 "st6.y" /* yacc.c:1646  */
    {
						localEntryCreate(currFunc, (yyvsp[0])->name, (yyvsp[0])->type,(yyvsp[0])->nodetype, getArgSpace());
						(yyvsp[0])->middle=(yyvsp[-2]);
						(yyval)=(yyvsp[0]);
						}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 184 "st6.y" /* yacc.c:1646  */
    {
						localEntryCreate(currFunc, (yyvsp[0])->name, (yyvsp[0])->type,(yyvsp[0])->nodetype, getArgSpace());
					}
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 187 "st6.y" /* yacc.c:1646  */
    {
				(yyval)=NULL;}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 191 "st6.y" /* yacc.c:1646  */
    {	
						(yyvsp[0])->type = (yyvsp[-1])->type;
						(yyvsp[0])->nodetype=tVAR;
						(yyval)=(yyvsp[0]);
						}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 196 "st6.y" /* yacc.c:1646  */
    {
				//+10?
				(yyvsp[0])->type = (yyvsp[-2])->type;
				(yyvsp[0])->nodetype=tPVAR;
				(yyval)=(yyvsp[0]);
			}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 204 "st6.y" /* yacc.c:1646  */
    {}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 204 "st6.y" /* yacc.c:1646  */
    {}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 205 "st6.y" /* yacc.c:1646  */
    {}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 207 "st6.y" /* yacc.c:1646  */
    {}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 208 "st6.y" /* yacc.c:1646  */
    {}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 211 "st6.y" /* yacc.c:1646  */
    {	
						addIdListToLocal((yyvsp[-1]), (yyvsp[0]));
					}
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 216 "st6.y" /* yacc.c:1646  */
    {
				(yyvsp[0])->middle =(yyvsp[-2]);
				(yyval)=(yyvsp[0]);
			}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 220 "st6.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 222 "st6.y" /* yacc.c:1646  */
    {
				(yyvsp[0])->nodetype=tVAR;
				(yyval)=(yyvsp[0]);
			}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 226 "st6.y" /* yacc.c:1646  */
    {
				(yyvsp[0])->nodetype=tPVAR;
				(yyval)=(yyvsp[0]);
		}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 232 "st6.y" /* yacc.c:1646  */
    {
				(yyval) = createFuncBodyNode((yyvsp[-2]), (yyvsp[-1]));	//tBODY
			}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 236 "st6.y" /* yacc.c:1646  */
    {
						(yyval)=createRetNode((yyvsp[-1]));//type checkdone in ast
				}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 244 "st6.y" /* yacc.c:1646  */
    {		
									(yyval) = createFuncDefNode(TLookup((yyvsp[-6])->name),"main",(yyvsp[-1]));
									resetLocalSpace();
								}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 250 "st6.y" /* yacc.c:1646  */
    {
		currFunc=strdup("main");
		gInstall("main",TLookup((yyvsp[-1])->name),tFUNC,0,0,0,NULL,NULL);
		localTableCreate("main");
		(yyval)=(yyvsp[-1]);
	}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 258 "st6.y" /* yacc.c:1646  */
    {
		(yyval) = createTree(NULL,NULL, NULL,tCONNECT,NULL, (yyvsp[-2]),NULL, (yyvsp[-1]),NULL);
	}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 261 "st6.y" /* yacc.c:1646  */
    {
		(yyval)=(yyvsp[-1]);
	}
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 264 "st6.y" /* yacc.c:1646  */
    {(yyval)=NULL;}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 277 "st6.y" /* yacc.c:1646  */
    {
	(yyval) = createTree(NULL,NULL, NULL,tBRKP,NULL, NULL,NULL, NULL,NULL);	
	}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 281 "st6.y" /* yacc.c:1646  */
    {
		(yyval)=createExitNode();
	}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 285 "st6.y" /* yacc.c:1646  */
    {
										(yyval)= createReadNode((yyvsp[-1]));
								}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 289 "st6.y" /* yacc.c:1646  */
    {	(yyval)= createWriteNode((yyvsp[-1]));}
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 291 "st6.y" /* yacc.c:1646  */
    {
					//checks tht exp and id have same type, or rhs is NULL
					(yyval) = createAsgNode((yyvsp[-2]), (yyvsp[0]));

}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 297 "st6.y" /* yacc.c:1646  */
    {	//do the check later
						(yyvsp[-2])->middle=(yyvsp[0]);
						(yyval)=(yyvsp[-2]);
				}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 301 "st6.y" /* yacc.c:1646  */
    {	//do the check later
						//t.num
						(yyvsp[-2])->middle=(yyvsp[0]);
						(yyval)=(yyvsp[-2]);
				}
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 307 "st6.y" /* yacc.c:1646  */
    {	(yyvsp[0])=createFieldNode((yyvsp[0])); 
				//printf("Final type is: %s\n",$1->type->name);
				(yyval) = (yyvsp[0]);
			}
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 311 "st6.y" /* yacc.c:1646  */
    {	(yyval) = createVariableNode((yyvsp[0])); //type checking is done
							//t = alloc();
						}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 314 "st6.y" /* yacc.c:1646  */
    {		//*p=*p+1 turns to q=*p+1
						if(lookup((yyvsp[0])->name) != NULL){
							(yyvsp[0])->entry = lookup((yyvsp[0])->name);							
							if((yyvsp[0])->entry->isLoc){
								if((yyvsp[0])->entry->localEntry->nodetype!=tPVAR){
									yyerror("Type mismatch: Not declared as pointer variable\n");
								}
								(yyvsp[0])->type=((yyvsp[0])->entry->localEntry->type->prev);//-10;	//type says not pointer
								
							} else {
								if((yyvsp[0])->entry->globalEntry->nodetype!=tPVAR){
								yyerror("Type mismatch: Not declared as pointer variable\n");
								}
								(yyvsp[0])->type=((yyvsp[0])->entry->globalEntry->type->prev);//-10;	//type says not pointer
							}
							(yyvsp[0])->nodetype=tPVAR;				//nodetype says pointer
							
														
						} else {
							yyerror("Variable undeclared\n");
						}
						(yyval) = (yyvsp[0]);
		}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 337 "st6.y" /* yacc.c:1646  */
    {	if(lookup((yyvsp[-3])->name) != NULL){
								(yyvsp[-3])->entry = lookup((yyvsp[-3])->name);
								//will never be a local variable, not even an argument
								if(((yyvsp[-3])->entry)->globalEntry->nodetype!=tARR){
									yyerror("Type mismatch: Not declared as array\n");
								}
								
								(yyvsp[-3])->nodetype=tARR;
								(yyvsp[-3])->type=((yyvsp[-3])->entry)->globalEntry->type;
								
								if(strcmp((yyvsp[-1])->type->name,"int")==0){
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
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 360 "st6.y" /* yacc.c:1646  */
    {
							if(lookup((yyvsp[-6])->name) != NULL){
								(yyvsp[-6])->entry = lookup((yyvsp[-6])->name);
								//will never be a local variable, not even an argument
								if(((yyvsp[-6])->entry)->globalEntry->nodetype!=tDARR){
									yyerror("Type mismatch: Not declared as array\n");
								}
								
								(yyvsp[-6])->nodetype=tDARR;
								(yyvsp[-6])->type=((yyvsp[-6])->entry)->globalEntry->type;
								
								if(strcmp((yyvsp[-4])->type->name,"int")==0){
									if(((yyvsp[-4])->nodetype==tNUM) && ( (yyvsp[-4])->val >= (yyvsp[-6])->entry->globalEntry->size[0])){
										yyerror("Array out of bounds\n");
									}
								} else {
									yyerror("Expected interger type as offset\n");
								}
								(yyvsp[-6])->middle=(yyvsp[-4]);
								if(strcmp((yyvsp[-1])->type->name,"int")==0){
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
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 393 "st6.y" /* yacc.c:1646  */
    {
							
							(yyval) = createIfNode((yyvsp[-6]),(yyvsp[-3]),(yyvsp[-1]));
						}
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 397 "st6.y" /* yacc.c:1646  */
    {
							(yyval) = createIfNode((yyvsp[-4]),(yyvsp[-1]),NULL);
						}
#line 2099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 401 "st6.y" /* yacc.c:1646  */
    {
							(yyval) = createWhileNode((yyvsp[-4]),(yyvsp[-1]));
							}
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 405 "st6.y" /* yacc.c:1646  */
    { (yyval)=createBreakNode();
					}
#line 2114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 407 "st6.y" /* yacc.c:1646  */
    {
					(yyval)=createContinueNode();
					}
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 410 "st6.y" /* yacc.c:1646  */
    {
							(yyval) = createOpNode(tADD,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 414 "st6.y" /* yacc.c:1646  */
    {
								(yyval) = createOpNode(tSUB,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 417 "st6.y" /* yacc.c:1646  */
    {
								(yyval) = createOpNode(tMUL,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 420 "st6.y" /* yacc.c:1646  */
    {
								(yyval) = createOpNode(tDIV,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 423 "st6.y" /* yacc.c:1646  */
    {		
								(yyval) = createOpNode(tLT,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 426 "st6.y" /* yacc.c:1646  */
    {	
								(yyval) = createOpNode(tGT,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 429 "st6.y" /* yacc.c:1646  */
    {
								(yyval) = createOpNode(tLE,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 432 "st6.y" /* yacc.c:1646  */
    {
								(yyval) = createOpNode(tGE,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 435 "st6.y" /* yacc.c:1646  */
    {
							(yyval) = createOpNode(tEQ,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 438 "st6.y" /* yacc.c:1646  */
    {
							(yyval) = createOpNode(tNE,(yyvsp[-2]),(yyvsp[0]));
						}
#line 2202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 441 "st6.y" /* yacc.c:1646  */
    {
							(yyval) = createOpNode(tMOD,(yyvsp[-2]),(yyvsp[0]));
	}
#line 2210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 444 "st6.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 2216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 445 "st6.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 446 "st6.y" /* yacc.c:1646  */
    {//todo
				(yyvsp[0])=createFieldNode((yyvsp[0])); 
				//printf("Final type is: %s\n",$1->type->name);
				(yyval) = (yyvsp[0]);
			}
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 451 "st6.y" /* yacc.c:1646  */
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
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 476 "st6.y" /* yacc.c:1646  */
    {		
					if(lookup((yyvsp[0])->name) != NULL){
						(yyvsp[0])->entry = lookup((yyvsp[0])->name);
						if((yyvsp[0])->entry->isLoc){						
							if((yyvsp[0])->entry->localEntry->nodetype==tPVAR){
								(yyvsp[0])->type=((yyvsp[0])->entry->localEntry)->type->prev;//-10;
								(yyvsp[0])->nodetype=tDEREF;
								(yyval)=(yyvsp[0]);
							} else {
								yyerror("Type mismatch: Expected Pointer\n");
							}
						} else {
							if((yyvsp[0])->entry->globalEntry->nodetype==tPVAR){
									(yyvsp[0])->type=((yyvsp[0])->entry->globalEntry)->type->prev;//-10;
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
#line 2293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 502 "st6.y" /* yacc.c:1646  */
    {	
				if(lookup((yyvsp[0])->name) != NULL){
						(yyvsp[0])->entry = lookup((yyvsp[0])->name);
						
						if((yyvsp[0])->entry->isLoc){						
								if((yyvsp[0])->entry->localEntry->nodetype==tVAR){
								(yyvsp[0])->type=((yyvsp[0])->entry->localEntry)->type->next;//+10;
								(yyvsp[0])->nodetype=tREF;
								(yyval)=(yyvsp[0]);
							} else {
								yyerror("Type mismatch: Expected Variable after &\n");
							}
						} else {
							if((yyvsp[0])->entry->globalEntry->nodetype==tVAR){
								(yyvsp[0])->type=((yyvsp[0])->entry->globalEntry)->type->next;//+10;
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
#line 2325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 529 "st6.y" /* yacc.c:1646  */
    {
					if(lookup((yyvsp[-3])->name) != NULL){
						(yyvsp[-3])->entry = lookup((yyvsp[-3])->name);
						//can't be local
						if((yyvsp[-3])->entry->globalEntry->nodetype==tARR){
								(yyvsp[-3])->type=((yyvsp[-3])->entry->globalEntry)->type->next;//+10;
								(yyvsp[-3])->nodetype=tREF;
								(yyval)=(yyvsp[-3]);
								if(strcmp((yyvsp[-1])->type->name,"int")==0){
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
#line 2355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 554 "st6.y" /* yacc.c:1646  */
    {
						if(lookup((yyvsp[-3])->name) != NULL){
								(yyvsp[-3])->entry = lookup((yyvsp[-3])->name);
								//must be global
								(yyvsp[-3])->type=((yyvsp[-3])->entry->globalEntry)->type;
								if(((yyvsp[-3])->entry->globalEntry)->nodetype!=tARR){
									yyerror("Type mismatch: Expected Array\n");
								}
								(yyvsp[-3])->nodetype=tARR;
								if(strcmp((yyvsp[-1])->type->name,"int")==0){
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
#line 2383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 577 "st6.y" /* yacc.c:1646  */
    {
						if(lookup((yyvsp[-6])->name) != NULL){
								(yyvsp[-6])->entry = lookup((yyvsp[-6])->name);
								(yyvsp[-6])->type=((yyvsp[-6])->entry->globalEntry)->type;
								if(((yyvsp[-6])->entry->globalEntry)->nodetype!=tDARR){
									yyerror("Type mismatch: Expected Double Array\n");
								}
								(yyvsp[-6])->nodetype=tDARR;
								if(strcmp((yyvsp[-4])->type->name,"int")==0){
									(yyvsp[-6])->middle = (yyvsp[-4]);
									if(((yyvsp[-4])->nodetype==tNUM) && ( (yyvsp[-4])->val >= (yyvsp[-6])->entry->globalEntry->size[0])){
										yyerror("Array out of bounds\n");
									}
								} else {
									yyerror("Expected integer type for array offset\n");
								}
								if(strcmp((yyvsp[-1])->type->name,"int")==0){
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
#line 2418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 608 "st6.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 609 "st6.y" /* yacc.c:1646  */
    {	char *retFunc = strdup(currFunc);
							currFunc=strdup((yyvsp[-3])->name);
							(yyval) = createFuncCallNode((yyvsp[-3])->name,(yyvsp[-1]));
							currFunc=retFunc;
							}
#line 2434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 614 "st6.y" /* yacc.c:1646  */
    {
		(yyvsp[0])->type=TLookup("NULL");
		(yyvsp[0])->val=-1;
		(yyvsp[0])->nodetype=tNUM;
		}
#line 2444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 622 "st6.y" /* yacc.c:1646  */
    {	(yyvsp[0])->arglist=(yyvsp[-2]);
							(yyval)=(yyvsp[0]);}
#line 2451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 624 "st6.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 625 "st6.y" /* yacc.c:1646  */
    {(yyval)=NULL;}
#line 2463 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2467 "y.tab.c" /* yacc.c:1646  */
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
#line 630 "st6.y" /* yacc.c:1906  */


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

