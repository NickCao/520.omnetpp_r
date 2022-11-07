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
#define YYLSP_NEEDED 1

/* Substitute the variable and function names.  */
#define yyparse msg2yyparse
#define yylex   msg2yylex
#define yyerror msg2yyerror
#define yylval  msg2yylval
#define yychar  msg2yychar
#define yydebug msg2yydebug
#define yynerrs msg2yynerrs
#define yylloc msg2yylloc

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NAMESPACE = 258,
     CPLUSPLUS = 259,
     CPLUSPLUSBODY = 260,
     MESSAGE = 261,
     PACKET = 262,
     CLASS = 263,
     STRUCT = 264,
     ENUM = 265,
     NONCOBJECT = 266,
     EXTENDS = 267,
     FIELDS = 268,
     PROPERTIES = 269,
     ABSTRACT = 270,
     READONLY = 271,
     NAME = 272,
     INTCONSTANT = 273,
     REALCONSTANT = 274,
     STRINGCONSTANT = 275,
     CHARCONSTANT = 276,
     TRUE_ = 277,
     FALSE_ = 278,
     BOOLTYPE = 279,
     CHARTYPE = 280,
     SHORTTYPE = 281,
     INTTYPE = 282,
     LONGTYPE = 283,
     DOUBLETYPE = 284,
     UNSIGNED_ = 285,
     STRINGTYPE = 286,
     EQ = 287,
     NE = 288,
     GE = 289,
     LE = 290,
     AND = 291,
     OR = 292,
     XOR = 293,
     NOT = 294,
     BIN_AND = 295,
     BIN_OR = 296,
     BIN_XOR = 297,
     BIN_COMPL = 298,
     SHIFT_LEFT = 299,
     SHIFT_RIGHT = 300,
     INVALID_CHAR = 301,
     UMIN = 302
   };
#endif
/* Tokens.  */
#define NAMESPACE 258
#define CPLUSPLUS 259
#define CPLUSPLUSBODY 260
#define MESSAGE 261
#define PACKET 262
#define CLASS 263
#define STRUCT 264
#define ENUM 265
#define NONCOBJECT 266
#define EXTENDS 267
#define FIELDS 268
#define PROPERTIES 269
#define ABSTRACT 270
#define READONLY 271
#define NAME 272
#define INTCONSTANT 273
#define REALCONSTANT 274
#define STRINGCONSTANT 275
#define CHARCONSTANT 276
#define TRUE_ 277
#define FALSE_ 278
#define BOOLTYPE 279
#define CHARTYPE 280
#define SHORTTYPE 281
#define INTTYPE 282
#define LONGTYPE 283
#define DOUBLETYPE 284
#define UNSIGNED_ 285
#define STRINGTYPE 286
#define EQ 287
#define NE 288
#define GE 289
#define LE 290
#define AND 291
#define OR 292
#define XOR 293
#define NOT 294
#define BIN_AND 295
#define BIN_OR 296
#define BIN_XOR 297
#define BIN_COMPL 298
#define SHIFT_LEFT 299
#define SHIFT_RIGHT 300
#define INVALID_CHAR 301
#define UMIN 302




/* Copy the first part of user declarations.  */
#line 48 "msg2.y"


#include <stdio.h>
#include <stdlib.h>
#include "nedyydefs.h"
#include "nederror.h"
#include "nedexception.h"
#include "commonutil.h"

#define YYDEBUG 1           /* allow debugging */
#define YYDEBUGGING_ON 0    /* turn on/off debugging */

#if YYDEBUG != 0
#define YYERROR_VERBOSE     /* more detailed error messages */
#include <string.h>         /* YYVERBOSE needs it */
#endif

#define yylloc msg2yylloc
#define yyin msg2yyin
#define yyout msg2yyout
#define yyrestart msg2yyrestart
#define yy_scan_string msg2yy_scan_string
#define yy_delete_buffer msg2yy_delete_buffer
extern FILE *yyin;
extern FILE *yyout;
struct yy_buffer_state;
struct yy_buffer_state *yy_scan_string(const char *str);
void yy_delete_buffer(struct yy_buffer_state *);
void yyrestart(FILE *);
int yylex();
void yyerror (const char *s);

#include "nedparser.h"
#include "nedfilebuffer.h"
#include "nedelements.h"
#include "nedutil.h"
#include "nedyylib.h"

USING_NAMESPACE

static struct MSG2ParserState
{
    /* tmp flags, used with msg fields */
    bool isAbstract;
    bool isReadonly;

    std::vector<NEDElement *> propvals; // temporarily collects property values

    /* MSG-II: message subclassing */
    MsgFileElement *msgfile;
    NamespaceElement *namespacedecl;
    CplusplusElement *cplusplus;
    StructDeclElement *structdecl;
    ClassDeclElement *classdecl;
    MessageDeclElement *messagedecl;
    PacketDeclElement *packetdecl;
    EnumDeclElement *enumdecl;
    EnumElement *enump;
    MessageElement *messagep;
    PacketElement *packetp;
    ClassElement *classp;
    StructElement *structp;
    NEDElement *msgclassorstruct;
    EnumFieldsElement *enumfields;
    EnumFieldElement *enumfield;
    FieldElement *field;
    PropertyElement *property;
    PropertyKeyElement *propkey;
} ps;

