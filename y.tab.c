/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFICATEUR = 258,
     CONSTANTE = 259,
     VOID = 260,
     INT = 261,
     FOR = 262,
     WHILE = 263,
     IF = 264,
     ELSE = 265,
     SWITCH = 266,
     CASE = 267,
     DEFAULT = 268,
     BREAK = 269,
     RETURN = 270,
     PLUS = 271,
     MOINS = 272,
     MUL = 273,
     DIV = 274,
     LSHIFT = 275,
     RSHIFT = 276,
     BAND = 277,
     BOR = 278,
     LAND = 279,
     LOR = 280,
     LT = 281,
     GT = 282,
     GEQ = 283,
     LEQ = 284,
     EQ = 285,
     NEQ = 286,
     NOT = 287,
     EXTERN = 288,
     THEN = 289,
     OP = 290,
     REL = 291
   };
#endif
/* Tokens.  */
#define IDENTIFICATEUR 258
#define CONSTANTE 259
#define VOID 260
#define INT 261
#define FOR 262
#define WHILE 263
#define IF 264
#define ELSE 265
#define SWITCH 266
#define CASE 267
#define DEFAULT 268
#define BREAK 269
#define RETURN 270
#define PLUS 271
#define MOINS 272
#define MUL 273
#define DIV 274
#define LSHIFT 275
#define RSHIFT 276
#define BAND 277
#define BOR 278
#define LAND 279
#define LOR 280
#define LT 281
#define GT 282
#define GEQ 283
#define LEQ 284
#define EQ 285
#define NEQ 286
#define NOT 287
#define EXTERN 288
#define THEN 289
#define OP 290
#define REL 291




/* Copy the first part of user declarations.  */
#line 1 "miniC.y"


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <assert.h>


#include "table_symboles_fonctions.h"
#include "table_symboles.h"
#include "node.h"




int yylex();
int yylineno;

List_Node* noeuds;
char* ellipse = "ellipse";
char* box = "box";
char* invtrapezium = "invtrapezium";
char* septagon = "septagon";
char* trapezium = "trapezium";
char* blue = "blue";
char* diamond = "diamond";

int nbr_erreur = 0;

void yyerror(char *s) {
    fprintf(stderr, "* Erreur \"%s\", à la ligne %d: \n", s, yylineno);
    nbr_erreur++;
}




/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 57 "miniC.y"
{
    char* var; 
	int val;
	List_Node* nodes;
	Node* node;
	liste_t* listeT;
}
/* Line 193 of yacc.c.  */
#line 214 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 65 "miniC.y"

	#include "table_symboles_fonctions.c"
	#include "table_symboles.c" 
	#include "node.c"
	/*table* init_table; //table de symbole */


/* Line 216 of yacc.c.  */
#line 233 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   215

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNRULES -- Number of states.  */
#define YYNSTATES  153

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      41,    42,     2,     2,    38,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    45,    37,
       2,    46,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    39,     2,    40,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,    44,     2,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     9,    10,    13,    15,    19,    23,
      25,    27,    32,    42,    50,    52,    54,    58,    59,    62,
      65,    66,    68,    70,    72,    75,    77,    80,    90,    96,
     102,   110,   118,   121,   123,   128,   132,   135,   138,   142,
     146,   151,   157,   159,   164,   168,   172,   174,   176,   181,
     185,   186,   191,   195,   199,   203,   205,   207,   209,   211,
     213,   215,   217,   219,   221,   223,   225,   227,   229,   231,
     233
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    49,    50,    -1,    49,    51,    -1,    -1,
      50,    54,    -1,    54,    -1,    55,    52,    37,    -1,    52,
      38,    53,    -1,    53,    -1,     3,    -1,    53,    39,     4,
      40,    -1,    55,     3,    41,    56,    42,    43,    49,    58,
      44,    -1,    33,    55,     3,    41,    56,    42,    37,    -1,
       5,    -1,     6,    -1,    56,    38,    57,    -1,    -1,     6,
       3,    -1,    58,    59,    -1,    -1,    60,    -1,    61,    -1,
      65,    -1,    66,    37,    -1,    67,    -1,    68,    37,    -1,
       7,    41,    66,    37,    72,    37,    66,    42,    59,    -1,
       8,    41,    72,    42,    59,    -1,     9,    41,    72,    42,
      59,    -1,     9,    41,    72,    42,    59,    10,    59,    -1,
      11,    41,    70,    42,    43,    62,    44,    -1,    63,    62,
      -1,    64,    -1,    12,     4,    45,    59,    -1,    13,    45,
      59,    -1,    14,    37,    -1,    15,    37,    -1,    15,    70,
      37,    -1,    69,    46,    70,    -1,    43,    49,    58,    44,
      -1,     3,    41,    71,    42,    37,    -1,     3,    -1,    69,
      39,     4,    40,    -1,    41,    70,    42,    -1,    70,    73,
      70,    -1,     4,    -1,    69,    -1,     3,    41,    71,    42,
      -1,    71,    38,    70,    -1,    -1,    32,    41,    72,    42,
      -1,    72,    74,    72,    -1,    41,    72,    42,    -1,    70,
      75,    70,    -1,    16,    -1,    17,    -1,    18,    -1,    19,
      -1,    20,    -1,    21,    -1,    22,    -1,    23,    -1,    24,
      -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,    29,
      -1,    30,    -1,    31,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    83,    83,    86,    89,    92,    93,    96,   106,   109,
     114,   124,   138,   148,   159,   160,   163,   164,   167,   174,
     175,   178,   179,   180,   181,   182,   183,   186,   187,   190,
     191,   192,   202,   206,   212,   218,   224,   225,   226,   229,
     234,   237,   252,   258,   263,   264,   266,   271,   272,   275,
     276,   279,   281,   283,   285,   289,   291,   293,   295,   297,
     299,   301,   303,   307,   309,   313,   315,   317,   319,   321,
     323
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFICATEUR", "CONSTANTE", "VOID",
  "INT", "FOR", "WHILE", "IF", "ELSE", "SWITCH", "CASE", "DEFAULT",
  "BREAK", "RETURN", "PLUS", "MOINS", "MUL", "DIV", "LSHIFT", "RSHIFT",
  "BAND", "BOR", "LAND", "LOR", "LT", "GT", "GEQ", "LEQ", "EQ", "NEQ",
  "NOT", "EXTERN", "THEN", "OP", "REL", "';'", "','", "'['", "']'", "'('",
  "')'", "'{'", "'}'", "':'", "'='", "$accept", "programme",
  "liste_declarations", "liste_fonctions", "declaration",
  "liste_declarateurs", "declarateur", "fonction", "type", "liste_parms",
  "parm", "liste_instructions", "instruction", "iteration", "selection",
  "switch_cases", "case_clause", "default_clause", "saut", "affectation",
  "bloc", "appel", "variable", "expression", "liste_expressions",
  "condition", "binary_op", "binary_rel", "binary_comp", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    59,    44,    91,
      93,    40,    41,   123,   125,    58,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    51,    52,    52,
      53,    53,    54,    54,    55,    55,    56,    56,    57,    58,
      58,    59,    59,    59,    59,    59,    59,    60,    60,    61,
      61,    61,    62,    62,    63,    64,    65,    65,    65,    66,
      67,    68,    69,    69,    70,    70,    70,    70,    70,    71,
      71,    72,    72,    72,    72,    73,    73,    73,    73,    73,
      73,    73,    73,    74,    74,    75,    75,    75,    75,    75,
      75
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     2,     1,     3,     3,     1,
       1,     4,     9,     7,     1,     1,     3,     0,     2,     2,
       0,     1,     1,     1,     2,     1,     2,     9,     5,     5,
       7,     7,     2,     1,     4,     3,     2,     2,     3,     3,
       4,     5,     1,     4,     3,     3,     1,     1,     4,     3,
       0,     4,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,    14,    15,     0,     2,     3,     6,
       0,     0,     5,     0,    10,     0,     9,     0,     0,    17,
       7,     0,     0,    17,     0,    10,     8,     0,     0,     0,
       0,    11,     0,     0,    16,     4,    13,    18,    20,     0,
       0,    42,     0,     0,     0,     0,     0,     0,     4,    12,
      19,    21,    22,    23,     0,    25,     0,     0,    50,     0,
       0,     0,     0,    36,    42,    46,    37,     0,    47,     0,
      20,    24,    26,     0,     0,     0,    42,     0,     0,     0,
       0,     0,     0,     0,    50,     0,    55,    56,    57,    58,
      59,    60,    61,    62,    38,     0,     0,     0,    39,     0,
       0,     0,     0,     0,     0,    65,    66,    67,    68,    69,
      70,     0,    63,    64,     0,     0,     0,     0,     0,    44,
      45,    40,    43,    49,    41,     0,     0,    53,    54,    28,
      52,    29,     0,    48,     0,    51,     0,     0,     0,     0,
       0,    33,     0,    30,     0,     0,    31,    32,     0,     0,
      35,    27,    34
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     7,     8,    15,    16,     9,    39,    24,
      34,    40,    50,    51,    52,   139,   140,   141,    53,    54,
      55,    56,    68,    80,    75,    81,    95,   115,   111
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -58
static const yytype_int16 yypact[] =
{
     -58,     4,    30,   -58,   -58,   -58,   101,    30,   -58,   -58,
      19,    44,   -58,    67,    41,    73,    53,    54,    41,   -58,
     -58,    96,   108,   -58,   -32,   -58,    53,    74,    10,   107,
      97,   -58,   104,   148,   -58,   -58,   -58,   -58,   101,    96,
       0,   111,   113,   114,   115,   126,   120,    14,   -58,   -58,
     -58,   -58,   -58,   -58,   131,   -58,   133,   -19,   -58,   150,
       9,     9,    21,   -58,   138,   -58,   -58,    21,   156,   143,
     101,   -58,   -58,   192,    21,    16,   -58,   160,   157,     9,
     155,    15,    36,   116,   -58,   127,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,    21,    23,   159,   171,    21,
     163,     9,     9,   100,    48,   -58,   -58,   -58,   -58,   -58,
     -58,    21,   -58,   -58,    72,     9,    72,   158,    26,   -58,
     -58,   -58,   -58,   171,   -58,    64,    60,   -58,   171,   -58,
     -58,   193,   112,   -58,   150,   -58,    72,   198,   161,   164,
     112,   -58,   162,   -58,   165,    72,   -58,   -58,    72,    72,
     -58,   -58,   -58
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -58,   -58,    -6,   -58,   -58,   -58,   184,   200,    91,   186,
     -58,   141,   -45,   -58,   -58,    75,   -58,   -58,   -58,   -57,
     -58,   -58,   -40,   -46,   128,   -56,   -58,   -58,   -58
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      57,    69,    77,    41,     3,    82,    29,    42,    43,    44,
      30,    45,    64,    65,    46,    47,    83,    64,    65,    57,
      73,    85,    14,   104,    64,    65,    41,    74,    98,    38,
      42,    43,    44,   103,    45,     4,     5,    46,    47,   112,
     113,    78,    70,    48,    49,   125,   126,    17,    29,   120,
      79,    66,    32,   123,    99,    67,    57,   114,   100,   130,
     112,   113,    67,     6,    99,   128,    48,   121,   133,   129,
      18,   131,   112,   113,    57,    41,    57,   142,   116,    42,
      43,    44,    19,    45,   112,   113,    46,    47,   112,   113,
     127,   143,    22,    10,    57,    23,    57,    11,    13,    25,
     150,   134,   135,   151,   152,    57,     4,     5,    57,    57,
      20,    21,    27,    33,    31,    48,    86,    87,    88,    89,
      90,    91,    92,    93,   137,   138,   105,   106,   107,   108,
     109,   110,    86,    87,    88,    89,    90,    91,    92,    93,
      35,    36,   119,    86,    87,    88,    89,    90,    91,    92,
      93,    37,    58,    76,    59,    60,    61,    63,   117,    86,
      87,    88,    89,    90,    91,    92,    93,    62,    71,   119,
      72,    86,    87,    88,    89,    90,    91,    92,    93,    84,
      94,   105,   106,   107,   108,   109,   110,    86,    87,    88,
      89,    90,    91,    92,    93,    73,    97,   101,   102,   122,
     124,   132,   144,   136,   148,    26,   145,    12,   146,    28,
     149,    96,   118,     0,     0,   147
};