static void resetParserState()
{
    static MSG2ParserState cleanps;
    ps = cleanps;
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
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 298 "msg2.tab.cc"

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
# if YYENABLE_NLS
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
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYLAST   209

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  57
/* YYNRULES -- Number of rules.  */
#define YYNRULES  171
/* YYNRULES -- Number of states.  */
#define YYNSTATES  243

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    70,    55,    66,     2,
      64,    65,    53,    51,    68,    52,    67,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    48,    58,
      50,    61,    49,    47,    69,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    62,     2,    63,    56,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    59,     2,    60,     2,     2,     2,     2,
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
      45,    46,    57
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    37,    42,
      44,    48,    52,    56,    61,    67,    71,    75,    79,    80,
      88,    89,    99,   101,   102,   105,   107,   110,   115,   118,
     121,   124,   127,   131,   137,   141,   147,   151,   157,   161,
     167,   173,   175,   176,   179,   182,   184,   186,   187,   196,
     197,   205,   207,   209,   212,   215,   216,   218,   221,   223,
     225,   227,   229,   232,   235,   238,   241,   243,   245,   247,
     251,   255,   258,   259,   264,   265,   268,   269,   272,   274,
     276,   278,   280,   282,   284,   286,   288,   290,   292,   294,
     296,   298,   300,   302,   304,   306,   308,   310,   312,   314,
     316,   318,   320,   322,   324,   326,   328,   330,   332,   334,
     336,   338,   340,   342,   344,   346,   348,   350,   352,   354,
     357,   359,   363,   367,   370,   373,   376,   378,   383,   386,
     392,   394,   398,   400,   404,   406,   410,   412,   414,   417,
     419,   421,   423,   425,   427,   429,   431,   432,   436,   437,
     439,   440,   443,   445,   449,   450,   452,   453,   456,   458,
     463,   465
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      72,     0,    -1,    73,    -1,    73,    74,    -1,    -1,    75,
      -1,    77,    -1,    78,    -1,    79,    -1,    80,    -1,    81,
      -1,    82,    -1,    83,    -1,    89,    -1,    90,    -1,    91,
      -1,    92,    -1,     3,    76,    58,    -1,    76,    48,    48,
      17,    -1,    17,    -1,     4,     5,   127,    -1,     9,    17,
      58,    -1,     8,    17,    58,    -1,     8,    11,    17,    58,
      -1,     8,    17,    12,    17,    58,    -1,     6,    17,    58,
      -1,     7,    17,    58,    -1,    10,    17,    58,    -1,    -1,
      10,    17,    59,    84,    86,    60,   127,    -1,    -1,    10,
      17,    12,    17,    59,    85,    86,    60,   127,    -1,    87,
      -1,    -1,    87,    88,    -1,    88,    -1,    17,    58,    -1,
      17,    61,   110,    58,    -1,    93,    97,    -1,    94,    97,
      -1,    95,    97,    -1,    96,    97,    -1,     6,    17,    59,
      -1,     6,    17,    12,    17,    59,    -1,     7,    17,    59,
      -1,     7,    17,    12,    17,    59,    -1,     8,    17,    59,
      -1,     8,    17,    12,    17,    59,    -1,     9,    17,    59,
      -1,     9,    17,    12,    17,    59,    -1,    98,   123,   120,
      60,   127,    -1,    99,    -1,    -1,    99,   100,    -1,    99,
     112,    -1,   100,    -1,   112,    -1,    -1,   103,   104,    17,
     101,   105,   106,   107,    58,    -1,    -1,   103,    17,   102,
     105,   106,   107,    58,    -1,    15,    -1,    16,    -1,    15,
      16,    -1,    16,    15,    -1,    -1,    17,    -1,    17,    53,
      -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,    30,
      25,    -1,    30,    26,    -1,    30,    27,    -1,    30,    28,
      -1,    29,    -1,    31,    -1,    24,    -1,    62,    18,    63,
      -1,    62,    17,    63,    -1,    62,    63,    -1,    -1,    10,
      64,    17,    65,    -1,    -1,    61,   108,    -1,    -1,   108,
     109,    -1,   109,    -1,    20,    -1,    21,    -1,    18,    -1,
      19,    -1,    22,    -1,    23,    -1,    17,    -1,    47,    -1,
      48,    -1,    36,    -1,    37,    -1,    38,    -1,    32,    -1,
      33,    -1,    49,    -1,    34,    -1,    50,    -1,    35,    -1,
      40,    -1,    41,    -1,    42,    -1,    44,    -1,    45,    -1,
      51,    -1,    52,    -1,    53,    -1,    54,    -1,    55,    -1,
      56,    -1,    66,    -1,    57,    -1,    39,    -1,    43,    -1,
      67,    -1,    68,    -1,    64,    -1,    65,    -1,    62,    -1,
      63,    -1,    18,    -1,    52,    18,    -1,    17,    -1,   111,
      18,    17,    -1,   111,    19,    17,    -1,    18,    17,    -1,
      19,    17,    -1,   113,    58,    -1,   114,    -1,   114,    64,
     115,    65,    -1,    69,    17,    -1,    69,    17,    62,    17,
      63,    -1,   116,    -1,   116,    58,   117,    -1,   117,    -1,
      17,    61,   118,    -1,   118,    -1,   118,    68,   119,    -1,
     119,    -1,    17,    -1,    70,    17,    -1,    20,    -1,    22,
      -1,    23,    -1,    18,    -1,    19,    -1,   111,    -1,    52,
      -1,    -1,    13,    48,   121,    -1,    -1,   122,    -1,    -1,
     122,   100,    -1,   100,    -1,    14,    48,   124,    -1,    -1,
     125,    -1,    -1,   125,   126,    -1,   126,    -1,    17,    61,
     119,    58,    -1,    58,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   132,   132,   136,   137,   141,   142,   143,   144,   145,
     146,   147,   149,   151,   153,   155,   157,   165,   173,   174,
     181,   193,   202,   209,   216,   227,   236,   245,   258,   257,
     267,   266,   279,   280,   284,   285,   289,   295,   308,   313,
     318,   323,   328,   334,   344,   350,   360,   366,   376,   382,
     392,   399,   400,   404,   405,   406,   407,   415,   414,   427,
     426,   440,   442,   444,   446,   449,   453,   454,   456,   457,
     458,   459,   461,   462,   463,   464,   466,   467,   468,   473,
     478,   483,   487,   491,   495,   499,   503,   508,   509,   513,
     514,   515,   516,   517,   518,   519,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   521,   521,   521,
     521,   521,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   523,   523,   523,   523,   523,   523,   527,   528,
     529,   533,   534,   535,   536,   543,   551,   552,   556,   561,
     570,   574,   575,   579,   588,   600,   602,   607,   609,   611,
     613,   615,   617,   619,   621,   623,   626,   637,   640,   644,
     645,   649,   650,   657,   660,   664,   665,   669,   670,   674,
     685,   685
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAMESPACE", "CPLUSPLUS",
  "CPLUSPLUSBODY", "MESSAGE", "PACKET", "CLASS", "STRUCT", "ENUM",
  "NONCOBJECT", "EXTENDS", "FIELDS", "PROPERTIES", "ABSTRACT", "READONLY",
  "NAME", "INTCONSTANT", "REALCONSTANT", "STRINGCONSTANT", "CHARCONSTANT",
  "TRUE_", "FALSE_", "BOOLTYPE", "CHARTYPE", "SHORTTYPE", "INTTYPE",
  "LONGTYPE", "DOUBLETYPE", "UNSIGNED_", "STRINGTYPE", "EQ", "NE", "GE",
  "LE", "AND", "OR", "XOR", "NOT", "BIN_AND", "BIN_OR", "BIN_XOR",
  "BIN_COMPL", "SHIFT_LEFT", "SHIFT_RIGHT", "INVALID_CHAR", "'?'", "':'",
  "'>'", "'<'", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "UMIN", "';'",
  "'{'", "'}'", "'='", "'['", "']'", "'('", "')'", "'&'", "'.'", "','",
  "'@'", "'$'", "$accept", "msgfile", "definitions", "definition",
  "namespace_decl", "namespacename", "cplusplus", "struct_decl",
  "class_decl", "message_decl", "packet_decl", "enum_decl", "enum", "@1",
  "@2", "opt_enumfields", "enumfields", "enumfield", "message", "packet",
  "class", "struct", "message_header", "packet_header", "class_header",
  "struct_header", "body", "opt_fields_and_properties",
  "fields_and_properties", "field", "@3", "@4", "fieldmodifiers",
  "fielddatatype", "opt_fieldvector", "opt_fieldenum", "opt_fieldvalue",
  "fieldvalue", "fieldvalueitem", "enumvalue", "quantity", "property",
  "property_namevalue", "property_name", "opt_property_keys",
  "property_keys", "property_key", "property_values", "property_value",
  "opt_fieldsblock_old", "opt_fields_old", "fields_old",
  "opt_propertiesblock_old", "opt_properties_old", "properties_old",
  "property_old", "opt_semicolon", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,    63,    58,    62,
      60,    43,    45,    42,    47,    37,    94,   302,    59,   123,
     125,    61,    91,    93,    40,    41,    38,    46,    44,    64,
      36
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    73,    73,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    75,    76,    76,
      77,    78,    79,    79,    79,    80,    81,    82,    84,    83,
      85,    83,    86,    86,    87,    87,    88,    88,    89,    90,
      91,    92,    93,    93,    94,    94,    95,    95,    96,    96,
      97,    98,    98,    99,    99,    99,    99,   101,   100,   102,
     100,   103,   103,   103,   103,   103,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   105,
     105,   105,   105,   106,   106,   107,   107,   108,   108,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   110,   110,
     110,   111,   111,   111,   111,   112,   113,   113,   114,   114,
     115,   116,   116,   117,   117,   118,   118,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   120,   120,   121,
     121,   122,   122,   123,   123,   124,   124,   125,   125,   126,
     127,   127
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     1,
       3,     3,     3,     4,     5,     3,     3,     3,     0,     7,
       0,     9,     1,     0,     2,     1,     2,     4,     2,     2,
       2,     2,     3,     5,     3,     5,     3,     5,     3,     5,
       5,     1,     0,     2,     2,     1,     1,     0,     8,     0,
       7,     1,     1,     2,     2,     0,     1,     2,     1,     1,
       1,     1,     2,     2,     2,     2,     1,     1,     1,     3,
       3,     2,     0,     4,     0,     2,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     3,     3,     2,     2,     2,     1,     4,     2,     5,
       1,     3,     1,     3,     1,     3,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     0,     3,     0,     1,
       0,     2,     1,     3,     0,     1,     0,     2,     1,     4,
       1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,     0,     0,     0,     0,     0,     0,
       0,     3,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    65,    65,    65,    65,    19,     0,
     171,     0,     0,     0,     0,     0,     0,    61,    62,     0,
      38,   164,    65,    55,     0,    56,     0,   136,    39,    40,
      41,     0,    17,   170,    20,     0,    25,    42,     0,    26,
      44,     0,     0,    22,    46,     0,    21,    48,     0,    27,
      28,    63,    64,   138,     0,   158,    53,    54,    59,    78,
      68,    69,    70,    71,    76,     0,    77,     0,   135,   156,
       0,     0,     0,    23,     0,     0,     0,    33,     0,   166,
       0,     0,    67,    82,    72,    73,    74,    75,    57,   147,
     152,   153,   149,   150,   151,   155,     0,   154,     0,   140,
     142,   144,   146,    18,    43,    45,    24,    47,    49,    30,
       0,     0,    32,    35,     0,     0,   163,   165,   168,    65,
     171,     0,    84,    82,   156,   133,   134,   148,     0,     0,
     137,   156,   156,    33,    36,     0,   171,    34,   139,   156,
     167,   162,   157,    65,    50,     0,     0,    81,     0,    86,
      84,   147,   143,   131,   132,   141,   145,     0,   130,   128,
       0,     0,    29,     0,   161,    80,    79,     0,     0,     0,
      86,   171,   129,    37,   169,     0,    95,    91,    92,    89,
      90,    93,    94,   101,   102,   104,   106,    98,    99,   100,
     120,   107,   108,   109,   121,   110,   111,    96,    97,   103,
     105,   112,   113,   114,   115,   116,   117,   119,   126,   127,
     124,   125,   118,   122,   123,    85,    88,    60,     0,    31,
      83,    87,    58
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    11,    12,    29,    13,    14,    15,    16,
      17,    18,    19,    97,   153,   131,   132,   133,    20,    21,
      22,    23,    24,    25,    26,    27,    40,    41,    42,    43,
     143,   103,    44,    87,   142,   169,   189,   235,   236,   181,
     117,    45,    46,    47,   118,   119,   120,   121,   122,   101,
     162,   163,    75,   136,   137,   138,    54
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -132
static const yytype_int16 yypact[] =
{
    -132,    29,   156,  -132,    25,    26,    27,    32,    30,    34,
      45,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,   -12,   -12,   -12,   -12,  -132,   -31,
      -2,    10,    14,    53,    16,    18,    20,    66,    75,    76,
    -132,    78,    -8,  -132,    74,  -132,    36,    31,  -132,  -132,
    -132,    48,  -132,  -132,  -132,    89,  -132,  -132,    97,  -132,
    -132,    57,    99,  -132,  -132,   100,  -132,  -132,   101,  -132,
    -132,  -132,  -132,    58,    71,   123,  -132,  -132,    -3,  -132,
    -132,  -132,  -132,  -132,  -132,    39,  -132,   131,  -132,    -7,
     132,    91,    92,  -132,     0,   102,   108,   151,   152,   153,
     124,   111,  -132,   112,  -132,  -132,  -132,  -132,  -132,   114,
     159,   160,  -132,  -132,  -132,  -132,   161,    69,   115,   121,
    -132,   105,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
     -15,   122,   151,  -132,   118,   125,  -132,   153,  -132,    21,
      -2,    17,   173,   112,     1,  -132,  -132,  -132,   167,   168,
    -132,    -7,     1,   151,  -132,    37,    -2,  -132,  -132,     1,
    -132,  -132,  -132,    23,  -132,   126,   127,  -132,   128,   130,
     173,  -132,   105,  -132,  -132,  -132,  -132,   133,  -132,  -132,
     169,   136,  -132,   137,  -132,  -132,  -132,   171,    90,   138,
     130,    -2,  -132,  -132,  -132,   134,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,    90,  -132,  -132,   139,  -132,
    -132,  -132,  -132
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,    47,  -132,    70,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,    59,  -132,  -132,   -42,
    -132,  -132,  -132,  -132,    55,    33,    11,  -132,   -30,  -132,
    -132,   162,  -132,  -132,  -132,  -132,    56,    62,  -119,  -132,
    -132,  -132,  -132,  -132,  -132,    72,  -131
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -161
static const yytype_int16 yytable[] =
{
      76,   -52,   -52,    37,    38,   -51,   -51,    37,    38,   164,
     109,   110,   111,   112,   -66,   113,   114,    51,   171,   110,
     111,   112,    55,   113,   114,   182,    58,    52,    62,     3,
      65,    30,    68,   176,   165,   166,    37,    38,    37,    38,
     183,    33,    28,   154,    31,   115,   155,    34,   -52,    32,
     102,    35,   -51,   115,   178,   179,    53,    39,   126,   127,
     239,    39,    36,   116,   104,   105,   106,   107,    56,    57,
      61,   116,    59,    60,    63,    64,    66,    67,    69,    70,
     167,  -160,    71,  -159,    48,    49,    50,   148,   149,   180,
      72,    78,    74,    73,    88,    89,    90,   161,    79,    80,
      81,    82,    83,    84,    85,    86,    91,   196,   197,   198,
     199,   200,   201,   202,    92,    93,    94,    95,    96,    99,
      98,   184,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   100,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   108,   123,
     124,   125,   228,   229,   230,   231,   232,   233,   234,     4,
       5,   128,     6,     7,     8,     9,    10,   129,   130,   134,
     135,   140,   139,   152,   141,   144,   145,   146,   147,   151,
     150,   158,   156,   168,   173,   174,   159,   192,   195,   185,
     186,   188,   187,   191,   193,   194,   237,   242,   170,   240,
     177,   238,   157,   190,    77,   241,   172,   175,     0,   160
};

static const yytype_int16 yycheck[] =
{
      42,    13,    14,    15,    16,    13,    14,    15,    16,   140,
      17,    18,    19,    20,    17,    22,    23,    48,    17,    18,
      19,    20,    12,    22,    23,   156,    12,    58,    12,     0,
      12,     5,    12,   152,    17,    18,    15,    16,    15,    16,
     159,    11,    17,    58,    17,    52,    61,    17,    60,    17,
      53,    17,    60,    52,    17,    18,    58,    69,    58,    59,
     191,    69,    17,    70,    25,    26,    27,    28,    58,    59,
      17,    70,    58,    59,    58,    59,    58,    59,    58,    59,
      63,    60,    16,    60,    25,    26,    27,    18,    19,    52,
      15,    17,    14,    17,    58,    64,    48,   139,    24,    25,
      26,    27,    28,    29,    30,    31,    17,    17,    18,    19,
      20,    21,    22,    23,    17,    58,    17,    17,    17,    48,
      62,   163,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    13,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    17,    17,
      59,    59,    62,    63,    64,    65,    66,    67,    68,     3,
       4,    59,     6,     7,     8,     9,    10,    59,    17,    17,
      17,    60,    48,    68,    62,    61,    17,    17,    17,    58,
      65,    63,    60,    10,    17,    17,    61,    18,    17,    63,
      63,    61,    64,    60,    58,    58,    58,    58,   143,    65,
     153,   190,   132,   170,    42,   235,   144,   151,    -1,   137
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    72,    73,     0,     3,     4,     6,     7,     8,     9,
      10,    74,    75,    77,    78,    79,    80,    81,    82,    83,
      89,    90,    91,    92,    93,    94,    95,    96,    17,    76,
       5,    17,    17,    11,    17,    17,    17,    15,    16,    69,
      97,    98,    99,   100,   103,   112,   113,   114,    97,    97,
      97,    48,    58,    58,   127,    12,    58,    59,    12,    58,
      59,    17,    12,    58,    59,    12,    58,    59,    12,    58,
      59,    16,    15,    17,    14,   123,   100,   112,    17,    24,
      25,    26,    27,    28,    29,    30,    31,   104,    58,    64,
      48,    17,    17,    58,    17,    17,    17,    84,    62,    48,
      13,   120,    53,   102,    25,    26,    27,    28,    17,    17,
      18,    19,    20,    22,    23,    52,    70,   111,   115,   116,
     117,   118,   119,    17,    59,    59,    58,    59,    59,    59,
      17,    86,    87,    88,    17,    17,   124,   125,   126,    48,
      60,    62,   105,   101,    61,    17,    17,    17,    18,    19,
      65,    58,    68,    85,    58,    61,    60,    88,    63,    61,
     126,   100,   121,   122,   127,    17,    18,    63,    10,   106,
     105,    17,   118,    17,    17,   117,   119,    86,    17,    18,
      52,   110,   127,   119,   100,    63,    63,    64,    61,   107,
     106,    60,    18,    58,    58,    17,    17,    18,    19,    20,
      21,    22,    23,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    62,    63,
      64,    65,    66,    67,    68,   108,   109,    58,   107,   127,
      65,   109,    58
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
# if YYLTYPE_IS_TRIVIAL
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

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
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;



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

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

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
  yylsp = yyls;
#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 12:
#line 150 "msg2.y"
    { if (np->getStoreSourceFlag()) ps.enump->setSourceCode(toString((yylsp[(1) - (1)]))); }
    break;

  case 13:
#line 152 "msg2.y"
    { if (np->getStoreSourceFlag()) ps.messagep->setSourceCode(toString((yylsp[(1) - (1)]))); }
    break;

  case 14:
#line 154 "msg2.y"
    { if (np->getStoreSourceFlag()) ps.packetp->setSourceCode(toString((yylsp[(1) - (1)]))); }
    break;

  case 15:
#line 156 "msg2.y"
    { if (np->getStoreSourceFlag()) ps.classp->setSourceCode(toString((yylsp[(1) - (1)]))); }
    break;

  case 16:
#line 158 "msg2.y"
    { if (np->getStoreSourceFlag()) ps.structp->setSourceCode(toString((yylsp[(1) - (1)]))); }
    break;

  case 17:
#line 166 "msg2.y"
    {
                  ps.namespacedecl = (NamespaceElement *)createElementWithTag(NED_NAMESPACE, ps.msgfile );
                  ps.namespacedecl->setName(toString((yylsp[(2) - (3)])));
                  storeBannerAndRightComments(ps.namespacedecl,(yylsp[(1) - (3)]),(yylsp[(2) - (3)]));
                }
    break;

  case 20:
#line 182 "msg2.y"
    {
                  ps.cplusplus = (CplusplusElement *)createElementWithTag(NED_CPLUSPLUS, ps.msgfile );
                  ps.cplusplus->setBody(toString(trimDoubleBraces((yylsp[(2) - (3)]))));
                  storeBannerAndRightComments(ps.cplusplus,(yylsp[(1) - (3)]),(yylsp[(2) - (3)]));
                }
    break;

  case 21:
#line 194 "msg2.y"
    {
                  ps.structdecl = (StructDeclElement *)createElementWithTag(NED_STRUCT_DECL, ps.msgfile );
                  ps.structdecl->setName(toString((yylsp[(2) - (3)])));
                  storeBannerAndRightComments(ps.structdecl,(yylsp[(1) - (3)]),(yylsp[(2) - (3)]));
                }
    break;

  case 22:
#line 203 "msg2.y"
    {
                  ps.classdecl = (ClassDeclElement *)createElementWithTag(NED_CLASS_DECL, ps.msgfile );
                  ps.classdecl->setName(toString((yylsp[(2) - (3)])));
                  ps.classdecl->setIsCobject(true);
                  storeBannerAndRightComments(ps.classdecl,(yylsp[(1) - (3)]),(yylsp[(2) - (3)]));
                }
    break;

  case 23:
#line 210 "msg2.y"
    {
                  ps.classdecl = (ClassDeclElement *)createElementWithTag(NED_CLASS_DECL, ps.msgfile );
                  ps.classdecl->setIsCobject(false);
                  ps.classdecl->setName(toString((yylsp[(3) - (4)])));
                  storeBannerAndRightComments(ps.classdecl,(yylsp[(1) - (4)]),(yylsp[(3) - (4)]));
                }
    break;

  case 24:
#line 217 "msg2.y"
    {
                  ps.classdecl = (ClassDeclElement *)createElementWithTag(NED_CLASS_DECL, ps.msgfile );
                  ps.classdecl->setIsCobject(true);
                  ps.classdecl->setName(toString((yylsp[(2) - (5)])));
                  ps.classdecl->setExtendsName(toString((yylsp[(4) - (5)])));
                  storeBannerAndRightComments(ps.classdecl,(yylsp[(1) - (5)]),(yylsp[(4) - (5)]));
                }
    break;

  case 25:
#line 228 "msg2.y"
    {
                  ps.messagedecl = (MessageDeclElement *)createElementWithTag(NED_MESSAGE_DECL, ps.msgfile );
                  ps.messagedecl->setName(toString((yylsp[(2) - (3)])));
                  storeBannerAndRightComments(ps.messagedecl,(yylsp[(1) - (3)]),(yylsp[(2) - (3)]));
                }
    break;

  case 26:
#line 237 "msg2.y"
    {
                  ps.packetdecl = (PacketDeclElement *)createElementWithTag(NED_PACKET_DECL, ps.msgfile );
                  ps.packetdecl->setName(toString((yylsp[(2) - (3)])));
                  storeBannerAndRightComments(ps.packetdecl,(yylsp[(1) - (3)]),(yylsp[(2) - (3)]));
                }
    break;

  case 27:
#line 246 "msg2.y"
    {
                  ps.enumdecl = (EnumDeclElement *)createElementWithTag(NED_ENUM_DECL, ps.msgfile );
                  ps.enumdecl->setName(toString((yylsp[(2) - (3)])));
                  storeBannerAndRightComments(ps.enumdecl,(yylsp[(1) - (3)]),(yylsp[(2) - (3)]));
                }
    break;

  case 28:
#line 258 "msg2.y"
    {
                  ps.enump = (EnumElement *)createElementWithTag(NED_ENUM, ps.msgfile );
                  ps.enump->setName(toString((yylsp[(2) - (3)])));
                  storeBannerAndRightComments(ps.enump,(yylsp[(1) - (3)]),(yylsp[(2) - (3)]));
                  ps.enumfields = (EnumFieldsElement *)createElementWithTag(NED_ENUM_FIELDS, ps.enump);
                }
    break;

  case 29:
#line 265 "msg2.y"
    { storeTrailingComment(ps.enump,(yyloc)); }
    break;

  case 30:
#line 267 "msg2.y"
    {
                  ps.enump = (EnumElement *)createElementWithTag(NED_ENUM, ps.msgfile );
                  ps.enump->setName(toString((yylsp[(2) - (5)])));
                  ps.enump->setExtendsName(toString((yylsp[(4) - (5)])));
                  storeBannerAndRightComments(ps.enump,(yylsp[(1) - (5)]),(yylsp[(4) - (5)]));
                  ps.enumfields = (EnumFieldsElement *)createElementWithTag(NED_ENUM_FIELDS, ps.enump);
                }
    break;

  case 31:
#line 275 "msg2.y"
    { storeTrailingComment(ps.enump,(yyloc)); }
    break;

  case 36:
#line 290 "msg2.y"
    {
                  ps.enumfield = (EnumFieldElement *)createElementWithTag(NED_ENUM_FIELD, ps.enumfields);
                  ps.enumfield->setName(toString((yylsp[(1) - (2)])));
                  storeBannerAndRightComments(ps.enumfield,(yylsp[(1) - (2)]),(yylsp[(1) - (2)]));
                }
    break;

  case 37:
#line 296 "msg2.y"
    {
                  ps.enumfield = (EnumFieldElement *)createElementWithTag(NED_ENUM_FIELD, ps.enumfields);
                  ps.enumfield->setName(toString((yylsp[(1) - (4)])));
                  ps.enumfield->setValue(toString((yylsp[(3) - (4)])));
                  storeBannerAndRightComments(ps.enumfield,(yylsp[(1) - (4)]),(yylsp[(3) - (4)]));
                }
    break;

  case 38:
#line 309 "msg2.y"
    { storeTrailingComment(ps.messagep,(yyloc)); }
    break;

  case 39:
#line 314 "msg2.y"
    { storeTrailingComment(ps.packetp,(yyloc)); }
    break;

  case 40:
#line 319 "msg2.y"
    { storeTrailingComment(ps.classp,(yyloc)); }
    break;

  case 41:
#line 324 "msg2.y"
    { storeTrailingComment(ps.structp,(yyloc)); }
    break;

  case 42:
#line 329 "msg2.y"
    {
                  ps.msgclassorstruct = ps.messagep = (MessageElement *)createElementWithTag(NED_MESSAGE, ps.msgfile );
                  ps.messagep->setName(toString((yylsp[(2) - (3)])));
                  storeBannerAndRightComments(ps.messagep,(yylsp[(1) - (3)]),(yylsp[(2) - (3)]));
                }
    break;

  case 43:
#line 335 "msg2.y"
    {
                  ps.msgclassorstruct = ps.messagep = (MessageElement *)createElementWithTag(NED_MESSAGE, ps.msgfile );
                  ps.messagep->setName(toString((yylsp[(2) - (5)])));
                  ps.messagep->setExtendsName(toString((yylsp[(4) - (5)])));
                  storeBannerAndRightComments(ps.messagep,(yylsp[(1) - (5)]),(yylsp[(4) - (5)]));
                }
    break;

  case 44:
#line 345 "msg2.y"
    {
                  ps.msgclassorstruct = ps.packetp = (PacketElement *)createElementWithTag(NED_PACKET, ps.msgfile );
                  ps.packetp->setName(toString((yylsp[(2) - (3)])));
                  storeBannerAndRightComments(ps.packetp,(yylsp[(1) - (3)]),(yylsp[(2) - (3)]));
                }
    break;

  case 45:
#line 351 "msg2.y"
    {
                  ps.msgclassorstruct = ps.packetp = (PacketElement *)createElementWithTag(NED_PACKET, ps.msgfile );
                  ps.packetp->setName(toString((yylsp[(2) - (5)])));
                  ps.packetp->setExtendsName(toString((yylsp[(4) - (5)])));
                  storeBannerAndRightComments(ps.packetp,(yylsp[(1) - (5)]),(yylsp[(4) - (5)]));
                }
    break;

  case 46:
#line 361 "msg2.y"
    {
                  ps.msgclassorstruct = ps.classp = (ClassElement *)createElementWithTag(NED_CLASS, ps.msgfile );
                  ps.classp->setName(toString((yylsp[(2) - (3)])));
                  storeBannerAndRightComments(ps.classp,(yylsp[(1) - (3)]),(yylsp[(2) - (3)]));
                }
    break;

  case 47:
#line 367 "msg2.y"
    {
                  ps.msgclassorstruct = ps.classp = (ClassElement *)createElementWithTag(NED_CLASS, ps.msgfile );
                  ps.classp->setName(toString((yylsp[(2) - (5)])));
                  ps.classp->setExtendsName(toString((yylsp[(4) - (5)])));
                  storeBannerAndRightComments(ps.classp,(yylsp[(1) - (5)]),(yylsp[(4) - (5)]));
                }
    break;

  case 48:
#line 377 "msg2.y"
    {
                  ps.msgclassorstruct = ps.structp = (StructElement *)createElementWithTag(NED_STRUCT, ps.msgfile );
                  ps.structp->setName(toString((yylsp[(2) - (3)])));
                  storeBannerAndRightComments(ps.structp,(yylsp[(1) - (3)]),(yylsp[(2) - (3)]));
                }
    break;

  case 49:
#line 383 "msg2.y"
    {
                  ps.msgclassorstruct = ps.structp = (StructElement *)createElementWithTag(NED_STRUCT, ps.msgfile );
                  ps.structp->setName(toString((yylsp[(2) - (5)])));
                  ps.structp->setExtendsName(toString((yylsp[(4) - (5)])));
                  storeBannerAndRightComments(ps.structp,(yylsp[(1) - (5)]),(yylsp[(4) - (5)]));
                }
    break;

  case 57:
#line 415 "msg2.y"
    {
                  ps.field = (FieldElement *)createElementWithTag(NED_FIELD, ps.msgclassorstruct);
                  ps.field->setName(toString((yylsp[(3) - (3)])));
                  ps.field->setDataType(toString((yylsp[(2) - (3)])));
                  ps.field->setIsAbstract(ps.isAbstract);
                  ps.field->setIsReadonly(ps.isReadonly);
                }
    break;

  case 58:
#line 423 "msg2.y"
    {
                  storeBannerAndRightComments(ps.field,(yylsp[(1) - (8)]),(yylsp[(7) - (8)]));
                }
    break;

  case 59:
#line 427 "msg2.y"
    {
                  ps.field = (FieldElement *)createElementWithTag(NED_FIELD, ps.msgclassorstruct);
                  ps.field->setName(toString((yylsp[(2) - (2)])));
                  ps.field->setIsAbstract(ps.isAbstract);
                  ps.field->setIsReadonly(ps.isReadonly);
                }
    break;

  case 60:
#line 434 "msg2.y"
    {
                  storeBannerAndRightComments(ps.field,(yylsp[(1) - (7)]),(yylsp[(6) - (7)]));
                }
    break;

  case 61:
#line 441 "msg2.y"
    { ps.isAbstract = true; ps.isReadonly = false; }
    break;

  case 62:
#line 443 "msg2.y"
    { ps.isAbstract = false; ps.isReadonly = true; }
    break;

  case 63:
#line 445 "msg2.y"
    { ps.isAbstract = true; ps.isReadonly = true; }
    break;

  case 64:
#line 447 "msg2.y"
    { ps.isAbstract = true; ps.isReadonly = true; }
    break;

  case 65:
#line 449 "msg2.y"
    { ps.isAbstract = false; ps.isReadonly = false; }
    break;

  case 79:
#line 474 "msg2.y"
    {
                  ps.field->setIsVector(true);
                  ps.field->setVectorSize(toString((yylsp[(2) - (3)])));
                }
    break;

  case 80:
#line 479 "msg2.y"
    {
                  ps.field->setIsVector(true);
                  ps.field->setVectorSize(toString((yylsp[(2) - (3)])));
                }
    break;

  case 81:
#line 484 "msg2.y"
    {
                  ps.field->setIsVector(true);
                }
    break;

  case 83:
#line 492 "msg2.y"
    {
                  ps.field->setEnumName(toString((yylsp[(3) - (4)])));
                }
    break;

  case 85:
#line 500 "msg2.y"
    {
                  ps.field->setDefaultValue(toString((yylsp[(2) - (2)])));
                }
    break;

  case 135:
#line 544 "msg2.y"
    {
                  storePos(ps.property, (yyloc));
                  storeBannerAndRightComments(ps.property,(yyloc));
                }
    break;

  case 138:
#line 557 "msg2.y"
    {
                  ps.property = addProperty(ps.msgclassorstruct, toString((yylsp[(2) - (2)])));
                  ps.propvals.clear(); // just to be safe
                }
    break;

  case 139:
#line 562 "msg2.y"
    {
                  ps.property = addProperty(ps.msgclassorstruct, toString((yylsp[(2) - (5)])));
                  ps.property->setIndex(toString((yylsp[(4) - (5)])));
                  ps.propvals.clear(); // just to be safe
                }
    break;

  case 143:
#line 580 "msg2.y"
    {
                  ps.propkey = (PropertyKeyElement *)createElementWithTag(NED_PROPERTY_KEY, ps.property);
                  ps.propkey->setName(toString((yylsp[(1) - (3)])));
                  for (int i=0; i<(int)ps.propvals.size(); i++)
                      ps.propkey->appendChild(ps.propvals[i]);
                  ps.propvals.clear();
                  storePos(ps.propkey, (yyloc));
                }
    break;

  case 144:
#line 589 "msg2.y"
    {
                  ps.propkey = (PropertyKeyElement *)createElementWithTag(NED_PROPERTY_KEY, ps.property);
                  ps.propkey->appendChild((yyvsp[(1) - (1)]));
                  for (int i=0; i<(int)ps.propvals.size(); i++)
                      ps.propkey->appendChild(ps.propvals[i]);
                  ps.propvals.clear();
                  storePos(ps.propkey, (yyloc));
                }
    break;

  case 145:
#line 601 "msg2.y"
    { ps.propvals.push_back((yyvsp[(3) - (3)])); }
    break;

  case 146:
#line 603 "msg2.y"
    { ps.propvals.push_back((yyvsp[(1) - (1)])); }
    break;

  case 147:
#line 608 "msg2.y"
    { (yyval) = createLiteral(NED_CONST_STRING, (yylsp[(1) - (1)]), (yylsp[(1) - (1)])); /* not a quoted string */ }
    break;

  case 148:
#line 610 "msg2.y"
    { (yyval) = createLiteral(NED_CONST_STRING, (yyloc), (yyloc)); /* not a quoted string */ }
    break;

  case 149:
#line 612 "msg2.y"
    { (yyval) = createStringLiteral((yylsp[(1) - (1)])); }
    break;

  case 150:
#line 614 "msg2.y"
    { (yyval) = createLiteral(NED_CONST_BOOL, (yylsp[(1) - (1)]), (yylsp[(1) - (1)])); }
    break;

  case 151:
#line 616 "msg2.y"
    { (yyval) = createLiteral(NED_CONST_BOOL, (yylsp[(1) - (1)]), (yylsp[(1) - (1)])); }
    break;

  case 152:
#line 618 "msg2.y"
    { (yyval) = createLiteral(NED_CONST_INT, (yylsp[(1) - (1)]), (yylsp[(1) - (1)])); }
    break;

  case 153:
#line 620 "msg2.y"
    { (yyval) = createLiteral(NED_CONST_DOUBLE, (yylsp[(1) - (1)]), (yylsp[(1) - (1)])); }
    break;

  case 154:
#line 622 "msg2.y"
    { (yyval) = createQuantityLiteral((yylsp[(1) - (1)])); }
    break;

  case 155:
#line 624 "msg2.y"
    { (yyval) = createLiteral(NED_CONST_SPEC, (yylsp[(1) - (1)]), (yylsp[(1) - (1)])); }
    break;

  case 156:
#line 626 "msg2.y"
    {
                  LiteralElement *node = (LiteralElement *)createElementWithTag(NED_LITERAL);
                  node->setType(NED_CONST_SPEC); // and leave both value and text at ""
                  (yyval) = node;
                }
    break;

  case 157:
#line 639 "msg2.y"
    { ps.msgfile->setVersion("1"); }
    break;

  case 163:
#line 659 "msg2.y"
    { ps.msgfile->setVersion("1"); }
    break;

  case 169:
#line 675 "msg2.y"
    {
                  ps.property = addProperty(ps.msgclassorstruct, toString((yylsp[(1) - (4)])));
                  ps.propkey = (PropertyKeyElement *)createElementWithTag(NED_PROPERTY_KEY, ps.property);
                  ps.propkey->appendChild((yyvsp[(3) - (4)]));
                  storePos(ps.propkey, (yylsp[(2) - (4)]));
                  storePos(ps.property, (yyloc));
                  storeBannerAndRightComments(ps.property,(yyloc));
                }
    break;


/* Line 1267 of yacc.c.  */
#line 2259 "msg2.tab.cc"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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

  yyerror_range[0] = yylloc;

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
		      yytoken, &yylval, &yylloc);
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

  yyerror_range[0] = yylsp[1-yylen];
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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


#line 687 "msg2.y"


//----------------------------------------------------------------------
// general bison/flex stuff:
//

NEDElement *doParseMSG2(NEDParser *p, const char *nedtext)
{
#if YYDEBUG != 0      /* #if added --VA */
    yydebug = YYDEBUGGING_ON;
#endif

    NONREENTRANT_NED_PARSER(p);

    // reset the lexer
    pos.co = 0;
    pos.li = 1;
    prevpos = pos;

    yyin = NULL;
    yyout = stderr; // not used anyway

    // alloc buffer
    struct yy_buffer_state *handle = yy_scan_string(nedtext);
    if (!handle)
    {
		np->getErrors()->addError("", "unable to allocate work memory"); 
		//return false;
		return 0;
	}

    // create parser state and NEDFileElement
    resetParserState();
    ps.msgfile = new MsgFileElement();

    // store file name with slashes always, even on Windows -- neddoc relies on that
    ps.msgfile->setFilename(slashifyFilename(np->getFileName()).c_str());

    // store file comment
    storeFileComment(ps.msgfile);

    if (np->getStoreSourceFlag())
        storeSourceCode(ps.msgfile, np->getSource()->getFullTextPos());

    // parse
    int ret;
    try
    {
        ret = yyparse();
    }
    catch (NEDException& e)
    {
        yyerror((std::string("error during parsing: ")+e.what()).c_str());
        yy_delete_buffer(handle);
        return 0;
    }

    yy_delete_buffer(handle);

    //FIXME TODO: fill in @documentation properties from comments
    return ps.msgfile;
}

void yyerror(const char *s)
{
    // chop newline
    char buf[250];
    strcpy(buf, s);
    if (buf[strlen(buf)-1] == '\n')
        buf[strlen(buf)-1] = '\0';

    np->error(buf, pos.li);
}