static const yytype_int16 yycheck[] =
{
      40,    47,    59,     3,     0,    61,    38,     7,     8,     9,
      42,    11,     3,     4,    14,    15,    62,     3,     4,    59,
      39,    67,     3,    79,     3,     4,     3,    46,    74,    35,
       7,     8,     9,    79,    11,     5,     6,    14,    15,    24,
      25,    32,    48,    43,    44,   101,   102,     3,    38,    95,
      41,    37,    42,    99,    38,    41,    96,    42,    42,   115,
      24,    25,    41,    33,    38,   111,    43,    44,    42,   114,
       3,   116,    24,    25,   114,     3,   116,   134,    42,     7,
       8,     9,    41,    11,    24,    25,    14,    15,    24,    25,
      42,   136,    39,     2,   134,    41,   136,     6,     7,     3,
     145,    37,    42,   148,   149,   145,     5,     6,   148,   149,
      37,    38,     4,     6,    40,    43,    16,    17,    18,    19,
      20,    21,    22,    23,    12,    13,    26,    27,    28,    29,
      30,    31,    16,    17,    18,    19,    20,    21,    22,    23,
      43,    37,    42,    16,    17,    18,    19,    20,    21,    22,
      23,     3,    41,     3,    41,    41,    41,    37,    42,    16,
      17,    18,    19,    20,    21,    22,    23,    41,    37,    42,
      37,    16,    17,    18,    19,    20,    21,    22,    23,    41,
      37,    26,    27,    28,    29,    30,    31,    16,    17,    18,
      19,    20,    21,    22,    23,    39,     4,    37,    41,    40,
      37,    43,     4,    10,    42,    21,    45,     7,    44,    23,
      45,    70,    84,    -1,    -1,   140
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    48,    49,     0,     5,     6,    33,    50,    51,    54,
      55,    55,    54,    55,     3,    52,    53,     3,     3,    41,
      37,    38,    39,    41,    56,     3,    53,     4,    56,    38,
      42,    40,    42,     6,    57,    43,    37,     3,    49,    55,
      58,     3,     7,     8,     9,    11,    14,    15,    43,    44,
      59,    60,    61,    65,    66,    67,    68,    69,    41,    41,
      41,    41,    41,    37,     3,     4,    37,    41,    69,    70,
      49,    37,    37,    39,    46,    71,     3,    66,    32,    41,
      70,    72,    72,    70,    41,    70,    16,    17,    18,    19,
      20,    21,    22,    23,    37,    73,    58,     4,    70,    38,
      42,    37,    41,    70,    72,    26,    27,    28,    29,    30,
      31,    75,    24,    25,    42,    74,    42,    42,    71,    42,
      70,    44,    40,    70,    37,    72,    72,    42,    70,    59,
      72,    59,    43,    42,    37,    42,    10,    12,    13,    62,
      63,    64,    66,    59,     4,    45,    44,    62,    42,    45,
      59,    59,    59
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 83 "miniC.y"
    {printf("variables declarees : %s", (yyvsp[(1) - (2)].var));noeuds=(yyvsp[(2) - (2)].nodes);}
    break;

  case 3:
#line 86 "miniC.y"
    {
			(yyval.var) = append(2,(yyvsp[(1) - (2)].var),(yyvsp[(2) - (2)].var));
		}
    break;

  case 4:
#line 89 "miniC.y"
    {(yyval.var) = "";}
    break;

  case 5:
#line 92 "miniC.y"
    {(yyval.nodes) = add_to_list((yyvsp[(2) - (2)].node),(yyvsp[(1) - (2)].nodes));}
    break;

  case 6:
#line 93 "miniC.y"
    {(yyval.nodes) = add_to_list((yyvsp[(1) - (1)].node),create_empty_list());}
    break;

  case 7:
#line 96 "miniC.y"
    {
			if(strcmp((yyvsp[(1) - (3)].var),"void")==0){
                yyerror("déclaration avec void");
                printf("Le type void ne correspond pas aux déclarations !\n");
			}else{
				(yyval.var) = append(4, (yyvsp[(1) - (3)].var), " ", (yyvsp[(2) - (3)].var), ";");
			}
	}
    break;

  case 8:
#line 106 "miniC.y"
    {
											(yyval.var) = append(3,(yyvsp[(1) - (3)].var),", ",(yyvsp[(3) - (3)].var));
											}
    break;

  case 9:
#line 109 "miniC.y"
    {
					(yyval.var) = (yyvsp[(1) - (1)].var);
					}
    break;

  case 10:
#line 114 "miniC.y"
    { 
		symbole *s = existe((yyvsp[(1) - (1)].var));
		if (s == NULL){
			symbole *s = inserer((yyvsp[(1) - (1)].var));
			s->nom = (yyvsp[(1) - (1)].var);
			(yyval.var) = (yyvsp[(1) - (1)].var);
		}else{
			yyerror("la variable existe deja");
		}
	}
    break;

  case 11:
#line 124 "miniC.y"
    {
			symbole *s = existe((yyvsp[(1) - (4)].var));
			if (s != NULL){
				symbole *s = inserer((yyvsp[(1) - (4)].var));
				s->nom = (yyvsp[(1) - (4)].var);
        		s->is_array = 1;
        		s->array_size = (yyvsp[(3) - (4)].val);
        		(yyval.var) = (yyvsp[(1) - (4)].var);
			}else{
				yyerror("la variable existe deja");
		}
	}
    break;

  case 12:
#line 138 "miniC.y"
    {
			fonction_t *f = existe_fonction((yyvsp[(1) - (9)].var),(yyvsp[(2) - (9)].var),(yyvsp[(4) - (9)].val));
			if (f == NULL){
				ajouter_fonction((yyvsp[(1) - (9)].var), (yyvsp[(2) - (9)].var), (yyvsp[(4) - (9)].val));
				(yyval.node) = create_node(append(3, (yyvsp[(2) - (9)].var), ",", (yyvsp[(1) - (9)].var)), invtrapezium, NULL, "blue", 1, (yyvsp[(8) - (9)].nodes));
			}else{
				yyerror("La fonction est deja definie");
			}

		}
    break;

  case 13:
#line 148 "miniC.y"
    {
			fonction_t *f = existe_fonction((yyvsp[(2) - (7)].var),(yyvsp[(3) - (7)].var),(yyvsp[(5) - (7)].val));
			if (f == NULL){
				ajouter_fonction((yyvsp[(2) - (7)].var),(yyvsp[(3) - (7)].var),(yyvsp[(5) - (7)].val));
				(yyval.node) = create_node(append(4,"EXTERN ", (yyvsp[(3) - (7)].var), ",", (yyvsp[(2) - (7)].var)), invtrapezium, NULL, "blue", 0);
			}else{
				yyerror("La fonction est deja definie");
			}
		}
    break;

  case 14:
#line 159 "miniC.y"
    {(yyval.var) = "void";}
    break;

  case 15:
#line 160 "miniC.y"
    {(yyval.var) = "int";}
    break;

  case 16:
#line 163 "miniC.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) + compter_elements((yyvsp[(3) - (3)].listeT)) ;}
    break;

  case 17:
#line 164 "miniC.y"
    {(yyval.val) = list_length(create_empty_list());}
    break;

  case 18:
#line 167 "miniC.y"
    {param_t param;
							param.type = "int"; 
							param.nom = (yyvsp[(2) - (2)].var); 
							(yyval.listeT) = creer_liste(param); 
							}
    break;

  case 19:
#line 174 "miniC.y"
    {(yyval.nodes) = append_lists((yyvsp[(2) - (2)].nodes),(yyvsp[(1) - (2)].nodes));}
    break;

  case 20:
#line 175 "miniC.y"
    { (yyval.nodes) = create_empty_list();}
    break;

  case 21:
#line 178 "miniC.y"
    {(yyval.nodes) = create_list((yyvsp[(1) - (1)].node));}
    break;

  case 22:
#line 179 "miniC.y"
    {(yyval.nodes) = create_list((yyvsp[(1) - (1)].node));}
    break;

  case 23:
#line 180 "miniC.y"
    {(yyval.nodes) = create_list((yyvsp[(1) - (1)].node));}
    break;

  case 24:
#line 181 "miniC.y"
    {(yyval.nodes) = create_list((yyvsp[(1) - (2)].node));}
    break;

  case 25:
#line 182 "miniC.y"
    {(yyval.nodes) = (yyvsp[(1) - (1)].nodes);}
    break;

  case 26:
#line 183 "miniC.y"
    {(yyval.nodes) = create_list((yyvsp[(1) - (2)].node));}
    break;

  case 27:
#line 186 "miniC.y"
    { (yyval.node) = create_node("FOR", ellipse, NULL, NULL,4,(yyvsp[(3) - (9)].node),(yyvsp[(5) - (9)].node),(yyvsp[(7) - (9)].node),(yyvsp[(9) - (9)].nodes));}
    break;

  case 28:
#line 187 "miniC.y"
    { (yyval.node) = create_node("WHILE", ellipse, NULL, NULL,2,(yyvsp[(3) - (5)].node),(yyvsp[(5) - (5)].nodes));}
    break;

  case 29:
#line 190 "miniC.y"
    { (yyval.node) = create_node("IF", diamond, NULL, NULL,2, (yyvsp[(3) - (5)].node),(yyvsp[(5) - (5)].nodes));}
    break;

  case 30:
#line 191 "miniC.y"
    { (yyval.node) = create_node("IF", diamond, NULL, NULL,3, (yyvsp[(3) - (7)].node),(yyvsp[(5) - (7)].nodes),(yyvsp[(7) - (7)].nodes));}
    break;

  case 31:
#line 192 "miniC.y"
    { 
        	/* Convert linked list of switch_cases into array of pointers */
        	Node** casesArray = convert_to_array(append_lists(create_list((yyvsp[(3) - (7)].node)),(yyvsp[(6) - (7)].nodes)));
        	int num_cases = list_length((yyvsp[(6) - (7)].nodes))+1;
			Node* switch_node = create_node_array("SWITCH", ellipse, NULL, NULL, num_cases, casesArray);
			free(casesArray);
        	(yyval.node) = switch_node;
    		}
    break;

  case 32:
#line 202 "miniC.y"
    {
        /* Create a linked list of case nodes */
        (yyval.nodes) = add_to_list((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].nodes));
    }
    break;

  case 33:
#line 206 "miniC.y"
    {
        (yyval.nodes) = create_list((yyvsp[(1) - (1)].node));
    }
    break;

  case 34:
#line 212 "miniC.y"
    {
        (yyval.node) = create_node("CASE", NULL, NULL, NULL, 1, (yyvsp[(4) - (4)].nodes));
    }
    break;

  case 35:
#line 218 "miniC.y"
    {
        (yyval.node) = create_node("DEFAULT", NULL, NULL, NULL, 1, (yyvsp[(3) - (3)].nodes));
    }
    break;

  case 36:
#line 224 "miniC.y"
    {(yyval.node) = create_node("BREAK", box, NULL,NULL,0);}
    break;

  case 37:
#line 225 "miniC.y"
    {(yyval.node) = create_node("RETURN", trapezium, NULL, blue,0);}
    break;

  case 38:
#line 226 "miniC.y"
    {(yyval.node) = create_node("RETURN", trapezium, NULL, blue,1,(yyvsp[(2) - (3)].node));}
    break;

  case 39:
#line 229 "miniC.y"
    { 
				(yyval.node) = create_node(":=", NULL, NULL, NULL, 2, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); 
				}
    break;

  case 40:
#line 234 "miniC.y"
    {(yyval.nodes) = (yyvsp[(3) - (4)].nodes);}
    break;

  case 41:
#line 237 "miniC.y"
    {
			fonction_t* f = existe_fonction("void",(yyvsp[(1) - (5)].var), list_length((yyvsp[(3) - (5)].nodes)));
			if (f != NULL) {
				(yyval.node) = create_node_array((yyvsp[(1) - (5)].var),septagon,NULL,NULL,list_length((yyvsp[(3) - (5)].nodes)),convert_to_array((yyvsp[(3) - (5)].nodes)));
			}else{
				fonction_t* f2 = existe_fonction("int",(yyvsp[(1) - (5)].var), list_length((yyvsp[(3) - (5)].nodes)));
				if (f != NULL) {
					(yyval.node) = create_node_array((yyvsp[(1) - (5)].var),septagon,NULL,NULL,list_length((yyvsp[(3) - (5)].nodes)),convert_to_array((yyvsp[(3) - (5)].nodes)));
				}else{
					yyerror("La fonction n'existe pas, verifiez le nom ou le nombre de paramètres");
				}
			}
		}
    break;

  case 42:
#line 252 "miniC.y"
    {
			symbole *s = existe((yyvsp[(1) - (1)].var));
        	if (s != NULL && s->is_array == 1) {
            	yyerror("Array used without index");
        	}
        	(yyval.node) = create_node((yyvsp[(1) - (1)].var), ellipse, NULL, NULL, 0);}
    break;

  case 43:
#line 258 "miniC.y"
    {
        	(yyval.node) = create_node("TAB", ellipse, NULL, NULL, 2, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].val)); 
		}
    break;

  case 44:
#line 263 "miniC.y"
    {(yyval.node) = (yyvsp[(2) - (3)].node);}
    break;

  case 45:
#line 264 "miniC.y"
    {(yyval.node) = create_node((yyvsp[(2) - (3)].var),ellipse,NULL,NULL,2,(yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node));
			  									 }
    break;

  case 46:
#line 266 "miniC.y"
    {
		char ss[] = "X";
		ss[0] = (yyvsp[(1) - (1)].val) + '0';
		(yyval.node) = create_node(ss,ellipse,NULL,NULL,0);
		}
    break;

  case 47:
#line 271 "miniC.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 48:
#line 272 "miniC.y"
    {(yyval.node) = create_node_array((yyvsp[(1) - (4)].var),septagon,NULL,NULL,list_length((yyvsp[(3) - (4)].nodes)),convert_to_array((yyvsp[(3) - (4)].nodes)));}
    break;

  case 49:
#line 275 "miniC.y"
    {(yyval.nodes) = append_lists((yyvsp[(1) - (3)].nodes),create_list((yyvsp[(3) - (3)].node)));}
    break;

  case 50:
#line 276 "miniC.y"
    {(yyval.nodes) = create_empty_list();}
    break;

  case 51:
#line 279 "miniC.y"
    {(yyval.node) = create_node("!",ellipse,NULL,NULL,1,(yyvsp[(3) - (4)].node));
			  				  }
    break;

  case 52:
#line 281 "miniC.y"
    {(yyval.node) = create_node((yyvsp[(2) - (3)].var),ellipse,NULL,NULL,2,(yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node));
			  									 }
    break;

  case 53:
#line 283 "miniC.y"
    {(yyval.node) = (yyvsp[(2) - (3)].node);
			  			  }
    break;

  case 54:
#line 285 "miniC.y"
    {(yyval.node) = create_node((yyvsp[(2) - (3)].var),ellipse,NULL,NULL,2,(yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node));
			  							  }
    break;

  case 55:
#line 289 "miniC.y"
    {(yyval.var) = "+";
			 }
    break;

  case 56:
#line 291 "miniC.y"
    {(yyval.var) = "-";
			   }
    break;

  case 57:
#line 293 "miniC.y"
    {(yyval.var) = "*";
			 }
    break;

  case 58:
#line 295 "miniC.y"
    {(yyval.var) = "/";
			 }
    break;

  case 59:
#line 297 "miniC.y"
    {(yyval.var) = "<<";
			 }
    break;

  case 60:
#line 299 "miniC.y"
    {(yyval.var) = ">>";
			 }
    break;

  case 61:
#line 301 "miniC.y"
    {(yyval.var) = "&";
			 }
    break;

  case 62:
#line 303 "miniC.y"
    {(yyval.var) = "|";
			 }
    break;

  case 63:
#line 307 "miniC.y"
    {(yyval.var) = "&&";
			 }
    break;

  case 64:
#line 309 "miniC.y"
    {(yyval.var) = "||";
			 }
    break;

  case 65:
#line 313 "miniC.y"
    {(yyval.var) = "<";
			}
    break;

  case 66:
#line 315 "miniC.y"
    {(yyval.var) = ">";
			}
    break;

  case 67:
#line 317 "miniC.y"
    {(yyval.var) = ">=";
			}
    break;

  case 68:
#line 319 "miniC.y"
    {(yyval.var) = "<=";
			}
    break;

  case 69:
#line 321 "miniC.y"
    {(yyval.var) = "==";
			}
    break;

  case 70:
#line 323 "miniC.y"
    {(yyval.var) = "!=";
			}
    break;


/* Line 1267 of yacc.c.  */
#line 2033 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 326 "miniC.y"

int main() {
    yyparse();
	init_table();
	init_table_fonctions();
	print_dot(create_node_array("programme",ellipse,NULL,NULL,list_length(noeuds),convert_to_array(noeuds)));
	table_fonctions_delete();
	table_delete();
    return 0;
}


