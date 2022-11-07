/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison GLR parsers in C

   Copyright (C) 2002, 2003, 2004, 2005, 2006 Free Software Foundation, Inc.

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

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 1


/* Substitute the variable and function names.  */
#define yyparse ned2yyparse
#define yylex   ned2yylex
#define yyerror ned2yyerror
#define yylval  ned2yylval
#define yychar  ned2yychar
#define yydebug ned2yydebug
#define yynerrs ned2yynerrs
#define yylloc  ned2yylloc



#include "ned2.tab.hh"

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

/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template,
   here we set the default value of $$ to a zeroed-out value.
   Since the default value is undefined, this behavior is
   technically correct.  */
static YYSTYPE yyval_default;

/* Copy the second part of user declarations.  */


/* Line 234 of glr.c.  */
#line 97 "ned2.tab.cc"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

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

#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#define YYSIZEMAX ((size_t) -1)

#ifdef __cplusplus
   typedef bool yybool;
#else
   typedef unsigned char yybool;
#endif
#define yytrue 1
#define yyfalse 0

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(env) setjmp (env)
# define YYLONGJMP(env, val) longjmp (env, val)
#endif

/*-----------------.
| GCC extensions.  |
`-----------------*/

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5) || __STRICT_ANSI__)
#  define __attribute__(Spec) /* empty */
# endif
#endif

#define YYOPTIONAL_LOC(Name) Name

#ifndef YYASSERT
# define YYASSERT(condition) ((void) ((condition) || (abort (), 0)))
#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  86
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1785

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  137
/* YYNRULES -- Number of rules.  */
#define YYNRULES  396
/* YYNRULES -- Number of states.  */
#define YYNSTATES  637
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 22
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   322

#define YYTRANSLATE(YYX)						\
  ((YYX <= 0) ? YYEOF :							\
   (unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    89,    75,     2,     2,
      81,    82,    73,    71,    87,    72,    80,    74,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    68,    78,
      70,    88,    69,    67,    83,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    84,     2,    85,    76,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,     2,    79,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    77
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     6,     8,    10,    11,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      42,    46,    50,    54,    58,    62,    66,    70,    74,    78,
      82,    86,    90,    94,    96,   100,   104,   106,   109,   112,
     115,   117,   119,   121,   125,   132,   136,   142,   144,   145,
     149,   151,   153,   156,   157,   163,   164,   169,   170,   173,
     176,   181,   183,   187,   189,   191,   192,   198,   199,   204,
     207,   208,   212,   214,   215,   222,   223,   228,   229,   239,
     240,   245,   246,   256,   257,   262,   263,   270,   271,   276,
     278,   279,   284,   286,   287,   290,   292,   294,   296,   298,
     300,   304,   311,   315,   317,   323,   325,   327,   329,   331,
     333,   335,   336,   338,   343,   345,   347,   349,   350,   353,
     355,   358,   360,   362,   364,   366,   368,   370,   372,   374,
     378,   382,   384,   386,   388,   390,   392,   394,   396,   398,
     400,   402,   404,   406,   408,   410,   412,   414,   416,   418,
     420,   422,   424,   426,   428,   430,   432,   434,   436,   438,
     440,   442,   444,   446,   448,   450,   452,   454,   457,   459,
     464,   467,   473,   475,   479,   481,   485,   487,   491,   493,
     495,   497,   498,   501,   503,   505,   507,   509,   511,   513,
     515,   517,   519,   521,   523,   525,   527,   529,   531,   533,
     535,   537,   539,   541,   543,   545,   547,   549,   551,   553,
     555,   557,   559,   561,   563,   565,   567,   569,   571,   573,
     574,   575,   580,   582,   583,   586,   588,   589,   594,   597,
     602,   606,   608,   612,   615,   617,   619,   621,   623,   624,
     625,   630,   632,   633,   636,   638,   640,   642,   644,   646,
     648,   650,   652,   654,   656,   657,   658,   663,   665,   666,
     669,   671,   674,   675,   683,   687,   693,   695,   698,   701,
     705,   707,   708,   709,   715,   716,   721,   723,   724,   727,
     729,   731,   735,   736,   743,   745,   746,   750,   752,   754,
     756,   763,   767,   773,   777,   783,   787,   793,   797,   799,
     802,   804,   807,   811,   815,   818,   822,   826,   830,   832,
     834,   837,   840,   844,   848,   851,   855,   859,   862,   863,
     865,   866,   872,   873,   875,   879,   882,   886,   888,   890,
     897,   902,   904,   908,   913,   917,   921,   925,   929,   933,
     937,   940,   944,   948,   952,   956,   960,   964,   968,   972,
     976,   979,   983,   987,   991,   994,   998,  1002,  1008,  1013,
    1018,  1023,  1027,  1032,  1039,  1048,  1059,  1072,  1087,  1104,
    1123,  1144,  1167,  1169,  1171,  1173,  1175,  1179,  1183,  1190,
    1192,  1196,  1201,  1203,  1205,  1207,  1209,  1211,  1213,  1215,
    1217,  1219,  1223,  1227,  1230,  1233,  1235
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const short int yyrhs[] =
{
      91,     0,    -1,    65,   215,    -1,    92,    -1,    93,    -1,
      -1,    93,    94,    -1,    94,    -1,    95,    -1,    97,    -1,
     100,    -1,   105,    -1,   106,    -1,   114,    -1,   120,    -1,
     124,    -1,   128,    -1,   132,    -1,    78,    -1,   116,     1,
      79,    -1,    11,     1,    79,    -1,   122,     1,    79,    -1,
       7,     1,    79,    -1,   126,     1,    79,    -1,     6,     1,
      79,    -1,   130,     1,    79,    -1,     8,     1,    79,    -1,
     134,     1,    79,    -1,    10,     1,    79,    -1,   108,     1,
      79,    -1,     9,     1,    79,    -1,     4,    96,    78,    -1,
      96,    80,    44,    -1,    44,    -1,     3,    98,    78,    -1,
      98,    80,    99,    -1,    99,    -1,    99,    44,    -1,    99,
      73,    -1,    99,    50,    -1,    44,    -1,    73,    -1,    50,
      -1,   101,   148,    78,    -1,   101,    81,   102,    82,   148,
      78,    -1,     5,    83,    44,    -1,     5,    83,    44,    84,
      85,    -1,   103,    -1,    -1,   103,    78,   104,    -1,   104,
      -1,    44,    -1,   153,    78,    -1,    -1,   108,    86,   107,
     136,    79,    -1,    -1,     9,    44,   109,   110,    -1,    -1,
      12,   111,    -1,    13,   112,    -1,    12,   111,    13,   112,
      -1,    96,    -1,   112,    87,   113,    -1,   113,    -1,    96,
      -1,    -1,   116,    86,   115,   136,    79,    -1,    -1,    11,
      44,   117,   118,    -1,    12,   119,    -1,    -1,   119,    87,
     111,    -1,   111,    -1,    -1,   122,    86,   121,   136,   162,
      79,    -1,    -1,     7,    44,   123,   110,    -1,    -1,   126,
      86,   125,   136,   162,   171,   177,   187,    79,    -1,    -1,
       6,    44,   127,   110,    -1,    -1,   130,    86,   129,   136,
     162,   171,   177,   187,    79,    -1,    -1,     8,    44,   131,
     110,    -1,    -1,   134,    86,   133,   136,   162,    79,    -1,
      -1,    10,    44,   135,   118,    -1,   138,    -1,    -1,    15,
      68,   137,   138,    -1,   139,    -1,    -1,   139,   140,    -1,
     140,    -1,   141,    -1,   152,    -1,   142,    -1,   144,    -1,
     143,   148,    78,    -1,   143,   148,    88,   147,   148,    78,
      -1,   146,   145,    44,    -1,    44,    -1,    74,   150,    74,
      88,   147,    -1,    20,    -1,    21,    -1,    22,    -1,    23,
      -1,    24,    -1,    25,    -1,    -1,   215,    -1,    38,    81,
     215,    82,    -1,    38,    -1,    39,    -1,   149,    -1,    -1,
     149,   153,    -1,   153,    -1,   150,   151,    -1,   151,    -1,
      80,    -1,    73,    -1,    67,    -1,    50,    -1,    44,    -1,
      45,    -1,    34,    -1,    84,   150,    85,    -1,    86,   150,
      79,    -1,     3,    -1,     4,    -1,     5,    -1,     6,    -1,
       7,    -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,
      12,    -1,    13,    -1,    20,    -1,    21,    -1,    22,    -1,
      23,    -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,
      28,    -1,    29,    -1,    30,    -1,    14,    -1,    15,    -1,
      16,    -1,    17,    -1,    18,    -1,    19,    -1,    35,    -1,
      36,    -1,    37,    -1,    38,    -1,    40,    -1,    41,    -1,
      42,    -1,    43,    -1,   153,    78,    -1,   154,    -1,   154,
      81,   155,    82,    -1,    83,    44,    -1,    83,    44,    84,
      44,    85,    -1,   156,    -1,   156,    78,   157,    -1,   157,
      -1,    44,    88,   158,    -1,   158,    -1,   158,    87,   159,
      -1,   159,    -1,   160,    -1,    47,    -1,    -1,   160,   161,
      -1,   161,    -1,    44,    -1,    45,    -1,    46,    -1,    35,
      -1,    36,    -1,    89,    -1,    83,    -1,    68,    -1,    88,
      -1,    84,    -1,    85,    -1,    86,    -1,    79,    -1,    80,
      -1,    67,    -1,    76,    -1,    71,    -1,    72,    -1,    73,
      -1,    74,    -1,    75,    -1,    70,    -1,    69,    -1,    51,
      -1,    52,    -1,    54,    -1,    53,    -1,    50,    -1,    34,
      -1,    49,    -1,    56,    -1,    55,    -1,    57,    -1,    58,
      -1,   163,    -1,    -1,    -1,    16,    68,   164,   165,    -1,
     166,    -1,    -1,   166,   167,    -1,   167,    -1,    -1,   169,
     168,   148,    78,    -1,   170,    44,    -1,   170,    44,    84,
      85,    -1,   170,    44,   214,    -1,    44,    -1,    44,    84,
      85,    -1,    44,   214,    -1,    26,    -1,    27,    -1,    28,
      -1,   172,    -1,    -1,    -1,    14,    68,   173,   174,    -1,
     175,    -1,    -1,   175,   176,    -1,   176,    -1,   100,    -1,
     106,    -1,   114,    -1,   120,    -1,   124,    -1,   128,    -1,
     132,    -1,    78,    -1,   178,    -1,    -1,    -1,    17,    68,
     179,   180,    -1,   181,    -1,    -1,   181,   182,    -1,   182,
      -1,   184,    78,    -1,    -1,   184,    86,   183,   136,   162,
      79,   226,    -1,   185,    68,    96,    -1,   185,    68,   186,
      13,    96,    -1,    44,    -1,    44,   214,    -1,    70,    69,
      -1,    70,   215,    69,    -1,   188,    -1,    -1,    -1,    18,
      19,    68,   189,   191,    -1,    -1,    18,    68,   190,   191,
      -1,   192,    -1,    -1,   192,   193,    -1,   193,    -1,   194,
      -1,   200,   196,    78,    -1,    -1,   196,    86,   195,   192,
      79,   226,    -1,   197,    -1,    -1,   197,    87,   198,    -1,
     198,    -1,   199,    -1,   213,    -1,    30,    44,    88,   215,
      34,   215,    -1,   201,    31,   205,    -1,   201,    31,   210,
      31,   205,    -1,   201,    32,   205,    -1,   201,    32,   210,
      32,   205,    -1,   201,    33,   205,    -1,   201,    33,   210,
      33,   205,    -1,   202,    80,   203,    -1,   204,    -1,    44,
     214,    -1,    44,    -1,    44,   209,    -1,    44,   209,   214,
      -1,    44,   209,    49,    -1,    44,   209,    -1,    44,   209,
     214,    -1,    44,   209,    49,    -1,   206,    80,   207,    -1,
     208,    -1,    44,    -1,    44,   214,    -1,    44,   209,    -1,
      44,   209,   214,    -1,    44,   209,    49,    -1,    44,   209,
      -1,    44,   209,   214,    -1,    44,   209,    49,    -1,    89,
      44,    -1,    -1,   212,    -1,    -1,   212,    86,   211,   136,
      79,    -1,    -1,    96,    -1,   186,    13,    96,    -1,    29,
     215,    -1,    84,   215,    85,    -1,   217,    -1,   216,    -1,
      43,    81,   222,    87,   222,    82,    -1,    43,    81,   222,
      82,    -1,   218,    -1,    81,   217,    82,    -1,    40,    81,
     217,    82,    -1,   217,    71,   217,    -1,   217,    72,   217,
      -1,   217,    73,   217,    -1,   217,    74,   217,    -1,   217,
      75,   217,    -1,   217,    76,   217,    -1,    72,   217,    -1,
     217,    51,   217,    -1,   217,    52,   217,    -1,   217,    69,
     217,    -1,   217,    53,   217,    -1,   217,    70,   217,    -1,
     217,    54,   217,    -1,   217,    55,   217,    -1,   217,    56,
     217,    -1,   217,    57,   217,    -1,    58,   217,    -1,   217,
      59,   217,    -1,   217,    60,   217,    -1,   217,    61,   217,
      -1,    62,   217,    -1,   217,    63,   217,    -1,   217,    64,
     217,    -1,   217,    67,   217,    68,   217,    -1,    21,    81,
     217,    82,    -1,    20,    81,   217,    82,    -1,    22,    81,
     217,    82,    -1,    44,    81,    82,    -1,    44,    81,   217,
      82,    -1,    44,    81,   217,    87,   217,    82,    -1,    44,
      81,   217,    87,   217,    87,   217,    82,    -1,    44,    81,
     217,    87,   217,    87,   217,    87,   217,    82,    -1,    44,
      81,   217,    87,   217,    87,   217,    87,   217,    87,   217,
      82,    -1,    44,    81,   217,    87,   217,    87,   217,    87,
     217,    87,   217,    87,   217,    82,    -1,    44,    81,   217,
      87,   217,    87,   217,    87,   217,    87,   217,    87,   217,
      87,   217,    82,    -1,    44,    81,   217,    87,   217,    87,
     217,    87,   217,    87,   217,    87,   217,    87,   217,    87,
     217,    82,    -1,    44,    81,   217,    87,   217,    87,   217,
      87,   217,    87,   217,    87,   217,    87,   217,    87,   217,
      87,   217,    82,    -1,    44,    81,   217,    87,   217,    87,
     217,    87,   217,    87,   217,    87,   217,    87,   217,    87,
     217,    87,   217,    87,   217,    82,    -1,   219,    -1,   220,
      -1,   221,    -1,    44,    -1,    37,    80,    44,    -1,    44,
      80,    44,    -1,    44,    84,   217,    85,    80,    44,    -1,
      42,    -1,    42,    81,    82,    -1,    41,    81,   219,    82,
      -1,   222,    -1,   223,    -1,   224,    -1,    47,    -1,    35,
      -1,    36,    -1,    45,    -1,    46,    -1,   225,    -1,   225,
      45,    44,    -1,   225,    46,    44,    -1,    45,    44,    -1,
      46,    44,    -1,    78,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   195,   195,   196,   203,   204,   208,   209,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   225,
     227,   229,   231,   233,   235,   237,   239,   241,   243,   245,
     247,   252,   262,   263,   270,   280,   281,   285,   286,   287,
     288,   289,   290,   297,   302,   310,   315,   324,   325,   329,
     330,   334,   346,   358,   357,   381,   380,   389,   391,   392,
     393,   397,   406,   407,   411,   424,   423,   447,   446,   456,
     457,   461,   462,   470,   469,   494,   493,   507,   506,   534,
     533,   547,   546,   574,   573,   590,   589,   614,   613,   626,
     635,   634,   644,   645,   649,   650,   654,   655,   659,   664,
     675,   681,   693,   700,   708,   719,   721,   723,   725,   727,
     732,   735,   739,   741,   743,   750,   758,   759,   763,   764,
     768,   769,   773,   774,   775,   776,   777,   778,   779,   780,
     781,   783,   783,   783,   784,   784,   784,   784,   784,   784,
     785,   785,   786,   786,   786,   786,   786,   786,   787,   787,
     787,   787,   787,   788,   788,   788,   788,   788,   788,   789,
     789,   789,   789,   789,   789,   789,   789,   796,   804,   805,
     809,   815,   825,   829,   830,   834,   843,   855,   857,   862,
     864,   867,   875,   876,   880,   880,   880,   880,   880,   881,
     881,   881,   881,   881,   881,   881,   881,   881,   881,   882,
     882,   882,   882,   882,   882,   882,   882,   882,   882,   882,
     882,   883,   883,   883,   883,   883,   883,   883,   890,   891,
     896,   895,   908,   909,   913,   917,   928,   927,   939,   944,
     950,   957,   961,   966,   975,   977,   979,   987,   988,   993,
     992,  1009,  1010,  1014,  1015,  1019,  1020,  1021,  1022,  1023,
    1024,  1025,  1026,  1033,  1034,  1039,  1038,  1051,  1052,  1056,
    1057,  1061,  1067,  1066,  1086,  1090,  1098,  1103,  1112,  1114,
    1122,  1123,  1128,  1127,  1139,  1138,  1151,  1152,  1156,  1157,
    1161,  1162,  1178,  1177,  1199,  1202,  1206,  1211,  1219,  1220,
    1224,  1239,  1243,  1247,  1252,  1257,  1261,  1268,  1269,  1273,
    1279,  1287,  1292,  1298,  1307,  1314,  1322,  1333,  1334,  1338,
    1342,  1350,  1355,  1361,  1370,  1375,  1381,  1390,  1401,  1405,
    1408,  1407,  1424,  1427,  1432,  1444,  1457,  1463,  1467,  1478,
    1480,  1485,  1486,  1488,  1491,  1493,  1495,  1497,  1499,  1501,
    1504,  1508,  1510,  1512,  1514,  1516,  1518,  1521,  1523,  1525,
    1528,  1532,  1534,  1536,  1539,  1542,  1544,  1546,  1549,  1551,
    1553,  1556,  1558,  1560,  1562,  1564,  1566,  1568,  1570,  1572,
    1574,  1576,  1582,  1583,  1584,  1588,  1590,  1592,  1594,  1599,
    1601,  1603,  1608,  1609,  1610,  1614,  1619,  1621,  1626,  1628,
    1630,  1635,  1636,  1637,  1638,  1642,  1643
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IMPORT", "PACKAGE", "PROPERTY",
  "MODULE", "SIMPLE", "NETWORK", "CHANNEL", "MODULEINTERFACE",
  "CHANNELINTERFACE", "EXTENDS", "LIKE", "TYPES", "PARAMETERS", "GATES",
  "SUBMODULES", "CONNECTIONS", "ALLOWUNCONNECTED", "DOUBLETYPE", "INTTYPE",
  "STRINGTYPE", "BOOLTYPE", "XMLTYPE", "VOLATILE", "INPUT_", "OUTPUT_",
  "INOUT_", "IF", "FOR", "RIGHTARROW", "LEFTARROW", "DBLARROW", "TO",
  "TRUE_", "FALSE_", "THIS_", "DEFAULT", "ASK", "CONST_", "SIZEOF",
  "INDEX_", "XMLDOC", "NAME", "INTCONSTANT", "REALCONSTANT",
  "STRINGCONSTANT", "CHARCONSTANT", "PLUSPLUS", "DOUBLEASTERISK", "EQ",
  "NE", "GE", "LE", "AND", "OR", "XOR", "NOT", "BIN_AND", "BIN_OR",
  "BIN_XOR", "BIN_COMPL", "SHIFT_LEFT", "SHIFT_RIGHT",
  "EXPRESSION_SELECTOR", "INVALID_CHAR", "'?'", "':'", "'>'", "'<'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'^'", "UMIN", "';'", "'}'", "'.'", "'('",
  "')'", "'@'", "'['", "']'", "'{'", "','", "'='", "'$'", "$accept",
  "startsymbol", "nedfile", "definitions", "definition",
  "packagedeclaration", "dottedname", "import", "importspec", "importname",
  "propertydecl", "propertydecl_header", "opt_propertydecl_keys",
  "propertydecl_keys", "propertydecl_key", "fileproperty",
  "channeldefinition", "@1", "channelheader", "@2", "opt_inheritance",
  "extendsname", "likenames", "likename", "channelinterfacedefinition",
  "@3", "channelinterfaceheader", "@4", "opt_interfaceinheritance",
  "extendsnames", "simplemoduledefinition", "@5", "simplemoduleheader",
  "@6", "compoundmoduledefinition", "@7", "compoundmoduleheader", "@8",
  "networkdefinition", "@9", "networkheader", "@10",
  "moduleinterfacedefinition", "@11", "moduleinterfaceheader", "@12",
  "opt_paramblock", "@13", "opt_params", "params", "paramsitem", "param",
  "param_typenamevalue", "param_typename", "pattern_value", "paramtype",
  "opt_volatile", "paramvalue", "opt_inline_properties",
  "inline_properties", "pattern", "pattern_elem", "property",
  "property_namevalue", "property_name", "opt_property_keys",
  "property_keys", "property_key", "property_values", "property_value",
  "property_value_tokens", "property_value_token", "opt_gateblock",
  "gateblock", "@14", "opt_gates", "gates", "gate", "@15",
  "gate_typenamesize", "gatetype", "opt_typeblock", "typeblock", "@16",
  "opt_localtypes", "localtypes", "localtype", "opt_submodblock",
  "submodblock", "@17", "opt_submodules", "submodules", "submodule", "@18",
  "submoduleheader", "submodulename", "likeparam", "opt_connblock",
  "connblock", "@19", "@20", "opt_connections", "connections",
  "connectionsitem", "connectiongroup", "@21", "opt_loops_and_conditions",
  "loops_and_conditions", "loop_or_condition", "loop", "connection",
  "leftgatespec", "leftmod", "leftgate", "parentleftgate", "rightgatespec",
  "rightmod", "rightgate", "parentrightgate", "opt_subgate", "channelspec",
  "@22", "channelspec_header", "condition", "vector", "expression",
  "xmldocvalue", "expr", "simple_expr", "identifier", "special_expr",
  "literal", "stringliteral", "boolliteral", "numliteral", "quantity",
  "opt_semicolon", 0
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    90,    91,    91,    92,    92,    93,    93,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    95,    96,    96,    97,    98,    98,    99,    99,    99,
      99,    99,    99,   100,   100,   101,   101,   102,   102,   103,
     103,   104,   105,   107,   106,   109,   108,   110,   110,   110,
     110,   111,   112,   112,   113,   115,   114,   117,   116,   118,
     118,   119,   119,   121,   120,   123,   122,   125,   124,   127,
     126,   129,   128,   131,   130,   133,   132,   135,   134,   136,
     137,   136,   138,   138,   139,   139,   140,   140,   141,   141,
     142,   142,   143,   143,   144,   145,   145,   145,   145,   145,
     146,   146,   147,   147,   147,   147,   148,   148,   149,   149,
     150,   150,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   152,   153,   153,
     154,   154,   155,   156,   156,   157,   157,   158,   158,   159,
     159,   159,   160,   160,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   162,   162,
     164,   163,   165,   165,   166,   166,   168,   167,   169,   169,
     169,   169,   169,   169,   170,   170,   170,   171,   171,   173,
     172,   174,   174,   175,   175,   176,   176,   176,   176,   176,
     176,   176,   176,   177,   177,   179,   178,   180,   180,   181,
     181,   182,   183,   182,   184,   184,   185,   185,   186,   186,
     187,   187,   189,   188,   190,   188,   191,   191,   192,   192,
     193,   193,   195,   194,   196,   196,   197,   197,   198,   198,
     199,   200,   200,   200,   200,   200,   200,   201,   201,   202,
     202,   203,   203,   203,   204,   204,   204,   205,   205,   206,
     206,   207,   207,   207,   208,   208,   208,   209,   209,   210,
     211,   210,   212,   212,   212,   213,   214,   215,   215,   216,
     216,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   218,   218,   218,   219,   219,   219,   219,   220,
     220,   220,   221,   221,   221,   222,   223,   223,   224,   224,
     224,   225,   225,   225,   225,   226,   226
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     1,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     1,     2,     2,     2,
       1,     1,     1,     3,     6,     3,     5,     1,     0,     3,
       1,     1,     2,     0,     5,     0,     4,     0,     2,     2,
       4,     1,     3,     1,     1,     0,     5,     0,     4,     2,
       0,     3,     1,     0,     6,     0,     4,     0,     9,     0,
       4,     0,     9,     0,     4,     0,     6,     0,     4,     1,
       0,     4,     1,     0,     2,     1,     1,     1,     1,     1,
       3,     6,     3,     1,     5,     1,     1,     1,     1,     1,
       1,     0,     1,     4,     1,     1,     1,     0,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     4,
       2,     5,     1,     3,     1,     3,     1,     3,     1,     1,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       0,     4,     1,     0,     2,     1,     0,     4,     2,     4,
       3,     1,     3,     2,     1,     1,     1,     1,     0,     0,
       4,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     0,     4,     1,     0,     2,
       1,     2,     0,     7,     3,     5,     1,     2,     2,     3,
       1,     0,     0,     5,     0,     4,     1,     0,     2,     1,
       1,     3,     0,     6,     1,     0,     3,     1,     1,     1,
       6,     3,     5,     3,     5,     3,     5,     3,     1,     2,
       1,     2,     3,     3,     2,     3,     3,     3,     1,     1,
       2,     2,     3,     3,     2,     3,     3,     2,     0,     1,
       0,     5,     0,     1,     3,     2,     3,     1,     1,     6,
       4,     1,     3,     4,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     3,     2,     3,     3,     5,     4,     4,
       4,     3,     4,     6,     8,    10,    12,    14,    16,    18,
      20,    22,     1,     1,     1,     1,     3,     3,     6,     1,
       3,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     2,     2,     1,     0
};

/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const unsigned char yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const unsigned char yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error.  */
static const unsigned short int yydefact[] =
{
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,     0,     0,     3,     4,     7,     8,     9,    10,
     117,    11,    12,     0,    13,     0,    14,     0,    15,     0,
      16,     0,    17,     0,     0,   168,    40,    42,    41,     0,
      36,    33,     0,     0,     0,    79,     0,    75,     0,    83,
       0,    55,     0,    87,     0,    67,     0,     0,     0,   386,
     387,     0,     0,     0,   379,     0,   375,   388,   389,   385,
       0,     0,     0,     0,     2,   328,   327,   331,   372,   373,
     374,   382,   383,   384,   390,   170,     1,     6,    48,     0,
     116,   119,     0,    53,     0,    65,     0,    73,     0,    77,
       0,    81,     0,    85,    52,   181,    34,     0,    37,    39,
      38,    31,     0,    45,    24,    57,    22,    57,    26,    57,
      30,    57,    28,    70,    20,    70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   393,   394,   350,
     354,   340,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,     0,    47,
      50,    43,   118,    29,   111,    19,   111,    21,   111,    23,
      93,    25,    93,    27,   111,   212,   187,   188,   184,   185,
     186,   180,   213,   211,   207,   208,   210,   209,   215,   214,
     216,   217,   198,   191,   206,   205,   200,   201,   202,   203,
     204,   199,   196,   197,   190,   193,   194,   195,   192,   189,
       0,   172,   174,   176,   178,   179,   183,    35,    32,     0,
       0,     0,    80,    76,    84,    56,     0,    88,    68,     0,
       0,     0,   376,     0,   375,     0,   380,     0,   377,   361,
       0,     0,   332,   341,   342,   344,   346,   347,   348,   349,
     351,   352,   353,   355,   356,     0,   343,   345,   334,   335,
     336,   337,   338,   339,   391,   392,     0,   117,     0,     0,
     110,   103,     0,     0,    89,    92,    95,    96,    98,   117,
      99,     0,    97,     0,     0,   219,   219,   219,   219,   181,
     169,   181,   181,   184,   182,    46,    61,    58,    64,    59,
      63,    72,    69,   359,   358,   360,   333,   381,   330,     0,
     362,     0,     0,     0,   171,     0,    49,    90,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   153,
     154,   155,   156,   157,   158,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   128,   159,   160,   161,
     162,   163,   164,   165,   166,   126,   127,   125,   124,   123,
     122,     0,     0,     0,   121,    54,    94,     0,   105,   106,
     107,   108,   109,     0,   167,    66,     0,     0,   218,   238,
     238,     0,   175,   173,   177,     0,     0,     0,     0,     0,
       0,   357,    44,    93,     0,     0,     0,   120,   100,     0,
     102,   220,    74,     0,   254,   237,   254,    86,    60,    62,
      71,   329,   363,     0,   378,    91,   129,   130,     0,   114,
     115,   117,   112,   223,   239,     0,   271,   253,   271,     0,
     104,     0,     0,   234,   235,   236,   231,   221,   222,   225,
     226,     0,   242,   255,     0,     0,   270,     0,   364,     0,
       0,   101,     0,   233,   224,   117,   228,     0,     0,     0,
       0,     0,     0,   252,   245,   246,     0,   247,     0,   248,
       0,   249,     0,   250,     0,   251,     0,   240,   241,   244,
     258,     0,   274,    78,    82,     0,   113,   232,     0,     0,
       0,   230,   243,   266,   256,   257,   260,     0,     0,   272,
     277,   365,     0,   326,   227,   229,     0,   267,   259,   261,
     262,     0,   277,     0,     0,   318,   275,   276,   279,   280,
       0,   284,   287,   288,   285,     0,     0,   298,   289,     0,
     111,     0,   264,     0,   273,   325,     0,     0,   304,   299,
     278,   282,     0,     0,   322,   322,   322,     0,   366,     0,
     219,   268,     0,     0,     0,   317,   306,   305,   285,   286,
     281,    33,   323,     0,   291,     0,   308,     0,   319,   293,
       0,   295,     0,   318,   297,     0,     0,   269,   265,     0,
     285,   314,   310,     0,     0,     0,   320,     0,     0,   301,
     367,     0,   396,     0,   396,   316,   315,   324,   318,   307,
     318,   292,   111,   294,   296,   303,   302,     0,   395,   263,
     290,   283,   311,     0,   368,     0,   313,   312,   321,     0,
     369,     0,     0,   370,     0,     0,   371
};

/* YYPDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,    13,    14,    15,    16,    17,   306,    18,    39,    40,
      19,    20,   168,   169,   170,    21,    22,   174,    23,   121,
     232,   307,   309,   310,    24,   176,    25,   125,   237,   312,
      26,   178,    27,   117,    28,   180,    29,   115,    30,   182,
      31,   119,    32,   184,    33,   123,   283,   403,   284,   285,
     286,   287,   288,   289,   290,   383,   291,   431,    89,    90,
     373,   374,   292,   293,    35,   220,   221,   222,   223,   224,
     225,   226,   387,   388,   433,   447,   448,   449,   465,   450,
     451,   414,   415,   452,   487,   488,   489,   436,   437,   490,
     504,   505,   506,   540,   507,   508,   573,   455,   456,   522,
     510,   526,   527,   528,   529,   568,   530,   531,   532,   533,
     534,   535,   536,   584,   537,   574,   575,   609,   576,   591,
     577,   612,   578,   538,   592,   498,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,   619
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -516
static const short int yypact[] =
{
      43,    -5,    13,   108,    28,    29,   111,   142,   153,   167,
     814,  -516,   157,    67,  -516,   124,  -516,  -516,  -516,  -516,
     -39,  -516,  -516,    15,  -516,    20,  -516,    21,  -516,    23,
    -516,    24,  -516,    25,   169,   178,  -516,  -516,  -516,   170,
     201,  -516,   209,   229,   211,  -516,   249,  -516,   255,  -516,
     271,  -516,   287,  -516,   291,  -516,   260,   283,   290,  -516,
    -516,   292,   293,   296,   297,   299,   263,   338,   339,  -516,
     843,   843,   843,   843,  -516,  -516,  1605,  -516,  -516,  -516,
    -516,  -516,  -516,  -516,    91,   300,  -516,  -516,   341,   298,
     306,  -516,   311,  -516,   312,  -516,   313,  -516,   315,  -516,
     316,  -516,   319,  -516,  -516,   876,  -516,    -5,  -516,  -516,
    -516,  -516,   356,   320,  -516,   192,  -516,   192,  -516,   192,
    -516,   192,  -516,   393,  -516,   393,   843,   843,   843,   370,
     843,   244,   333,   369,   373,   413,   843,  -516,  -516,  -516,
    -516,  -516,  1387,   843,   843,   843,   843,   843,   843,   843,
     843,   843,   843,   843,   843,   843,   843,   843,   843,   843,
     843,   843,   843,   843,   375,   376,   377,  -516,   340,   345,
    -516,  -516,  -516,  -516,   100,  -516,   100,  -516,    98,  -516,
     126,  -516,   126,  -516,    98,  -516,  -516,  -516,   337,  -516,
    -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,
    -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,
    -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,
     344,   349,  -516,   342,  -516,   988,  -516,   201,  -516,   347,
      13,    13,  -516,  -516,  -516,  -516,    13,  -516,  -516,  1419,
    1451,  1483,  -516,  1515,    36,   348,  -516,   -16,  -516,  -516,
    1027,  1360,  -516,   580,   580,   580,   580,  1709,  1657,  1683,
     220,   415,   508,   390,   390,  1579,   580,   580,   285,   285,
     360,   360,   360,   360,  -516,  -516,   352,   306,   341,   372,
    -516,  -516,   760,   362,  -516,   138,  -516,  -516,  -516,   306,
    -516,   332,  -516,   364,   365,   427,   427,   427,   427,   932,
    -516,   876,   932,  -516,  -516,  -516,   387,   439,   387,   381,
    -516,  -516,   382,  -516,  -516,  -516,  -516,  -516,  -516,   369,
    -516,   843,   392,   843,  -516,   378,  -516,  -516,  -516,  -516,
    -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,
    -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,
    -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,
    -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,  -516,
    -516,   760,   760,   295,  -516,  -516,  -516,   -23,  -516,  -516,
    -516,  -516,  -516,   426,  -516,  -516,   409,   401,  -516,   470,
     470,   430,   342,  -516,  -516,    13,    13,    13,   410,  1064,
     466,  1631,  -516,   138,   592,   676,   423,  -516,  -516,   461,
    -516,  -516,  -516,   444,   497,  -516,   497,  -516,   381,  -516,
    -516,  -516,  -516,   843,  -516,  -516,  -516,  -516,   461,   434,
    -516,   306,  -516,   236,  -516,   448,   499,  -516,   499,  1101,
    -516,   814,   440,  -516,  -516,  -516,   436,  -516,   236,  -516,
    -516,   477,    26,  -516,    37,   449,  -516,   450,  -516,   843,
     445,  -516,   194,  -516,  -516,   306,   446,   488,   490,   492,
     493,   494,   509,  -516,  -516,  -516,   457,  -516,   472,  -516,
     474,  -516,   475,  -516,   483,  -516,   484,  -516,    26,  -516,
     519,   506,  -516,  -516,  -516,  1138,  -516,  -516,   467,   500,
     366,  -516,  -516,   491,  -516,   519,  -516,   117,   518,  -516,
     136,  -516,   843,  -516,  -516,  -516,   814,  -516,  -516,  -516,
    -516,   150,   136,   814,   533,   181,  -516,   136,  -516,  -516,
     501,   502,  -516,  -516,   238,   245,   510,  -516,  -516,  1175,
      98,   504,   387,   575,  -516,  -516,   503,   548,   115,  -516,
    -516,  -516,   238,   545,   199,   199,   199,   581,  -516,   843,
     427,  -516,   555,    13,   814,  -516,  -516,  -516,   242,  -516,
    -516,    89,   387,   618,  -516,   558,  -516,   614,   560,  -516,
     615,  -516,   616,   559,  -516,  1212,   571,  -516,   387,   623,
      73,   149,  -516,    13,   617,   619,  -516,   619,   619,   174,
    -516,   843,   582,   814,   582,  -516,  -516,   387,   559,  -516,
     262,  -516,   100,  -516,  -516,  -516,  -516,  1249,  -516,  -516,
    -516,  -516,   176,   579,  -516,   843,  -516,  -516,  -516,  1286,
    -516,   843,  1323,  -516,   843,  1547,  -516
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -516,  -516,  -516,  -516,   647,  -516,     1,  -516,  -516,   557,
    -414,  -516,  -516,  -516,   388,  -516,  -412,  -516,  -313,  -516,
     246,  -226,   272,   273,  -312,  -516,  -299,  -516,   543,  -516,
    -295,  -516,  -260,  -516,  -246,  -516,  -244,  -516,  -242,  -516,
    -239,  -516,  -235,  -516,  -234,  -516,  -167,  -516,   267,  -516,
     386,  -516,  -516,  -516,  -516,  -516,  -516,   247,  -275,  -516,
     -45,  -346,  -516,     8,  -516,  -516,  -516,   406,   374,   407,
    -516,   498,  -278,  -516,  -516,  -516,  -516,   226,  -516,  -516,
    -516,   318,  -516,  -516,  -516,  -516,   227,   308,  -516,  -516,
    -516,  -516,   217,  -516,  -516,  -516,   204,   289,  -516,  -516,
    -516,   206,   161,  -515,  -516,  -516,   196,  -516,   179,  -516,
    -516,  -516,  -516,  -516,  -516,  -371,  -516,  -516,  -516,  -484,
    -207,  -516,  -516,  -516,  -403,   -10,  -516,   -66,  -516,   601,
    -516,  -516,  -132,  -516,  -516,  -516,   129
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -319
static const short int yytable[] =
{
      74,   247,   325,    42,   139,   140,   141,   142,    34,   294,
     311,   295,   550,   296,   377,   297,    92,   298,   389,   390,
     391,    94,    96,    34,    98,   100,   102,   407,    91,    44,
      46,     3,   467,   468,   469,   470,   471,   472,   474,    36,
     475,   548,    88,   463,    12,    37,     1,     2,     3,     4,
       5,     6,     7,     8,     9,   408,   491,    41,   407,   407,
     239,   240,   241,   501,   243,   409,   318,    86,    38,   250,
     251,   319,    45,    47,   474,   550,   475,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   172,   599,
     517,    93,   523,   524,   473,   492,    95,    97,    10,    99,
     101,   103,    48,   279,   -93,   279,   134,   525,  -318,  -318,
     136,    11,   549,   280,   622,   280,    12,     1,     2,     3,
       4,     5,     6,     7,     8,     9,   164,   165,  -318,   476,
     477,   279,   281,    50,   281,   567,  -111,  -111,  -111,  -111,
    -111,   280,   604,   478,    52,    49,   442,   479,  -111,  -111,
    -111,  -111,  -111,   280,   566,   523,   524,  -318,    54,   -33,
     281,   420,   282,   516,   282,   476,   477,   -93,   547,   -93,
     525,    12,   281,    12,   579,   581,    51,   398,   606,   478,
     499,    43,   480,   479,    41,   519,   616,    53,   605,   516,
     282,    85,    11,   520,   230,   231,   481,    12,   482,    12,
     483,    55,   282,   484,    56,    57,    58,   485,   486,   627,
     541,    12,  -285,   615,   611,   626,   613,   614,   480,    59,
      60,    61,   308,   516,    62,    63,    64,    65,    66,    67,
      68,    69,   481,   571,   482,   108,   483,   104,   106,   484,
     107,   109,    70,   485,   486,   399,    71,   401,   516,   105,
     516,  -300,   443,   444,   445,   516,    72,   523,   524,   541,
     547,   523,   524,   113,   110,    73,   554,   555,   556,   497,
     446,    61,   586,   153,   154,    91,   525,   111,   244,   112,
     114,   158,   159,   160,   161,   162,   163,    91,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   404,   405,   116,   356,
     357,   358,   359,   360,   118,   361,   362,   363,   364,   365,
     366,   126,  -309,   134,   135,   367,   516,   136,   580,   582,
     120,   547,   378,   379,   380,   381,   382,   439,   160,   161,
     162,   163,   368,   233,   127,   234,   122,   235,   369,   406,
     124,   128,   129,   560,   130,   370,   171,   131,   132,   371,
     133,   372,   137,   138,   166,   167,    56,    57,    58,    12,
     173,   175,   177,   495,   179,   181,   308,   308,   183,   432,
     228,    59,    60,    61,   229,   236,    62,    63,    64,    65,
      66,    67,    68,    69,   242,   246,    69,   248,   432,   274,
     275,   276,   277,   278,    70,   299,   300,   301,    71,   302,
     317,   460,   305,    56,    57,    58,   163,   324,    72,    91,
     327,   375,   384,   386,   385,   623,   539,    73,    59,    60,
      61,   515,   395,    62,    63,    64,   402,    66,    67,    68,
      69,   158,   159,   160,   161,   162,   163,   112,   396,   397,
     410,    70,   400,    91,   150,    71,   152,   411,   153,   154,
     412,    56,    57,    58,   413,    72,   158,   159,   160,   161,
     162,   163,   421,   585,    73,   249,    59,    60,    61,   429,
     430,    62,    63,    64,    65,    66,    67,    68,    69,   417,
     424,   428,   434,   545,   435,   441,   453,   454,   461,    70,
     462,   466,   542,    71,    56,    57,    58,   496,   493,   494,
     500,   562,    45,    72,    47,   617,    49,    51,    53,    59,
      60,    61,    73,    93,    62,    63,    64,    65,    66,    67,
      68,    69,   513,    55,   589,   572,   572,   572,    95,   629,
      97,    99,    70,   503,   588,   632,    71,   150,   635,   101,
     103,   153,   154,   561,   509,   516,    72,   546,   514,   158,
     159,   160,   161,   162,   163,    73,   521,   551,   563,   552,
     557,   564,   565,   620,   607,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   570,   587,   583,   356,   357,   358,   359,
     360,   593,   361,   362,   363,   364,   365,   366,   594,   150,
     151,   152,   367,   153,   154,   595,   596,   597,   547,   598,
     602,   158,   159,   160,   161,   162,   163,   603,   628,   368,
     618,   608,    87,   610,   227,   369,   326,   418,   238,   419,
     425,   376,   370,   392,   464,   440,   371,   426,   372,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   393,   416,   394,
     356,   357,   358,   359,   360,   502,   361,   362,   363,   364,
     365,   366,   518,   304,   438,   543,   367,   457,   544,   590,
     553,   569,   245,   621,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   368,     0,     0,     0,     0,     0,   369,
       0,     0,     0,     0,     0,   427,   370,     0,     0,     0,
     371,     0,   372,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,     0,     0,     0,   356,   357,   358,   359,   360,     0,
     361,   362,   363,   364,   365,   366,     0,     0,     0,     0,
     367,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   368,     0,     0,
       0,     0,     0,   369,    56,    57,    58,     0,     0,     0,
     370,     0,     0,     0,   371,     0,   372,     0,     0,    59,
      60,    61,     0,     0,    62,    63,    64,    65,    66,    67,
      68,    69,     0,    56,    57,    58,     0,     0,     0,     0,
       0,     0,    70,     0,     0,     0,    71,     0,    59,    60,
      61,     0,     0,    62,    63,    64,    72,    66,    67,    68,
      69,     0,     0,     0,     0,    73,     0,     0,     0,     0,
       0,    70,     0,     0,     0,    71,     0,     0,     0,     0,
     185,   186,   187,     0,     0,    72,     0,     0,     0,     0,
     188,   189,   190,   191,    73,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,     0,     0,     0,     0,     0,
       0,     0,     0,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,     0,     0,   212,   213,     0,     0,   214,
     215,   216,   217,     0,   218,   219,   185,   186,   187,     0,
       0,     0,     0,     0,     0,     0,   303,   189,   190,   191,
       0,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,     0,     0,     0,     0,     0,     0,     0,     0,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,     0,
       0,   212,   213,     0,     0,   214,   215,   216,   217,     0,
     218,   219,   185,   186,   187,     0,     0,     0,     0,     0,
       0,     0,   303,   189,   190,     0,     0,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,     0,     0,     0,
       0,     0,     0,     0,     0,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,     0,     0,   212,   213,     0,
       0,   214,   215,   216,   217,     0,   218,   219,   143,   144,
     145,   146,   147,   148,   149,     0,   150,   151,   152,     0,
     153,   154,     0,     0,   155,     0,   156,   157,   158,   159,
     160,   161,   162,   163,     0,     0,     0,     0,     0,   320,
       0,     0,     0,     0,   321,   143,   144,   145,   146,   147,
     148,   149,     0,   150,   151,   152,     0,   153,   154,     0,
       0,   155,     0,   156,   157,   158,   159,   160,   161,   162,
     163,     0,     0,     0,     0,     0,   422,     0,     0,     0,
       0,   423,   143,   144,   145,   146,   147,   148,   149,     0,
     150,   151,   152,     0,   153,   154,     0,     0,   155,     0,
     156,   157,   158,   159,   160,   161,   162,   163,     0,     0,
       0,     0,     0,   458,     0,     0,     0,     0,   459,   143,
     144,   145,   146,   147,   148,   149,     0,   150,   151,   152,
       0,   153,   154,     0,     0,   155,     0,   156,   157,   158,
     159,   160,   161,   162,   163,     0,     0,     0,     0,     0,
     511,     0,     0,     0,     0,   512,   143,   144,   145,   146,
     147,   148,   149,     0,   150,   151,   152,     0,   153,   154,
       0,     0,   155,     0,   156,   157,   158,   159,   160,   161,
     162,   163,     0,     0,     0,     0,     0,   558,     0,     0,
       0,     0,   559,   143,   144,   145,   146,   147,   148,   149,
       0,   150,   151,   152,     0,   153,   154,     0,     0,   155,
       0,   156,   157,   158,   159,   160,   161,   162,   163,     0,
       0,     0,     0,     0,   600,     0,     0,     0,     0,   601,
     143,   144,   145,   146,   147,   148,   149,     0,   150,   151,
     152,     0,   153,   154,     0,     0,   155,     0,   156,   157,
     158,   159,   160,   161,   162,   163,     0,     0,     0,     0,
       0,   624,     0,     0,     0,     0,   625,   143,   144,   145,
     146,   147,   148,   149,     0,   150,   151,   152,     0,   153,
     154,     0,     0,   155,     0,   156,   157,   158,   159,   160,
     161,   162,   163,     0,     0,     0,     0,     0,   630,     0,
       0,     0,     0,   631,   143,   144,   145,   146,   147,   148,
     149,     0,   150,   151,   152,     0,   153,   154,     0,     0,
     155,     0,   156,   157,   158,   159,   160,   161,   162,   163,
       0,     0,     0,     0,     0,   633,     0,     0,     0,     0,
     634,   143,   144,   145,   146,   147,   148,   149,     0,   150,
     151,   152,     0,   153,   154,     0,     0,   155,     0,   156,
     157,   158,   159,   160,   161,   162,   163,     0,   143,   144,
     145,   146,   147,   148,   149,   322,   150,   151,   152,     0,
     153,   154,     0,     0,   155,     0,   156,   157,   158,   159,
     160,   161,   162,   163,     0,     0,     0,     0,     0,   252,
     143,   144,   145,   146,   147,   148,   149,     0,   150,   151,
     152,     0,   153,   154,     0,     0,   155,     0,   156,   157,
     158,   159,   160,   161,   162,   163,     0,     0,     0,     0,
       0,   313,   143,   144,   145,   146,   147,   148,   149,     0,
     150,   151,   152,     0,   153,   154,     0,     0,   155,     0,
     156,   157,   158,   159,   160,   161,   162,   163,     0,     0,
       0,     0,     0,   314,   143,   144,   145,   146,   147,   148,
     149,     0,   150,   151,   152,     0,   153,   154,     0,     0,
     155,     0,   156,   157,   158,   159,   160,   161,   162,   163,
       0,     0,     0,     0,     0,   315,   143,   144,   145,   146,
     147,   148,   149,     0,   150,   151,   152,     0,   153,   154,
       0,     0,   155,     0,   156,   157,   158,   159,   160,   161,
     162,   163,     0,     0,     0,     0,     0,   316,   143,   144,
     145,   146,   147,   148,   149,     0,   150,   151,   152,     0,
     153,   154,     0,     0,   155,     0,   156,   157,   158,   159,
     160,   161,   162,   163,     0,     0,     0,     0,     0,   636,
     143,   144,   145,   146,   147,   148,   149,     0,   150,   151,
     152,     0,   153,   154,     0,     0,   155,   323,   156,   157,
     158,   159,   160,   161,   162,   163,   143,   144,   145,   146,
     147,   148,   149,     0,   150,   151,   152,     0,   153,   154,
       0,     0,   155,     0,   156,   157,   158,   159,   160,   161,
     162,   163,   143,   144,   145,   146,   147,   148,   149,     0,
     150,   151,   152,     0,   153,   154,     0,     0,   155,     0,
     156,   157,   158,   159,   160,   161,   162,   163,   143,   144,
     145,   146,   147,     0,   149,     0,   150,   151,   152,     0,
     153,   154,     0,     0,     0,     0,   156,   157,   158,   159,
     160,   161,   162,   163,   143,   144,   145,   146,   147,     0,
       0,     0,   150,   151,   152,     0,   153,   154,     0,     0,
       0,     0,   156,   157,   158,   159,   160,   161,   162,   163,
     143,   144,   145,   146,     0,     0,     0,     0,   150,   151,
     152,     0,   153,   154,     0,     0,     0,     0,   156,   157,
     158,   159,   160,   161,   162,   163
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const unsigned char yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
       0,     0,     0,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     0,     0,     0,     0,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0,   388,     0,   389,     0,   327,     0,   327,     0,   184,
       0,   318,     0,   309,     0,   318,     0,   318,     0
};

static const short int yycheck[] =
{
      10,   133,   277,     2,    70,    71,    72,    73,     0,   176,
     236,   178,   527,   180,   289,   182,     1,   184,   296,   297,
     298,     1,     1,    15,     1,     1,     1,   373,    20,     1,
       1,     5,     6,     7,     8,     9,    10,    11,   452,    44,
     452,   525,    81,   446,    83,    50,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    78,    19,    44,   404,   405,
     126,   127,   128,   466,   130,    88,    82,     0,    73,   135,
     136,    87,    44,    44,   488,   590,   488,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,    90,   583,
     503,    86,    29,    30,    78,    68,    86,    86,    65,    86,
      86,    86,     1,    15,    16,    15,    80,    44,    29,    30,
      84,    78,   525,    25,   608,    25,    83,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    45,    46,    49,   452,
     452,    15,    44,     1,    44,   548,    20,    21,    22,    23,
      24,    25,    79,   452,     1,    44,   431,   452,    20,    21,
      22,    23,    24,    25,    49,    29,    30,    78,     1,    80,
      44,   397,    74,    84,    74,   488,   488,    79,    89,    79,
      44,    83,    44,    83,   555,   556,    44,   319,   591,   488,
     465,    83,   452,   488,    44,    78,   599,    44,    49,    84,
      74,    44,    78,    86,    12,    13,   452,    83,   452,    83,
     452,    44,    74,   452,    20,    21,    22,   452,   452,   622,
      70,    83,    86,    49,   595,    49,   597,   598,   488,    35,
      36,    37,   231,    84,    40,    41,    42,    43,    44,    45,
      46,    47,   488,    44,   488,    44,   488,    78,    78,   488,
      80,    50,    58,   488,   488,   321,    62,   323,    84,    81,
      84,    80,    26,    27,    28,    84,    72,    29,    30,    70,
      89,    29,    30,    44,    73,    81,    31,    32,    33,    85,
      44,    37,   560,    63,    64,   277,    44,    78,    44,    80,
      79,    71,    72,    73,    74,    75,    76,   289,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   371,   372,    79,    34,
      35,    36,    37,    38,    79,    40,    41,    42,    43,    44,
      45,    81,    80,    80,    81,    50,    84,    84,   555,   556,
      79,    89,    20,    21,    22,    23,    24,   423,    73,    74,
      75,    76,    67,   117,    81,   119,    79,   121,    73,    74,
      79,    81,    80,   540,    81,    80,    78,    81,    81,    84,
      81,    86,    44,    44,    84,    44,    20,    21,    22,    83,
      79,    79,    79,   459,    79,    79,   395,   396,    79,   409,
      44,    35,    36,    37,    84,    12,    40,    41,    42,    43,
      44,    45,    46,    47,    44,    82,    47,    44,   428,    44,
      44,    44,    82,    78,    58,    88,    82,    78,    62,    87,
      82,   441,    85,    20,    21,    22,    76,    85,    72,   431,
      68,    79,    78,    16,    79,   612,   512,    81,    35,    36,
      37,    85,    13,    40,    41,    42,    78,    44,    45,    46,
      47,    71,    72,    73,    74,    75,    76,    80,    87,    87,
      44,    58,    80,   465,    59,    62,    61,    68,    63,    64,
      79,    20,    21,    22,    14,    72,    71,    72,    73,    74,
      75,    76,    82,   559,    81,    82,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    79,
      44,    88,    68,   523,    17,    81,    68,    18,    78,    58,
      84,    44,   521,    62,    20,    21,    22,    82,    79,    79,
      84,   541,    44,    72,    44,   601,    44,    44,    44,    35,
      36,    37,    81,    86,    40,    41,    42,    43,    44,    45,
      46,    47,    85,    44,   564,   554,   555,   556,    86,   625,
      86,    86,    58,    44,   563,   631,    62,    59,   634,    86,
      86,    63,    64,    69,    68,    84,    72,    44,    78,    71,
      72,    73,    74,    75,    76,    81,    68,    86,    13,    87,
      80,    88,    44,   603,   593,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    78,    69,    44,    34,    35,    36,    37,
      38,    13,    40,    41,    42,    43,    44,    45,    80,    59,
      60,    61,    50,    63,    64,    31,    86,    32,    89,    33,
      79,    71,    72,    73,    74,    75,    76,    34,    79,    67,
      78,    44,    15,    44,   107,    73,   278,   395,   125,   396,
     403,   285,    80,   299,   448,   428,    84,    85,    86,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,   301,   390,   302,
      34,    35,    36,    37,    38,   488,    40,    41,    42,    43,
      44,    45,   505,   225,   416,   521,    50,   438,   522,   568,
     534,   552,   131,   604,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    79,    80,    -1,    -1,    -1,
      84,    -1,    86,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    34,    35,    36,    37,    38,    -1,
      40,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    73,    20,    21,    22,    -1,    -1,    -1,
      80,    -1,    -1,    -1,    84,    -1,    86,    -1,    -1,    35,
      36,    37,    -1,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    62,    -1,    35,    36,
      37,    -1,    -1,    40,    41,    42,    72,    44,    45,    46,
      47,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      34,    35,    36,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      44,    45,    46,    47,    81,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    -1,    -1,    79,    80,    -1,    -1,    83,
      84,    85,    86,    -1,    88,    89,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
      -1,    79,    80,    -1,    -1,    83,    84,    85,    86,    -1,
      88,    89,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    79,    80,    -1,
      -1,    83,    84,    85,    86,    -1,    88,    89,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    60,    61,    -1,
      63,    64,    -1,    -1,    67,    -1,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    87,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    60,    61,    -1,    63,    64,    -1,
      -1,    67,    -1,    69,    70,    71,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    87,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    60,    61,    -1,    63,    64,    -1,    -1,    67,    -1,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    87,    51,
      52,    53,    54,    55,    56,    57,    -1,    59,    60,    61,
      -1,    63,    64,    -1,    -1,    67,    -1,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    87,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    60,    61,    -1,    63,    64,
      -1,    -1,    67,    -1,    69,    70,    71,    72,    73,    74,
      75,    76,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    87,    51,    52,    53,    54,    55,    56,    57,
      -1,    59,    60,    61,    -1,    63,    64,    -1,    -1,    67,
      -1,    69,    70,    71,    72,    73,    74,    75,    76,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    87,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      61,    -1,    63,    64,    -1,    -1,    67,    -1,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    87,    51,    52,    53,
      54,    55,    56,    57,    -1,    59,    60,    61,    -1,    63,
      64,    -1,    -1,    67,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    87,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    60,    61,    -1,    63,    64,    -1,    -1,
      67,    -1,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      87,    51,    52,    53,    54,    55,    56,    57,    -1,    59,
      60,    61,    -1,    63,    64,    -1,    -1,    67,    -1,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    51,    52,
      53,    54,    55,    56,    57,    85,    59,    60,    61,    -1,
      63,    64,    -1,    -1,    67,    -1,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    82,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      61,    -1,    63,    64,    -1,    -1,    67,    -1,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    82,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    60,    61,    -1,    63,    64,    -1,    -1,    67,    -1,
      69,    70,    71,    72,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    -1,    82,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    60,    61,    -1,    63,    64,    -1,    -1,
      67,    -1,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    -1,    82,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    60,    61,    -1,    63,    64,
      -1,    -1,    67,    -1,    69,    70,    71,    72,    73,    74,
      75,    76,    -1,    -1,    -1,    -1,    -1,    82,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    60,    61,    -1,
      63,    64,    -1,    -1,    67,    -1,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,    82,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      61,    -1,    63,    64,    -1,    -1,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    60,    61,    -1,    63,    64,
      -1,    -1,    67,    -1,    69,    70,    71,    72,    73,    74,
      75,    76,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    60,    61,    -1,    63,    64,    -1,    -1,    67,    -1,
      69,    70,    71,    72,    73,    74,    75,    76,    51,    52,
      53,    54,    55,    -1,    57,    -1,    59,    60,    61,    -1,
      63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    75,    76,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    59,    60,    61,    -1,    63,    64,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    75,    76,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    59,    60,
      61,    -1,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,    75,    76
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      65,    78,    83,    91,    92,    93,    94,    95,    97,   100,
     101,   105,   106,   108,   114,   116,   120,   122,   124,   126,
     128,   130,   132,   134,   153,   154,    44,    50,    73,    98,
      99,    44,    96,    83,     1,    44,     1,    44,     1,    44,
       1,    44,     1,    44,     1,    44,    20,    21,    22,    35,
      36,    37,    40,    41,    42,    43,    44,    45,    46,    47,
      58,    62,    72,    81,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,    44,     0,    94,    81,   148,
     149,   153,     1,    86,     1,    86,     1,    86,     1,    86,
       1,    86,     1,    86,    78,    81,    78,    80,    44,    50,
      73,    78,    80,    44,    79,   127,    79,   123,    79,   131,
      79,   109,    79,   135,    79,   117,    81,    81,    81,    80,
      81,    81,    81,    81,    80,    81,    84,    44,    44,   217,
     217,   217,   217,    51,    52,    53,    54,    55,    56,    57,
      59,    60,    61,    63,    64,    67,    69,    70,    71,    72,
      73,    74,    75,    76,    45,    46,    84,    44,   102,   103,
     104,    78,   153,    79,   107,    79,   115,    79,   121,    79,
     125,    79,   129,    79,   133,    34,    35,    36,    44,    45,
      46,    47,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    79,    80,    83,    84,    85,    86,    88,    89,
     155,   156,   157,   158,   159,   160,   161,    99,    44,    84,
      12,    13,   110,   110,   110,   110,    12,   118,   118,   217,
     217,   217,    44,   217,    44,   219,    82,   222,    44,    82,
     217,   217,    82,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,    44,    44,    44,    82,    78,    15,
      25,    44,    74,   136,   138,   139,   140,   141,   142,   143,
     144,   146,   152,   153,   136,   136,   136,   136,   136,    88,
      82,    78,    87,    44,   161,    85,    96,   111,    96,   112,
     113,   111,   119,    82,    82,    82,    82,    82,    82,    87,
      82,    87,    85,    68,    85,   148,   104,    68,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    34,    35,    36,    37,
      38,    40,    41,    42,    43,    44,    45,    50,    67,    73,
      80,    84,    86,   150,   151,    79,   140,   148,    20,    21,
      22,    23,    24,   145,    78,    79,    16,   162,   163,   162,
     162,   162,   158,   157,   159,    13,    87,    87,   222,   217,
      80,   217,    78,   137,   150,   150,    74,   151,    78,    88,
      44,    68,    79,    14,   171,   172,   171,    79,   112,   113,
     111,    82,    82,    87,    44,   138,    85,    79,    88,    38,
      39,   147,   215,   164,    68,    17,   177,   178,   177,   217,
     147,    81,   148,    26,    27,    28,    44,   165,   166,   167,
     169,   170,   173,    68,    18,   187,   188,   187,    82,    87,
     215,    78,    84,   214,   167,   168,    44,     6,     7,     8,
       9,    10,    11,    78,   100,   106,   108,   114,   116,   120,
     122,   124,   126,   128,   130,   132,   134,   174,   175,   176,
     179,    19,    68,    79,    79,   217,    82,    85,   215,   148,
      84,   214,   176,    44,   180,   181,   182,   184,   185,    68,
     190,    82,    87,    85,    78,    85,    84,   214,   182,    78,
      86,    68,   189,    29,    30,    44,   191,   192,   193,   194,
     196,   197,   198,   199,   200,   201,   202,   204,   213,   217,
     183,    70,    96,   186,   191,   215,    44,    89,   209,   214,
     193,    86,    87,   196,    31,    32,    33,    80,    82,    87,
     136,    69,   215,    13,    88,    44,    49,   214,   195,   198,
      78,    44,    96,   186,   205,   206,   208,   210,   212,   205,
     210,   205,   210,    44,   203,   217,   162,    69,    96,   215,
     192,   209,   214,    13,    80,    31,    86,    32,    33,   209,
      82,    87,    79,    34,    79,    49,   214,    96,    44,   207,
      44,   205,   211,   205,   205,    49,   214,   217,    78,   226,
     215,   226,   209,   136,    82,    87,    49,   214,    79,   217,
      82,    87,   217,    82,    87,   217,    82
};


/* Prevent warning if -Wmissing-prototypes.  */
int yyparse (void);

/* Error token number */
#define YYTERROR 1

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */


#define YYRHSLOC(Rhs, K) ((Rhs)[K].yystate.yyloc)
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))							\
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

/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# define YY_LOCATION_PRINT(File, Loc)			\
    fprintf (File, "%d.%d-%d.%d",			\
	     (Loc).first_line, (Loc).first_column,	\
	     (Loc).last_line,  (Loc).last_column)
#endif


#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#define YYLEX yylex ()

YYSTYPE yylval;

YYLTYPE yylloc;

int yynerrs;
int yychar;

static const int YYEOF = 0;
static const int YYEMPTY = -2;

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)							     \
   do { YYRESULTTAG yyflag = YYE; if (yyflag != yyok) return yyflag; }	     \
   while (YYID (0))

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
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

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
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

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			    \
do {									    \
  if (yydebug)								    \
    {									    \
      YYFPRINTF (stderr, "%s ", Title);					    \
      yy_symbol_print (stderr, Type,					    \
		       Value, Location);  \
      YYFPRINTF (stderr, "\n");						    \
    }									    \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

#else /* !YYDEBUG */

# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)

#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
# if (! defined __cplusplus \
      || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	  && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL))
#  define YYSTACKEXPANDABLE 1
# else
#  define YYSTACKEXPANDABLE 0
# endif
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)			\
  do {							\
    if (Yystack->yyspaceLeft < YYHEADROOM)		\
      yyexpandGLRStack (Yystack);			\
  } while (YYID (0))
#else
# define YY_RESERVE_GLRSTACK(Yystack)			\
  do {							\
    if (Yystack->yyspaceLeft < YYHEADROOM)		\
      yyMemoryExhausted (Yystack);			\
  } while (YYID (0))
#endif


#if YYERROR_VERBOSE

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
static size_t
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
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
    return strlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* !YYERROR_VERBOSE */

/** State numbers, as in LALR(1) machine */
typedef int yyStateNum;

/** Rule numbers, as in LALR(1) machine */
typedef int yyRuleNum;

/** Grammar symbol */
typedef short int yySymbol;

/** Item references, as in LALR(1) machine */
typedef short int yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState {
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yysval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yyStateNum yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the first token produced by my symbol */
  size_t yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  non-terminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yysval;
  } yysemantics;
  /** Source location for this state.  */
  YYLTYPE yyloc;
};

struct yyGLRStateSet {
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  size_t yysize, yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  YYLTYPE yyloc;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;
  /* To compute the location of the error token.  */
  yyGLRStackItem yyerror_range[3];

  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  size_t yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

static void yyFail (yyGLRStack* yystackp, const char* yymsg)
  __attribute__ ((__noreturn__));
static void
yyFail (yyGLRStack* yystackp, const char* yymsg)
{
  if (yymsg != NULL)
    yyerror (yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

static void yyMemoryExhausted (yyGLRStack* yystackp)
  __attribute__ ((__noreturn__));
static void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

#if YYDEBUG || YYERROR_VERBOSE
/** A printable representation of TOKEN.  */
static inline const char*
yytokenName (yySymbol yytoken)
{
  if (yytoken == YYEMPTY)
    return "";

  return yytname[yytoken];
}
#endif

/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) __attribute__ ((__unused__));
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  yyGLRState* s;
  int i;
  s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
      YYASSERT (s->yyresolved);
      yyvsp[i].yystate.yyresolved = yytrue;
      yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
      yyvsp[i].yystate.yyloc = s->yyloc;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     __attribute__ ((__unused__));
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT.  */
/*ARGSUSED*/ static YYRESULTTAG
yyuserAction (yyRuleNum yyn, int yyrhslen, yyGLRStackItem* yyvsp,
	      YYSTYPE* yyvalp,
	      YYLTYPE* YYOPTIONAL_LOC (yylocp),
	      yyGLRStack* yystackp
	      )
{
  yybool yynormal __attribute__ ((__unused__)) =
    (yystackp->yysplitPoint == NULL);
  int yylow;
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, N, yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)						     \
  return yyerror (YY_("syntax error: cannot back up")),     \
	 yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yysval;
  YYLLOC_DEFAULT ((*yylocp), (yyvsp - yyrhslen), yyrhslen);
  yystackp->yyerror_range[1].yystate.yyloc = *yylocp;

  switch (yyn)
    {
        case 19:
#line 226 "ned2.y"
    { storePos(ps.component, (*yylocp)); restoreGlobalParserState(); }
    break;

  case 20:
#line 228 "ned2.y"
    { restoreGlobalParserState(); }
    break;

  case 21:
#line 230 "ned2.y"
    { storePos(ps.component, (*yylocp)); restoreGlobalParserState(); }
    break;

  case 22:
#line 232 "ned2.y"
    { restoreGlobalParserState(); }
    break;

  case 23:
#line 234 "ned2.y"
    { storePos(ps.component, (*yylocp)); restoreGlobalParserState(); }
    break;

  case 24:
#line 236 "ned2.y"
    { restoreGlobalParserState(); }
    break;

  case 25:
#line 238 "ned2.y"
    { storePos(ps.component, (*yylocp)); restoreGlobalParserState(); }
    break;

  case 26:
#line 240 "ned2.y"
    { restoreGlobalParserState(); }
    break;

  case 27:
#line 242 "ned2.y"
    { storePos(ps.component, (*yylocp)); restoreGlobalParserState(); }
    break;

  case 28:
#line 244 "ned2.y"
    { restoreGlobalParserState(); }
    break;

  case 29:
#line 246 "ned2.y"
    { storePos(ps.component, (*yylocp)); restoreGlobalParserState(); }
    break;

  case 30:
#line 248 "ned2.y"
    { restoreGlobalParserState(); }
    break;

  case 31:
#line 253 "ned2.y"
    {
                  ps.package = (PackageElement *)createElementWithTag(NED_PACKAGE, ps.nedfile);
                  ps.package->setName(removeSpaces((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc)).c_str());
                  storePos(ps.package,(*yylocp));
                  storeBannerAndRightComments(ps.package,(*yylocp));
                }
    break;

  case 34:
#line 271 "ned2.y"
    {
                  ps.import = (ImportElement *)createElementWithTag(NED_IMPORT, ps.nedfile);
                  ps.import->setImportSpec(removeSpaces((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc)).c_str());
                  storePos(ps.import,(*yylocp));
                  storeBannerAndRightComments(ps.import,(*yylocp));
                }
    break;

  case 43:
#line 298 "ned2.y"
    {
                    storePos(ps.propertydecl, (*yylocp));
                    storeBannerAndRightComments(ps.propertydecl,(*yylocp));
                }
    break;

  case 44:
#line 303 "ned2.y"
    {
                    storePos(ps.propertydecl, (*yylocp));
                    storeBannerAndRightComments(ps.propertydecl,(*yylocp));
                }
    break;

  case 45:
#line 311 "ned2.y"
    {
                  ps.propertydecl = (PropertyDeclElement *)createElementWithTag(NED_PROPERTY_DECL, ps.nedfile);
                  ps.propertydecl->setName(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yyloc)));
                }
    break;

  case 46:
#line 316 "ned2.y"
    {
                  ps.propertydecl = (PropertyDeclElement *)createElementWithTag(NED_PROPERTY_DECL, ps.nedfile);
                  ps.propertydecl->setName(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yyloc)));
                  ps.propertydecl->setIsArray(true);
                }
    break;

  case 51:
#line 335 "ned2.y"
    {
                  ps.propkey = (PropertyKeyElement *)createElementWithTag(NED_PROPERTY_KEY, ps.propertydecl);
                  ps.propkey->setName(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)));
                  storePos(ps.propkey, (*yylocp));
                }
    break;

  case 52:
#line 347 "ned2.y"
    {
                  storePos(ps.property, (*yylocp));
                  storeBannerAndRightComments(ps.property,(*yylocp));
                }
    break;

  case 53:
#line 358 "ned2.y"
    {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)createElementWithTag(NED_PARAMETERS, ps.component);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
    break;

  case 54:
#line 367 "ned2.y"
    {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(ps.component, (*yylocp));
                  storePos(ps.component, (*yylocp));
                  storeTrailingComment(ps.component,(*yylocp));
                }
    break;

  case 55:
#line 381 "ned2.y"
    {
                  ps.component = (ChannelElement *)createElementWithTag(NED_CHANNEL, ps.inTypes ? (NEDElement *)ps.types : (NEDElement *)ps.nedfile);
                  ((ChannelElement *)ps.component)->setName(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc)));
                }
    break;

  case 56:
#line 386 "ned2.y"
    { storeBannerAndRightComments(ps.component,(*yylocp)); }
    break;

  case 61:
#line 398 "ned2.y"
    {
                  ps.extends = (ExtendsElement *)createElementWithTag(NED_EXTENDS, ps.component);
                  ps.extends->setName(removeSpaces((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)).c_str());
                  storePos(ps.extends, (*yylocp));
                }
    break;

  case 64:
#line 412 "ned2.y"
    {
                  ps.interfacename = (InterfaceNameElement *)createElementWithTag(NED_INTERFACE_NAME, ps.component);
                  ps.interfacename->setName(removeSpaces((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)).c_str());
                  storePos(ps.interfacename, (*yylocp));
                }
    break;

  case 65:
#line 424 "ned2.y"
    {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)createElementWithTag(NED_PARAMETERS, ps.component);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
    break;

  case 66:
#line 433 "ned2.y"
    {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(ps.component, (*yylocp));
                  storePos(ps.component, (*yylocp));
                  storeTrailingComment(ps.component,(*yylocp));
                }
    break;

  case 67:
#line 447 "ned2.y"
    {
                  ps.component = (ChannelInterfaceElement *)createElementWithTag(NED_CHANNEL_INTERFACE, ps.inTypes ? (NEDElement *)ps.types : (NEDElement *)ps.nedfile);
                  ((ChannelInterfaceElement *)ps.component)->setName(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc)));
                }
    break;

  case 68:
#line 452 "ned2.y"
    { storeBannerAndRightComments(ps.component,(*yylocp)); }
    break;

  case 73:
#line 470 "ned2.y"
    {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)createElementWithTag(NED_PARAMETERS, ps.component);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
    break;

  case 74:
#line 480 "ned2.y"
    {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(ps.component, (*yylocp));
                  storePos(ps.component, (*yylocp));
                  storeTrailingComment(ps.component,(*yylocp));
                }
    break;

  case 75:
#line 494 "ned2.y"
    {
                  ps.component = (SimpleModuleElement *)createElementWithTag(NED_SIMPLE_MODULE, ps.inTypes ? (NEDElement *)ps.types : (NEDElement *)ps.nedfile );
                  ((SimpleModuleElement *)ps.component)->setName(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc)));
                }
    break;

  case 76:
#line 499 "ned2.y"
    { storeBannerAndRightComments(ps.component,(*yylocp)); }
    break;

  case 77:
#line 507 "ned2.y"
    {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)createElementWithTag(NED_PARAMETERS, ps.component);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
    break;

  case 78:
#line 520 "ned2.y"
    {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(ps.component, (*yylocp));
                  storePos(ps.component, (*yylocp));
                  storeTrailingComment(ps.component,(*yylocp));
                }
    break;

  case 79:
#line 534 "ned2.y"
    {
                  ps.component = (CompoundModuleElement *)createElementWithTag(NED_COMPOUND_MODULE, ps.inTypes ? (NEDElement *)ps.types : (NEDElement *)ps.nedfile );
                  ((CompoundModuleElement *)ps.component)->setName(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc)));
                }
    break;

  case 80:
#line 539 "ned2.y"
    { storeBannerAndRightComments(ps.component,(*yylocp)); }
    break;

  case 81:
#line 547 "ned2.y"
    {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)ps.component->getFirstChildWithTag(NED_PARAMETERS); // networkheader already created it for @isNetwork
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
    break;

  case 82:
#line 560 "ned2.y"
    {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(ps.component, (*yylocp));
                  storePos(ps.component, (*yylocp));
                  storeTrailingComment(ps.component,(*yylocp));
                }
    break;

  case 83:
#line 574 "ned2.y"
    {
                  ps.component = (CompoundModuleElement *)createElementWithTag(NED_COMPOUND_MODULE, ps.inTypes ? (NEDElement *)ps.types : (NEDElement *)ps.nedfile );
                  ((CompoundModuleElement *)ps.component)->setName(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc)));
                }
    break;

  case 84:
#line 579 "ned2.y"
    {
                  setIsNetworkProperty(ps.component);
                  storeBannerAndRightComments(ps.component,(*yylocp));
                }
    break;

  case 85:
#line 590 "ned2.y"
    {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)createElementWithTag(NED_PARAMETERS, ps.component);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
    break;

  case 86:
#line 600 "ned2.y"
    {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(ps.component, (*yylocp));
                  storePos(ps.component, (*yylocp));
                  storeTrailingComment(ps.component,(*yylocp));
                }
    break;

  case 87:
#line 614 "ned2.y"
    {
                  ps.component = (ModuleInterfaceElement *)createElementWithTag(NED_MODULE_INTERFACE, ps.inTypes ? (NEDElement *)ps.types : (NEDElement *)ps.nedfile);
                  ((ModuleInterfaceElement *)ps.component)->setName(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc)));
                }
    break;

  case 88:
#line 619 "ned2.y"
    { storeBannerAndRightComments(ps.component,(*yylocp)); }
    break;

  case 89:
#line 627 "ned2.y"
    {
                  storePos(ps.parameters, (*yylocp));
                  if (!ps.parameters->getFirstChild()) { // delete "parameters" element if empty
                      ps.parameters->getParent()->removeChild(ps.parameters);
                      delete ps.parameters;
                  }
                }
    break;

  case 90:
#line 635 "ned2.y"
    {
                  ps.parameters->setIsImplicit(false);
                  storeBannerAndRightComments(ps.parameters,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc));
                }
    break;

  case 91:
#line 640 "ned2.y"
    { storePos(ps.parameters, (*yylocp)); }
    break;

  case 98:
#line 660 "ned2.y"
    {
                  storePos(ps.param, (*yylocp));
                  storeBannerAndRightComments(ps.param,(*yylocp));
                }
    break;

  case 99:
#line 665 "ned2.y"
    {
                  storePos(ps.pattern, (*yylocp));
                  storeBannerAndRightComments(ps.pattern,(*yylocp));
                }
    break;

  case 100:
#line 676 "ned2.y"
    {
                  ps.propertyscope.pop();
                  storePos(ps.param, (*yylocp));
                  storeBannerAndRightComments(ps.param,(*yylocp));
                }
    break;

  case 101:
#line 682 "ned2.y"
    {
                  ps.propertyscope.pop();
                  if (!isEmpty(ps.exprPos))  // note: $4 cannot be checked, as it's always NULL when expression parsing is off
                      addExpression(ps.param, "value",ps.exprPos,(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval));
                  ps.param->setIsDefault(ps.isDefault);
                  storePos(ps.param, (*yylocp));
                  storeBannerAndRightComments(ps.param,(*yylocp));
                }
    break;

  case 102:
#line 694 "ned2.y"
    {
                  ps.param = addParameter(ps.parameters, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yyloc));
                  ps.param->setType(ps.paramType);
                  ps.param->setIsVolatile(ps.isVolatile);
                  ps.propertyscope.push(ps.param);
                }
    break;

  case 103:
#line 701 "ned2.y"
    {
                  ps.param = addParameter(ps.parameters, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc));
                  ps.propertyscope.push(ps.param);
                }
    break;

  case 104:
#line 709 "ned2.y"
    {
                  ps.pattern = (PatternElement *)createElementWithTag(NED_PATTERN, ps.parameters);
                  ps.pattern->setPattern(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yyloc)));
                  if (!isEmpty(ps.exprPos))  // note: $5 cannot be checked, as it's always NULL when expression parsing is off
                      addExpression(ps.pattern, "value",ps.exprPos,(((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval));
                  ps.pattern->setIsDefault(ps.isDefault);
                }
    break;

  case 105:
#line 720 "ned2.y"
    { ps.paramType = NED_PARTYPE_DOUBLE; }
    break;

  case 106:
#line 722 "ned2.y"
    { ps.paramType = NED_PARTYPE_INT; }
    break;

  case 107:
#line 724 "ned2.y"
    { ps.paramType = NED_PARTYPE_STRING; }
    break;

  case 108:
#line 726 "ned2.y"
    { ps.paramType = NED_PARTYPE_BOOL; }
    break;

  case 109:
#line 728 "ned2.y"
    { ps.paramType = NED_PARTYPE_XML; }
    break;

  case 110:
#line 733 "ned2.y"
    { ps.isVolatile = true; }
    break;

  case 111:
#line 735 "ned2.y"
    { ps.isVolatile = false; }
    break;

  case 112:
#line 740 "ned2.y"
    { ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval); ps.exprPos = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc); ps.isDefault = false; }
    break;

  case 113:
#line 742 "ned2.y"
    { ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval); ps.exprPos = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yyloc); ps.isDefault = true; }
    break;

  case 114:
#line 744 "ned2.y"
    {
                  // Note: "=default" is currently not accepted in NED files, because
                  // it would be complicated to support in the Inifile Editor.
                  np->getErrors()->addError(ps.types,"applying the default value (\"=default\" syntax) is not supported in NED files");
                  ((*yyvalp)) = NULL; ps.exprPos = makeEmptyYYLTYPE(); ps.isDefault = true;
                }
    break;

  case 115:
#line 751 "ned2.y"
    {
                  np->getErrors()->addError(ps.types,"interactive prompting (\"=ask\" syntax) is not supported in NED files");
                  ((*yyvalp)) = NULL; ps.exprPos = makeEmptyYYLTYPE(); ps.isDefault = false;
                }
    break;

  case 167:
#line 797 "ned2.y"
    {
                  storePos(ps.property, (*yylocp));
                  storeBannerAndRightComments(ps.property,(*yylocp));
                }
    break;

  case 170:
#line 810 "ned2.y"
    {
                  assertNonEmpty(ps.propertyscope);
                  ps.property = addProperty(ps.propertyscope.top(), toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc)));
                  ps.propvals.clear(); // just to be safe
                }
    break;

  case 171:
#line 816 "ned2.y"
    {
                  assertNonEmpty(ps.propertyscope);
                  ps.property = addProperty(ps.propertyscope.top(), toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yyloc)));
                  ps.property->setIndex(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yyloc)));
                  ps.propvals.clear(); // just to be safe
                }
    break;

  case 175:
#line 835 "ned2.y"
    {
                  ps.propkey = (PropertyKeyElement *)createElementWithTag(NED_PROPERTY_KEY, ps.property);
                  ps.propkey->setName(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc)));
                  for (int i=0; i<(int)ps.propvals.size(); i++)
                      ps.propkey->appendChild(ps.propvals[i]);
                  ps.propvals.clear();
                  storePos(ps.propkey, (*yylocp));
                }
    break;

  case 176:
#line 844 "ned2.y"
    {
                  ps.propkey = (PropertyKeyElement *)createElementWithTag(NED_PROPERTY_KEY, ps.property);
                  ps.propkey->appendChild((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval));
                  for (int i=0; i<(int)ps.propvals.size(); i++)
                      ps.propkey->appendChild(ps.propvals[i]);
                  ps.propvals.clear();
                  storePos(ps.propkey, (*yylocp));
                }
    break;

  case 177:
#line 856 "ned2.y"
    { ps.propvals.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 178:
#line 858 "ned2.y"
    { ps.propvals.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval)); }
    break;

  case 179:
#line 863 "ned2.y"
    { ((*yyvalp)) = createLiteral(NED_CONST_SPEC, (*yylocp), (*yylocp)); }
    break;

  case 180:
#line 865 "ned2.y"
    { ((*yyvalp)) = createStringLiteral((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)); }
    break;

  case 181:
#line 867 "ned2.y"
    {
                  LiteralElement *node = (LiteralElement *)createElementWithTag(NED_LITERAL);
                  node->setType(NED_CONST_SPEC); // and leave both value and text at ""
                  ((*yyvalp)) = node;
                }
    break;

  case 220:
#line 896 "ned2.y"
    {
                  assertNonEmpty(ps.blockscope);
                  ps.gates = (GatesElement *)createElementWithTag(NED_GATES, ps.blockscope.top());
                  storeBannerAndRightComments(ps.gates,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc));
                }
    break;

  case 221:
#line 902 "ned2.y"
    {
                  storePos(ps.gates, (*yylocp));
                }
    break;

  case 224:
#line 914 "ned2.y"
    {
                  storeBannerAndRightComments(ps.gate,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc));
                }
    break;

  case 225:
#line 918 "ned2.y"
    {
                  storeBannerAndRightComments(ps.gate,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc));
                }
    break;

  case 226:
#line 928 "ned2.y"
    {
                  ps.propertyscope.push(ps.gate);
                }
    break;

  case 227:
#line 932 "ned2.y"
    {
                  ps.propertyscope.pop();
                  storePos(ps.gate, (*yylocp));
                }
    break;

  case 228:
#line 940 "ned2.y"
    {
                  ps.gate = addGate(ps.gates, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc));
                  ps.gate->setType(ps.gateType);
                }
    break;

  case 229:
#line 945 "ned2.y"
    {
                  ps.gate = addGate(ps.gates, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yyloc));
                  ps.gate->setType(ps.gateType);
                  ps.gate->setIsVector(true);
                }
    break;

  case 230:
#line 951 "ned2.y"
    {
                  ps.gate = addGate(ps.gates, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc));
                  ps.gate->setType(ps.gateType);
                  ps.gate->setIsVector(true);
                  addVector(ps.gate, "vector-size",(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval));
                }
    break;

  case 231:
#line 958 "ned2.y"
    {
                  ps.gate = addGate(ps.gates, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc));
                }
    break;

  case 232:
#line 962 "ned2.y"
    {
                  ps.gate = addGate(ps.gates, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc));
                  ps.gate->setIsVector(true);
                }
    break;

  case 233:
#line 967 "ned2.y"
    {
                  ps.gate = addGate(ps.gates, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc));
                  ps.gate->setIsVector(true);
                  addVector(ps.gate, "vector-size",(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval));
                }
    break;

  case 234:
#line 976 "ned2.y"
    { ps.gateType = NED_GATETYPE_INPUT; }
    break;

  case 235:
#line 978 "ned2.y"
    { ps.gateType = NED_GATETYPE_OUTPUT; }
    break;

  case 236:
#line 980 "ned2.y"
    { ps.gateType = NED_GATETYPE_INOUT; }
    break;

  case 239:
#line 993 "ned2.y"
    {
                  assertNonEmpty(ps.blockscope);
                  ps.types = (TypesElement *)createElementWithTag(NED_TYPES, ps.blockscope.top());
                  storeBannerAndRightComments(ps.types,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc));
                  if (ps.inTypes)
                     np->getErrors()->addError(ps.types,"more than one level of type nesting is not allowed");
                  ps.inTypes = true;
                }
    break;

  case 240:
#line 1002 "ned2.y"
    {
                  ps.inTypes = false;
                  storePos(ps.types, (*yylocp));
                }
    break;

  case 255:
#line 1039 "ned2.y"
    {
                  assertNonEmpty(ps.blockscope);
                  ps.submods = (SubmodulesElement *)createElementWithTag(NED_SUBMODULES, ps.blockscope.top());
                  storeBannerAndRightComments(ps.submods,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc));
                }
    break;

  case 256:
#line 1045 "ned2.y"
    {
                  storePos(ps.submods, (*yylocp));
                }
    break;

  case 261:
#line 1062 "ned2.y"
    {
                  storeBannerAndRightComments(ps.submod,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc));
                  storePos(ps.submod, (*yylocp));
                }
    break;

  case 262:
#line 1067 "ned2.y"
    {
                  ps.blockscope.push(ps.submod);
                  ps.parameters = (ParametersElement *)createElementWithTag(NED_PARAMETERS, ps.submod);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                  storeBannerAndRightComments(ps.submod,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc));
                }
    break;

  case 263:
#line 1077 "ned2.y"
    {
                  ps.blockscope.pop();
                  ps.propertyscope.pop();
                  storePos(ps.submod, (*yylocp));
                  storeTrailingComment(ps.submod,(*yylocp));
                }
    break;

  case 264:
#line 1087 "ned2.y"
    {
                  ps.submod->setType(removeSpaces((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yyloc)).c_str());
                }
    break;

  case 265:
#line 1091 "ned2.y"
    {
                  addLikeParam(ps.submod, "like-param", (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yyloc), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval));
                  ps.submod->setLikeType(removeSpaces((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yyloc)).c_str());
                }
    break;

  case 266:
#line 1099 "ned2.y"
    {
                  ps.submod = (SubmoduleElement *)createElementWithTag(NED_SUBMODULE, ps.submods);
                  ps.submod->setName(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)));
                }
    break;

  case 267:
#line 1104 "ned2.y"
    {
                  ps.submod = (SubmoduleElement *)createElementWithTag(NED_SUBMODULE, ps.submods);
                  ps.submod->setName(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc)));
                  addVector(ps.submod, "vector-size",(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval));
                }
    break;

  case 268:
#line 1113 "ned2.y"
    { ((*yyvalp)) = NULL; }
    break;

  case 269:
#line 1115 "ned2.y"
    { ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval); }
    break;

  case 272:
#line 1128 "ned2.y"
    {
                  assertNonEmpty(ps.blockscope);
                  ps.conns = (ConnectionsElement *)createElementWithTag(NED_CONNECTIONS, ps.blockscope.top());
                  ps.conns->setAllowUnconnected(true);
                  storeBannerAndRightComments(ps.conns,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yyloc));
                }
    break;

  case 273:
#line 1135 "ned2.y"
    {
                  storePos(ps.conns, (*yylocp));
                }
    break;

  case 274:
#line 1139 "ned2.y"
    {
                  assertNonEmpty(ps.blockscope);
                  ps.conns = (ConnectionsElement *)createElementWithTag(NED_CONNECTIONS, ps.blockscope.top());
                  storeBannerAndRightComments(ps.conns,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc));
                }
    break;

  case 275:
#line 1145 "ned2.y"
    {
                  storePos(ps.conns, (*yylocp));
                }
    break;

  case 281:
#line 1163 "ned2.y"
    {
                  ps.chanspec = (ChannelSpecElement *)ps.conn->getFirstChildWithTag(NED_CHANNEL_SPEC);
                  if (ps.chanspec)
                      ps.conn->appendChild(ps.conn->removeChild(ps.chanspec)); // move channelspec to conform DTD
                  if ((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval)) {
                      transferChildren((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval), ps.conn);
                      delete (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval);
                  }
                  storePos(ps.conn, (*yylocp));
                  storeBannerAndRightComments(ps.conn,(*yylocp));
                }
    break;

  case 282:
#line 1178 "ned2.y"
    {
                  if (ps.inConnGroup)
                      np->getErrors()->addError(ps.conngroup,"nested connection groups are not allowed");
                  ps.conngroup = (ConnectionGroupElement *)createElementWithTag(NED_CONNECTION_GROUP, ps.conns);
                  if ((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval)) {
                      // for's and if's were collected in a temporary UnknownElement, put them under conngroup now
                      transferChildren((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval), ps.conngroup);
                      delete (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval);
                  }
                  ps.inConnGroup = true;
                  storeBannerAndRightComments(ps.conngroup,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc));
                }
    break;

  case 283:
#line 1191 "ned2.y"
    {
                  ps.inConnGroup = false;
                  storePos(ps.conngroup,(*yylocp));
                  storeTrailingComment(ps.conngroup,(*yylocp));
                }
    break;

  case 284:
#line 1200 "ned2.y"
    { ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval); }
    break;

  case 285:
#line 1202 "ned2.y"
    { ((*yyvalp)) = NULL; }
    break;

  case 286:
#line 1207 "ned2.y"
    {
                  (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval)->appendChild((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval));
                  ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval);
                }
    break;

  case 287:
#line 1212 "ned2.y"
    {
                  ((*yyvalp)) = new UnknownElement();
                  ((*yyvalp))->appendChild((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval));
                }
    break;

  case 290:
#line 1225 "ned2.y"
    {
                  ps.loop = (LoopElement *)createElementWithTag(NED_LOOP);
                  ps.loop->setParamName( toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yyloc)) );
                  addExpression(ps.loop, "from-value",(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval));
                  addExpression(ps.loop, "to-value",(((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval));
                  storePos(ps.loop, (*yylocp));
                  ((*yyvalp)) = ps.loop;
                }
    break;

  case 291:
#line 1240 "ned2.y"
    {
                  ps.conn->setArrowDirection(NED_ARROWDIR_L2R);
                }
    break;

  case 292:
#line 1244 "ned2.y"
    {
                  ps.conn->setArrowDirection(NED_ARROWDIR_L2R);
                }
    break;

  case 293:
#line 1248 "ned2.y"
    {
                  swapConnection(ps.conn);
                  ps.conn->setArrowDirection(NED_ARROWDIR_R2L);
                }
    break;

  case 294:
#line 1253 "ned2.y"
    {
                  swapConnection(ps.conn);
                  ps.conn->setArrowDirection(NED_ARROWDIR_R2L);
                }
    break;

  case 295:
#line 1258 "ned2.y"
    {
                  ps.conn->setArrowDirection(NED_ARROWDIR_BIDIR);
                }
    break;

  case 296:
#line 1262 "ned2.y"
    {
                  ps.conn->setArrowDirection(NED_ARROWDIR_BIDIR);
                }
    break;

  case 299:
#line 1274 "ned2.y"
    {
                  ps.conn = (ConnectionElement *)createElementWithTag(NED_CONNECTION, ps.inConnGroup ? (NEDElement*)ps.conngroup : (NEDElement*)ps.conns );
                  ps.conn->setSrcModule( toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc)) );
                  addVector(ps.conn, "src-module-index",(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval));
                }
    break;

  case 300:
#line 1280 "ned2.y"
    {
                  ps.conn = (ConnectionElement *)createElementWithTag(NED_CONNECTION, ps.inConnGroup ? (NEDElement*)ps.conngroup : (NEDElement*)ps.conns );
                  ps.conn->setSrcModule( toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)) );
                }
    break;

  case 301:
#line 1288 "ned2.y"
    {
                  ps.conn->setSrcGate( toString( (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc)) );
                  ps.conn->setSrcGateSubg(ps.subgate);
                }
    break;

  case 302:
#line 1293 "ned2.y"
    {
                  ps.conn->setSrcGate( toString( (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc)) );
                  ps.conn->setSrcGateSubg(ps.subgate);
                  addVector(ps.conn, "src-gate-index",(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval));
                }
    break;

  case 303:
#line 1299 "ned2.y"
    {
                  ps.conn->setSrcGate( toString( (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc)) );
                  ps.conn->setSrcGateSubg(ps.subgate);
                  ps.conn->setSrcGatePlusplus(true);
                }
    break;

  case 304:
#line 1308 "ned2.y"
    {
                  ps.conn = (ConnectionElement *)createElementWithTag(NED_CONNECTION, ps.inConnGroup ? (NEDElement*)ps.conngroup : (NEDElement*)ps.conns );
                  ps.conn->setSrcModule("");
                  ps.conn->setSrcGate(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc)));
                  ps.conn->setSrcGateSubg(ps.subgate);
                }
    break;

  case 305:
#line 1315 "ned2.y"
    {
                  ps.conn = (ConnectionElement *)createElementWithTag(NED_CONNECTION, ps.inConnGroup ? (NEDElement*)ps.conngroup : (NEDElement*)ps.conns );
                  ps.conn->setSrcModule("");
                  ps.conn->setSrcGate(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc)));
                  ps.conn->setSrcGateSubg(ps.subgate);
                  addVector(ps.conn, "src-gate-index",(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval));
                }
    break;

  case 306:
#line 1323 "ned2.y"
    {
                  ps.conn = (ConnectionElement *)createElementWithTag(NED_CONNECTION, ps.inConnGroup ? (NEDElement*)ps.conngroup : (NEDElement*)ps.conns );
                  ps.conn->setSrcModule("");
                  ps.conn->setSrcGate(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc)));
                  ps.conn->setSrcGateSubg(ps.subgate);
                  ps.conn->setSrcGatePlusplus(true);
                }
    break;

  case 309:
#line 1339 "ned2.y"
    {
                  ps.conn->setDestModule( toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)) );
                }
    break;

  case 310:
#line 1343 "ned2.y"
    {
                  ps.conn->setDestModule( toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc)) );
                  addVector(ps.conn, "dest-module-index",(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval));
                }
    break;

  case 311:
#line 1351 "ned2.y"
    {
                  ps.conn->setDestGate( toString( (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                }
    break;

  case 312:
#line 1356 "ned2.y"
    {
                  ps.conn->setDestGate( toString( (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                  addVector(ps.conn, "dest-gate-index",(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval));
                }
    break;

  case 313:
#line 1362 "ned2.y"
    {
                  ps.conn->setDestGate( toString( (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                  ps.conn->setDestGatePlusplus(true);
                }
    break;

  case 314:
#line 1371 "ned2.y"
    {
                  ps.conn->setDestGate( toString( (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                }
    break;

  case 315:
#line 1376 "ned2.y"
    {
                  ps.conn->setDestGate( toString( (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                  addVector(ps.conn, "dest-gate-index",(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval));
                }
    break;

  case 316:
#line 1382 "ned2.y"
    {
                  ps.conn->setDestGate( toString( (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                  ps.conn->setDestGatePlusplus(true);
                }
    break;

  case 317:
#line 1391 "ned2.y"
    {
                  const char *s = toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc));
                  if (!strcmp(s,"i"))
                      ps.subgate = NED_SUBGATE_I;
                  else if (!strcmp(s,"o"))
                      ps.subgate = NED_SUBGATE_O;
                  else
                       np->getErrors()->addError(currentLocation(), "invalid subgate spec `%s', must be `i' or `o'", toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc)));
                }
    break;

  case 318:
#line 1401 "ned2.y"
    { ps.subgate = NED_SUBGATE_NONE; }
    break;

  case 319:
#line 1406 "ned2.y"
    { storePos(ps.chanspec, (*yylocp)); }
    break;

  case 320:
#line 1408 "ned2.y"
    {
                  ps.parameters = (ParametersElement *)createElementWithTag(NED_PARAMETERS, ps.chanspec);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
    break;

  case 321:
#line 1415 "ned2.y"
    {
                  ps.propertyscope.pop();
                  storePos(ps.chanspec, (*yylocp));
                }
    break;

  case 322:
#line 1424 "ned2.y"
    {
                  ps.chanspec = (ChannelSpecElement *)createElementWithTag(NED_CHANNEL_SPEC, ps.conn);
                }
    break;

  case 323:
#line 1428 "ned2.y"
    {
                  ps.chanspec = (ChannelSpecElement *)createElementWithTag(NED_CHANNEL_SPEC, ps.conn);
                  ps.chanspec->setType(removeSpaces((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)).c_str());
                }
    break;

  case 324:
#line 1433 "ned2.y"
    {
                  ps.chanspec = (ChannelSpecElement *)createElementWithTag(NED_CHANNEL_SPEC, ps.conn);
                  addLikeParam(ps.chanspec, "like-param", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval));
                  ps.chanspec->setLikeType(removeSpaces((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yyloc)).c_str());
                }
    break;

  case 325:
#line 1445 "ned2.y"
    {
                  ps.condition = (ConditionElement *)createElementWithTag(NED_CONDITION);
                  addExpression(ps.condition, "condition",(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval));
                  storePos(ps.condition, (*yylocp));
                  ((*yyvalp)) = ps.condition;
                }
    break;

  case 326:
#line 1458 "ned2.y"
    { ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval); }
    break;

  case 327:
#line 1464 "ned2.y"
    {
                  if (np->getParseExpressionsFlag()) ((*yyvalp)) = createExpression((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval));
                }
    break;

  case 328:
#line 1468 "ned2.y"
    {
                  if (np->getParseExpressionsFlag()) ((*yyvalp)) = createExpression((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval));
                }
    break;

  case 329:
#line 1479 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction("xmldoc", (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval)); }
    break;

  case 330:
#line 1481 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction("xmldoc", (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval)); }
    break;

  case 332:
#line 1487 "ned2.y"
    { ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval); }
    break;

  case 333:
#line 1489 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction("const", (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval)); }
    break;

  case 334:
#line 1492 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("+", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 335:
#line 1494 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("-", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 336:
#line 1496 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("*", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 337:
#line 1498 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("/", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 338:
#line 1500 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("%", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 339:
#line 1502 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("^", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 340:
#line 1506 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = unaryMinus((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval)); }
    break;

  case 341:
#line 1509 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("==", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 342:
#line 1511 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("!=", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 343:
#line 1513 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(">", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 344:
#line 1515 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(">=", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 345:
#line 1517 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("<", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 346:
#line 1519 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("<=", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 347:
#line 1522 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("&&", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 348:
#line 1524 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("||", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 349:
#line 1526 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("##", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 350:
#line 1530 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("!", (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval)); }
    break;

  case 351:
#line 1533 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("&", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 352:
#line 1535 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("|", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 353:
#line 1537 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("#", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 354:
#line 1541 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("~", (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval)); }
    break;

  case 355:
#line 1543 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("<<", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 356:
#line 1545 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(">>", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 357:
#line 1547 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("?:", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval)); }
    break;

  case 358:
#line 1550 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval)); }
    break;

  case 359:
#line 1552 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval)); }
    break;

  case 360:
#line 1554 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval)); }
    break;

  case 361:
#line 1557 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc))); }
    break;

  case 362:
#line 1559 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval)); }
    break;

  case 363:
#line 1561 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval)); }
    break;

  case 364:
#line 1563 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (8))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (8))].yystate.yysemantics.yysval)); }
    break;

  case 365:
#line 1565 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (10))].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (10))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (10))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (10))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((9) - (10))].yystate.yysemantics.yysval)); }
    break;

  case 366:
#line 1567 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (12))].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (12))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (12))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (12))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((9) - (12))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((11) - (12))].yystate.yysemantics.yysval)); }
    break;

  case 367:
#line 1569 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (14))].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (14))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (14))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (14))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((9) - (14))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((11) - (14))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((13) - (14))].yystate.yysemantics.yysval)); }
    break;

  case 368:
#line 1571 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (16))].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (16))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (16))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (16))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((9) - (16))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((11) - (16))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((13) - (16))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((15) - (16))].yystate.yysemantics.yysval)); }
    break;

  case 369:
#line 1573 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (18))].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (18))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (18))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (18))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((9) - (18))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((11) - (18))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((13) - (18))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((15) - (18))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((17) - (18))].yystate.yysemantics.yysval)); }
    break;

  case 370:
#line 1575 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (20))].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (20))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (20))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (20))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((9) - (20))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((11) - (20))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((13) - (20))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((15) - (20))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((17) - (20))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((19) - (20))].yystate.yysemantics.yysval)); }
    break;

  case 371:
#line 1577 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (22))].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (22))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (22))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (22))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((9) - (22))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((11) - (22))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((13) - (22))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((15) - (22))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((17) - (22))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((19) - (22))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((21) - (22))].yystate.yysemantics.yysval)); }
    break;

  case 375:
#line 1589 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createIdent((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)); }
    break;

  case 376:
#line 1591 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createIdent((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yyloc), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc)); }
    break;

  case 377:
#line 1593 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createIdent((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yyloc), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc)); }
    break;

  case 378:
#line 1595 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createIdent((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yyloc), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yyloc), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval)); }
    break;

  case 379:
#line 1600 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction("index"); }
    break;

  case 380:
#line 1602 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction("index"); }
    break;

  case 381:
#line 1604 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction("sizeof", (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval)); }
    break;

  case 385:
#line 1615 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createStringLiteral((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)); }
    break;

  case 386:
#line 1620 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createLiteral(NED_CONST_BOOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)); }
    break;

  case 387:
#line 1622 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createLiteral(NED_CONST_BOOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)); }
    break;

  case 388:
#line 1627 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createLiteral(NED_CONST_INT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)); }
    break;

  case 389:
#line 1629 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createLiteral(NED_CONST_DOUBLE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)); }
    break;

  case 390:
#line 1631 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createQuantityLiteral((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)); }
    break;


/* Line 930 of glr.c.  */
#line 3488 "ned2.tab.cc"
      default: break;
    }

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


/*ARGSUSED*/ static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YYUSE (yy0);
  YYUSE (yy1);

  switch (yyn)
    {
      
      default: break;
    }
}

			      /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
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

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yystos[yys->yylrState],
		&yys->yysemantics.yysval, &yys->yyloc);
  else
    {
#if YYDEBUG
      if (yydebug)
	{
	  if (yys->yysemantics.yyfirstVal)
	    YYFPRINTF (stderr, "%s unresolved ", yymsg);
	  else
	    YYFPRINTF (stderr, "%s incomplete ", yymsg);
	  yy_symbol_print (stderr, yystos[yys->yylrState],
			   NULL, &yys->yyloc);
	  YYFPRINTF (stderr, "\n");
	}
#endif

      if (yys->yysemantics.yyfirstVal)
	{
	  yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
	  yyGLRState *yyrh;
	  int yyn;
	  for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
	       yyn > 0;
	       yyrh = yyrh->yypred, yyn -= 1)
	    yydestroyGLRState (yymsg, yyrh);
	}
    }
}

/** Left-hand-side symbol for rule #RULE.  */
static inline yySymbol
yylhsNonterm (yyRuleNum yyrule)
{
  return yyr1[yyrule];
}

#define yyis_pact_ninf(yystate) \
  ((yystate) == YYPACT_NINF)

/** True iff LR state STATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yyStateNum yystate)
{
  return yyis_pact_ninf (yypact[yystate]);
}

/** The default reduction for STATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yyStateNum yystate)
{
  return yydefact[yystate];
}

#define yyis_table_ninf(yytable_value) \
  YYID (0)

/** Set *YYACTION to the action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *CONFLICTS to a pointer into yyconfl to 0-terminated list of
 *  conflicting reductions.
 */
static inline void
yygetLRActions (yyStateNum yystate, int yytoken,
		int* yyaction, const short int** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyaction = -yydefact[yystate];
      *yyconflicts = yyconfl;
    }
  else if (! yyis_table_ninf (yytable[yyindex]))
    {
      *yyaction = yytable[yyindex];
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
  else
    {
      *yyaction = 0;
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
}

static inline yyStateNum
yyLRgotoState (yyStateNum yystate, yySymbol yylhs)
{
  int yyr;
  yyr = yypgoto[yylhs - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yylhs - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

				/* GLRStates */

/** Return a fresh GLRStackItem.  Callers should call
 * YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 * headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  RULENUM on the semantic values in RHS to the list of
 *  alternative actions for STATE.  Assumes that RHS comes from
 *  stack #K of *STACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, size_t yyk, yyGLRState* yystate,
		     yyGLRState* rhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  yynewOption->yystate = rhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
      yynewOption->yyloc = yylloc;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

				/* GLRStacks */

/** Initialize SET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates = (yyGLRState**) YYMALLOC (16 * sizeof yyset->yystates[0]);
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = NULL;
  yyset->yylookaheadNeeds =
    (yybool*) YYMALLOC (16 * sizeof yyset->yylookaheadNeeds[0]);
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize STACK to a single empty stack, with total maximum
 *  capacity for all stacks of SIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, size_t yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems =
    (yyGLRStackItem*) YYMALLOC (yysize * sizeof yystackp->yynextFree[0]);
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = NULL;
  yystackp->yylastDeleted = NULL;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS,YYTOITEMS,YYX,YYTYPE) \
  &((YYTOITEMS) - ((YYFROMITEMS) - (yyGLRStackItem*) (YYX)))->YYTYPE

/** If STACK is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  size_t yysize, yynewSize;
  size_t yyn;
  yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems = (yyGLRStackItem*) YYMALLOC (yynewSize * sizeof yynewItems[0]);
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*(yybool *) yyp0)
	{
	  yyGLRState* yys0 = &yyp0->yystate;
	  yyGLRState* yys1 = &yyp1->yystate;
	  if (yys0->yypred != NULL)
	    yys1->yypred =
	      YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
	  if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != NULL)
	    yys1->yysemantics.yyfirstVal =
	      YYRELOC(yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
	}
      else
	{
	  yySemanticOption* yyv0 = &yyp0->yyoption;
	  yySemanticOption* yyv1 = &yyp1->yyoption;
	  if (yyv0->yystate != NULL)
	    yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
	  if (yyv0->yynext != NULL)
	    yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
	}
    }
  if (yystackp->yysplitPoint != NULL)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
				 yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != NULL)
      yystackp->yytops.yystates[yyn] =
	YYRELOC (yystackp->yyitems, yynewItems,
		 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that S is a GLRState somewhere on STACK, update the
 *  splitpoint of STACK, if needed, so that it is at least as deep as
 *  S.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != NULL && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #K in STACK.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yytops.yystates[yyk] != NULL)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = NULL;
}

/** Undelete the last stack that was marked as deleted.  Can only be
    done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == NULL || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YYDPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = NULL;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  size_t yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == NULL)
	{
	  if (yyi == yyj)
	    {
	      YYDPRINTF ((stderr, "Removing dead stacks.\n"));
	    }
	  yystackp->yytops.yysize -= 1;
	}
      else
	{
	  yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
	  /* In the current implementation, it's unnecessary to copy
	     yystackp->yytops.yylookaheadNeeds[yyi] since, after
	     yyremoveDeletes returns, the parser immediately either enters
	     deterministic operation or shifts a token.  However, it doesn't
	     hurt, and the code might evolve to need it.  */
	  yystackp->yytops.yylookaheadNeeds[yyj] =
	    yystackp->yytops.yylookaheadNeeds[yyi];
	  if (yyj != yyi)
	    {
	      YYDPRINTF ((stderr, "Rename stack %lu -> %lu.\n",
			  (unsigned long int) yyi, (unsigned long int) yyj));
	    }
	  yyj += 1;
	}
      yyi += 1;
    }
}

/** Shift to a new state on stack #K of STACK, corresponding to LR state
 * LRSTATE, at input position POSN, with (resolved) semantic value SVAL.  */
static inline void
yyglrShift (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
	    size_t yyposn,
	    YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yysval = *yyvalp;
  yynewState->yyloc = *yylocp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #K of YYSTACK, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
		 size_t yyposn, yyGLRState* rhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = NULL;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, rhs, yyrule);
}

/** Pop the symbols consumed by reduction #RULE from the top of stack
 *  #K of STACK, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *VALP to the resulting value,
 *  and *LOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
	    YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == NULL)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* rhs = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
      YYASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      return yyuserAction (yyrule, yynrhs, rhs,
			   yyvalp, yylocp, yystackp);
    }
  else
    {
      /* At present, doAction is never called in nondeterministic
       * mode, so this branch is never taken.  It is here in
       * anticipation of a future feature that will allow immediate
       * evaluation of selected actions in nondeterministic mode.  */
      int yyi;
      yyGLRState* yys;
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
	= yystackp->yytops.yystates[yyk];
      if (yynrhs == 0)
	/* Set default location.  */
	yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yys->yyloc;
      for (yyi = 0; yyi < yynrhs; yyi += 1)
	{
	  yys = yys->yypred;
	  YYASSERT (yys);
	}
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
			   yyvalp, yylocp, yystackp);
    }
}

#if !YYDEBUG
# define YY_REDUCE_PRINT(Args)
#else
# define YY_REDUCE_PRINT(Args)		\
do {					\
  if (yydebug)				\
    yy_reduce_print Args;		\
} while (YYID (0))

/*----------------------------------------------------------.
| Report that the RULE is going to be reduced on stack #K.  |
`----------------------------------------------------------*/

/*ARGSUSED*/ static inline void
yy_reduce_print (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
		 YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  int yynrhs = yyrhsLength (yyrule);
  yybool yynormal __attribute__ ((__unused__)) =
    (yystackp->yysplitPoint == NULL);
  yyGLRStackItem* yyvsp = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
  int yylow = 1;
  int yyi;
  YYUSE (yyvalp);
  YYUSE (yylocp);
  YYFPRINTF (stderr, "Reducing stack %lu by rule %d (line %lu):\n",
	     (unsigned long int) yyk, yyrule - 1,
	     (unsigned long int) yyrline[yyrule]);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(((yyGLRStackItem const *)yyvsp)[YYFILL ((yyi + 1) - (yynrhs))].yystate.yysemantics.yysval)
		       , &(((yyGLRStackItem const *)yyvsp)[YYFILL ((yyi + 1) - (yynrhs))].yystate.yyloc)		       );
      fprintf (stderr, "\n");
    }
}
#endif

/** Pop items off stack #K of STACK according to grammar rule RULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with RULE and store its value with the
 *  newly pushed state, if FORCEEVAL or if STACK is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #K from
 *  the STACK.  In this case, the (necessarily deferred) semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
	     yybool yyforceEval)
{
  size_t yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == NULL)
    {
      YYSTYPE yysval;
      YYLTYPE yyloc;

      YY_REDUCE_PRINT ((yystackp, yyk, yyrule, &yysval, &yyloc));
      YYCHK (yydoAction (yystackp, yyk, yyrule, &yysval,
			 &yyloc));
      YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyrule], &yysval, &yyloc);
      yyglrShift (yystackp, yyk,
		  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
				 yylhsNonterm (yyrule)),
		  yyposn, &yysval, &yyloc);
    }
  else
    {
      size_t yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yyStateNum yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
	   0 < yyn; yyn -= 1)
	{
	  yys = yys->yypred;
	  YYASSERT (yys);
	}
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YYDPRINTF ((stderr,
		  "Reduced stack %lu by rule #%d; action deferred.  Now in state %d.\n",
		  (unsigned long int) yyk, yyrule - 1, yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
	if (yyi != yyk && yystackp->yytops.yystates[yyi] != NULL)
	  {
	    yyGLRState* yyp, *yysplit = yystackp->yysplitPoint;
	    yyp = yystackp->yytops.yystates[yyi];
	    while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
	      {
		if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
		  {
		    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
		    yymarkStackDeleted (yystackp, yyk);
		    YYDPRINTF ((stderr, "Merging stack %lu into stack %lu.\n",
				(unsigned long int) yyk,
				(unsigned long int) yyi));
		    return yyok;
		  }
		yyp = yyp->yypred;
	      }
	  }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static size_t
yysplitStack (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yysplitPoint == NULL)
    {
      YYASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yysize >= yystackp->yytops.yycapacity)
    {
      yyGLRState** yynewStates;
      yybool* yynewLookaheadNeeds;

      yynewStates = NULL;

      if (yystackp->yytops.yycapacity
	  > (YYSIZEMAX / (2 * sizeof yynewStates[0])))
	yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      yynewStates =
	(yyGLRState**) YYREALLOC (yystackp->yytops.yystates,
				  (yystackp->yytops.yycapacity
				   * sizeof yynewStates[0]));
      if (yynewStates == NULL)
	yyMemoryExhausted (yystackp);
      yystackp->yytops.yystates = yynewStates;

      yynewLookaheadNeeds =
	(yybool*) YYREALLOC (yystackp->yytops.yylookaheadNeeds,
			     (yystackp->yytops.yycapacity
			      * sizeof yynewLookaheadNeeds[0]));
      if (yynewLookaheadNeeds == NULL)
	yyMemoryExhausted (yystackp);
      yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize-1;
}

/** True iff Y0 and Y1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
	   yyn = yyrhsLength (yyy0->yyrule);
	   yyn > 0;
	   yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
	if (yys0->yyposn != yys1->yyposn)
	  return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (Y0,Y1), destructively merge the
 *  alternative semantic values for the RHS-symbols of Y1 and Y0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       yyn > 0;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
	break;
      else if (yys0->yyresolved)
	{
	  yys1->yyresolved = yytrue;
	  yys1->yysemantics.yysval = yys0->yysemantics.yysval;
	}
      else if (yys1->yyresolved)
	{
	  yys0->yyresolved = yytrue;
	  yys0->yysemantics.yysval = yys1->yysemantics.yysval;
	}
      else
	{
	  yySemanticOption** yyz0p;
	  yySemanticOption* yyz1;
	  yyz0p = &yys0->yysemantics.yyfirstVal;
	  yyz1 = yys1->yysemantics.yyfirstVal;
	  while (YYID (yytrue))
	    {
	      if (yyz1 == *yyz0p || yyz1 == NULL)
		break;
	      else if (*yyz0p == NULL)
		{
		  *yyz0p = yyz1;
		  break;
		}
	      else if (*yyz0p < yyz1)
		{
		  yySemanticOption* yyz = *yyz0p;
		  *yyz0p = yyz1;
		  yyz1 = yyz1->yynext;
		  (*yyz0p)->yynext = yyz;
		}
	      yyz0p = &(*yyz0p)->yynext;
	    }
	  yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
	}
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
	return 0;
      else
	return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG yyresolveValue (yyGLRState* yys,
				   yyGLRStack* yystackp);


/** Resolve the previous N states starting at and including state S.  If result
 *  != yyok, some states may have been left unresolved possibly with empty
 *  semantic option chains.  Regardless of whether result = yyok, each state
 *  has been left with consistent data so that yydestroyGLRState can be invoked
 *  if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
		 yyGLRStack* yystackp)
{
  if (0 < yyn)
    {
      YYASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp));
      if (! yys->yyresolved)
	YYCHK (yyresolveValue (yys, yystackp));
    }
  return yyok;
}

/** Resolve the states for the RHS of OPT, perform its user action, and return
 *  the semantic value and location.  Regardless of whether result = yyok, all
 *  RHS states have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
		 YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs;
  int yychar_current;
  YYSTYPE yylval_current;
  YYLTYPE yylloc_current;
  YYRESULTTAG yyflag;

  yynrhs = yyrhsLength (yyopt->yyrule);
  yyflag = yyresolveStates (yyopt->yystate, yynrhs, yystackp);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
	yydestroyGLRState ("Cleanup: popping", yys);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  if (yynrhs == 0)
    /* Set default location.  */
    yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yyopt->yystate->yyloc;
  yychar_current = yychar;
  yylval_current = yylval;
  yylloc_current = yylloc;
  yychar = yyopt->yyrawchar;
  yylval = yyopt->yyval;
  yylloc = yyopt->yyloc;
  yyflag = yyuserAction (yyopt->yyrule, yynrhs,
			   yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
			   yyvalp, yylocp, yystackp);
  yychar = yychar_current;
  yylval = yylval_current;
  yylloc = yylloc_current;
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == NULL)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, empty>\n",
	       yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
	       yyx->yyrule - 1);
  else
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, tokens %lu .. %lu>\n",
	       yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
	       yyx->yyrule - 1, (unsigned long int) (yys->yyposn + 1),
	       (unsigned long int) yyx->yystate->yyposn);
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
	{
	  if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
	    YYFPRINTF (stderr, "%*s%s <empty>\n", yyindent+2, "",
		       yytokenName (yyrhs[yyprhs[yyx->yyrule]+yyi-1]));
	  else
	    YYFPRINTF (stderr, "%*s%s <tokens %lu .. %lu>\n", yyindent+2, "",
		       yytokenName (yyrhs[yyprhs[yyx->yyrule]+yyi-1]),
		       (unsigned long int) (yystates[yyi - 1]->yyposn + 1),
		       (unsigned long int) yystates[yyi]->yyposn);
	}
      else
	yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

/*ARGSUSED*/ static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
		   yySemanticOption* yyx1)
{
  YYUSE (yyx0);
  YYUSE (yyx1);

#if YYDEBUG
  YYFPRINTF (stderr, "Ambiguity detected.\n");
  YYFPRINTF (stderr, "Option 1,\n");
  yyreportTree (yyx0, 2);
  YYFPRINTF (stderr, "\nOption 2,\n");
  yyreportTree (yyx1, 2);
  YYFPRINTF (stderr, "\n");
#endif

  yyerror (YY_("syntax is ambiguous"));
  return yyabort;
}

/** Starting at and including state S1, resolve the location for each of the
 *  previous N1 states that is unresolved.  The first semantic option of a state
 *  is always chosen.  */
static void
yyresolveLocations (yyGLRState* yys1, int yyn1,
		    yyGLRStack *yystackp)
{
  if (0 < yyn1)
    {
      yyresolveLocations (yys1->yypred, yyn1 - 1, yystackp);
      if (!yys1->yyresolved)
	{
	  yySemanticOption *yyoption;
	  yyGLRStackItem yyrhsloc[1 + YYMAXRHS];
	  int yynrhs;
	  int yychar_current;
	  YYSTYPE yylval_current;
	  YYLTYPE yylloc_current;
	  yyoption = yys1->yysemantics.yyfirstVal;
	  YYASSERT (yyoption != NULL);
	  yynrhs = yyrhsLength (yyoption->yyrule);
	  if (yynrhs > 0)
	    {
	      yyGLRState *yys;
	      int yyn;
	      yyresolveLocations (yyoption->yystate, yynrhs,
				  yystackp);
	      for (yys = yyoption->yystate, yyn = yynrhs;
		   yyn > 0;
		   yys = yys->yypred, yyn -= 1)
		yyrhsloc[yyn].yystate.yyloc = yys->yyloc;
	    }
	  else
	    {
	      /* Both yyresolveAction and yyresolveLocations traverse the GSS
		 in reverse rightmost order.  It is only necessary to invoke
		 yyresolveLocations on a subforest for which yyresolveAction
		 would have been invoked next had an ambiguity not been
		 detected.  Thus the location of the previous state (but not
		 necessarily the previous state itself) is guaranteed to be
		 resolved already.  */
	      yyGLRState *yyprevious = yyoption->yystate;
	      yyrhsloc[0].yystate.yyloc = yyprevious->yyloc;
	    }
	  yychar_current = yychar;
	  yylval_current = yylval;
	  yylloc_current = yylloc;
	  yychar = yyoption->yyrawchar;
	  yylval = yyoption->yyval;
	  yylloc = yyoption->yyloc;
	  YYLLOC_DEFAULT ((yys1->yyloc), yyrhsloc, yynrhs);
	  yychar = yychar_current;
	  yylval = yylval_current;
	  yylloc = yylloc_current;
	}
    }
}

/** Resolve the ambiguity represented in state S, perform the indicated
 *  actions, and set the semantic value of S.  If result != yyok, the chain of
 *  semantic options in S has been cleared instead or it has been left
 *  unmodified except that redundant options may have been removed.  Regardless
 *  of whether result = yyok, S has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest;
  yySemanticOption** yypp;
  yybool yymerge;
  YYSTYPE yysval;
  YYRESULTTAG yyflag;
  YYLTYPE *yylocp = &yys->yyloc;

  yybest = yyoptionList;
  yymerge = yyfalse;
  for (yypp = &yyoptionList->yynext; *yypp != NULL; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
	{
	  yymergeOptionSets (yybest, yyp);
	  *yypp = yyp->yynext;
	}
      else
	{
	  switch (yypreference (yybest, yyp))
	    {
	    case 0:
	      yyresolveLocations (yys, 1, yystackp);
	      return yyreportAmbiguity (yybest, yyp);
	      break;
	    case 1:
	      yymerge = yytrue;
	      break;
	    case 2:
	      break;
	    case 3:
	      yybest = yyp;
	      yymerge = yyfalse;
	      break;
	    default:
	      /* This cannot happen so it is not worth a YYASSERT (yyfalse),
		 but some compilers complain if the default case is
		 omitted.  */
	      break;
	    }
	  yypp = &yyp->yynext;
	}
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yysval,
				yylocp);
      if (yyflag == yyok)
	for (yyp = yybest->yynext; yyp != NULL; yyp = yyp->yynext)
	  {
	    if (yyprec == yydprec[yyp->yyrule])
	      {
		YYSTYPE yysval_other;
		YYLTYPE yydummy;
		yyflag = yyresolveAction (yyp, yystackp, &yysval_other,
					  &yydummy);
		if (yyflag != yyok)
		  {
		    yydestruct ("Cleanup: discarding incompletely merged value for",
				yystos[yys->yylrState],
				&yysval, yylocp);
		    break;
		  }
		yyuserMerge (yymerger[yyp->yyrule], &yysval, &yysval_other);
	      }
	  }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yysval, yylocp);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yysval = yysval;
    }
  else
    yys->yysemantics.yyfirstVal = NULL;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp)
{
  if (yystackp->yysplitPoint != NULL)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
	   yys != yystackp->yysplitPoint;
	   yys = yys->yypred, yyn += 1)
	continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
			     ));
    }
  return yyok;
}

static void
yycompressStack (yyGLRStack* yystackp)
{
  yyGLRState* yyp, *yyq, *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == NULL)
    return;

  for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = NULL;
       yyp != yystackp->yysplitPoint;
       yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = ((yyGLRStackItem*) yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = NULL;
  yystackp->yylastDeleted = NULL;

  while (yyr != NULL)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, size_t yyk,
		   size_t yyposn)
{
  int yyaction;
  const short int* yyconflicts;
  yyRuleNum yyrule;

  while (yystackp->yytops.yystates[yyk] != NULL)
    {
      yyStateNum yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YYDPRINTF ((stderr, "Stack %lu Entering state %d\n",
		  (unsigned long int) yyk, yystate));

      YYASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
	{
	  yyrule = yydefaultAction (yystate);
	  if (yyrule == 0)
	    {
	      YYDPRINTF ((stderr, "Stack %lu dies.\n",
			  (unsigned long int) yyk));
	      yymarkStackDeleted (yystackp, yyk);
	      return yyok;
	    }
	  YYCHK (yyglrReduce (yystackp, yyk, yyrule, yyfalse));
	}
      else
	{
	  yySymbol yytoken;
	  yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;
	  if (yychar == YYEMPTY)
	    {
	      YYDPRINTF ((stderr, "Reading a token: "));
	      yychar = YYLEX;
	      yytoken = YYTRANSLATE (yychar);
	      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
	    }
	  else
	    yytoken = YYTRANSLATE (yychar);
	  yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);

	  while (*yyconflicts != 0)
	    {
	      size_t yynewStack = yysplitStack (yystackp, yyk);
	      YYDPRINTF ((stderr, "Splitting off stack %lu from %lu.\n",
			  (unsigned long int) yynewStack,
			  (unsigned long int) yyk));
	      YYCHK (yyglrReduce (yystackp, yynewStack,
				  *yyconflicts, yyfalse));
	      YYCHK (yyprocessOneStack (yystackp, yynewStack,
					yyposn));
	      yyconflicts += 1;
	    }

	  if (yyisShiftAction (yyaction))
	    break;
	  else if (yyisErrorAction (yyaction))
	    {
	      YYDPRINTF ((stderr, "Stack %lu dies.\n",
			  (unsigned long int) yyk));
	      yymarkStackDeleted (yystackp, yyk);
	      break;
	    }
	  else
	    YYCHK (yyglrReduce (yystackp, yyk, -yyaction,
				yyfalse));
	}
    }
  return yyok;
}

/*ARGSUSED*/ static void
yyreportSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState == 0)
    {
#if YYERROR_VERBOSE
      int yyn;
      yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
      if (YYPACT_NINF < yyn && yyn <= YYLAST)
	{
	  yySymbol yytoken = YYTRANSLATE (yychar);
	  size_t yysize0 = yytnamerr (NULL, yytokenName (yytoken));
	  size_t yysize = yysize0;
	  size_t yysize1;
	  yybool yysize_overflow = yyfalse;
	  char* yymsg = NULL;
	  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;
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

	  yyarg[0] = yytokenName (yytoken);
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
		yyarg[yycount++] = yytokenName (yyx);
		yysize1 = yysize + yytnamerr (NULL, yytokenName (yyx));
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + strlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow)
	    yymsg = (char *) YYMALLOC (yysize);

	  if (yymsg)
	    {
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
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
	      yyerror (yymsg);
	      YYFREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      yyMemoryExhausted (yystackp);
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
      yynerrs += 1;
    }
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the look-ahead.  */
/*ARGSUSED*/ static void
yyrecoverSyntaxError (yyGLRStack* yystackp)
{
  size_t yyk;
  int yyj;

  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (YYID (yytrue))
      {
	yySymbol yytoken;
	if (yychar == YYEOF)
	  yyFail (yystackp, NULL);
	if (yychar != YYEMPTY)
	  {
	    /* We throw away the lookahead, but the error range
	       of the shifted error token must take it into account.  */
	    yyGLRState *yys = yystackp->yytops.yystates[0];
	    yyGLRStackItem yyerror_range[3];
	    yyerror_range[1].yystate.yyloc = yys->yyloc;
	    yyerror_range[2].yystate.yyloc = yylloc;
	    YYLLOC_DEFAULT ((yys->yyloc), yyerror_range, 2);
	    yytoken = YYTRANSLATE (yychar);
	    yydestruct ("Error: discarding",
			yytoken, &yylval, &yylloc);
	  }
	YYDPRINTF ((stderr, "Reading a token: "));
	yychar = YYLEX;
	yytoken = YYTRANSLATE (yychar);
	YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
	yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
	if (yyis_pact_ninf (yyj))
	  return;
	yyj += yytoken;
	if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
	  {
	    if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
	      return;
	  }
	else if (yytable[yyj] != 0 && ! yyis_table_ninf (yytable[yyj]))
	  return;
      }

  /* Reduce to one stack.  */
  for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
    if (yystackp->yytops.yystates[yyk] != NULL)
      break;
  if (yyk >= yystackp->yytops.yysize)
    yyFail (yystackp, NULL);
  for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
    yymarkStackDeleted (yystackp, yyk);
  yyremoveDeletes (yystackp);
  yycompressStack (yystackp);

  /* Now pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != NULL)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      yyj = yypact[yys->yylrState];
      if (! yyis_pact_ninf (yyj))
	{
	  yyj += YYTERROR;
	  if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYTERROR
	      && yyisShiftAction (yytable[yyj]))
	    {
	      /* Shift the error token having adjusted its location.  */
	      YYLTYPE yyerrloc;
	      yystackp->yyerror_range[2].yystate.yyloc = yylloc;
	      YYLLOC_DEFAULT (yyerrloc, (yystackp->yyerror_range), 2);
	      YY_SYMBOL_PRINT ("Shifting", yystos[yytable[yyj]],
			       &yylval, &yyerrloc);
	      yyglrShift (yystackp, 0, yytable[yyj],
			  yys->yyposn, &yylval, &yyerrloc);
	      yys = yystackp->yytops.yystates[0];
	      break;
	    }
	}
      yystackp->yyerror_range[1].yystate.yyloc = yys->yyloc;
      yydestroyGLRState ("Error: popping", yys);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == NULL)
    yyFail (yystackp, NULL);
}

#define YYCHK1(YYE)							     \
  do {									     \
    switch (YYE) {							     \
    case yyok:								     \
      break;								     \
    case yyabort:							     \
      goto yyabortlab;							     \
    case yyaccept:							     \
      goto yyacceptlab;							     \
    case yyerr:								     \
      goto yyuser_error;						     \
    default:								     \
      goto yybuglab;							     \
    }									     \
  } while (YYID (0))


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  size_t yyposn;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;

#if YYLTYPE_IS_TRIVIAL
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif


  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval, &yylloc);
  yyposn = 0;

  while (YYID (yytrue))
    {
      /* For efficiency, we have two loops, the first of which is
	 specialized to deterministic operation (single stack, no
	 potential ambiguity).  */
      /* Standard mode */
      while (YYID (yytrue))
	{
	  yyRuleNum yyrule;
	  int yyaction;
	  const short int* yyconflicts;

	  yyStateNum yystate = yystack.yytops.yystates[0]->yylrState;
	  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
	  if (yystate == YYFINAL)
	    goto yyacceptlab;
	  if (yyisDefaultedState (yystate))
	    {
	      yyrule = yydefaultAction (yystate);
	      if (yyrule == 0)
		{
		  yystack.yyerror_range[1].yystate.yyloc = yylloc;
		  yyreportSyntaxError (&yystack);
		  goto yyuser_error;
		}
	      YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue));
	    }
	  else
	    {
	      yySymbol yytoken;
	      if (yychar == YYEMPTY)
		{
		  YYDPRINTF ((stderr, "Reading a token: "));
		  yychar = YYLEX;
		  yytoken = YYTRANSLATE (yychar);
		  YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
		}
	      else
		yytoken = YYTRANSLATE (yychar);
	      yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);
	      if (*yyconflicts != 0)
		break;
	      if (yyisShiftAction (yyaction))
		{
		  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
		  if (yychar != YYEOF)
		    yychar = YYEMPTY;
		  yyposn += 1;
		  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval, &yylloc);
		  if (0 < yystack.yyerrState)
		    yystack.yyerrState -= 1;
		}
	      else if (yyisErrorAction (yyaction))
		{
		  yystack.yyerror_range[1].yystate.yyloc = yylloc;
		  yyreportSyntaxError (&yystack);
		  goto yyuser_error;
		}
	      else
		YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue));
	    }
	}

      while (YYID (yytrue))
	{
	  yySymbol yytoken_to_shift;
	  size_t yys;

	  for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
	    yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

	  /* yyprocessOneStack returns one of three things:

	      - An error flag.  If the caller is yyprocessOneStack, it
		immediately returns as well.  When the caller is finally
		yyparse, it jumps to an error label via YYCHK1.

	      - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
		(&yystack, yys), which sets the top state of yys to NULL.  Thus,
		yyparse's following invocation of yyremoveDeletes will remove
		the stack.

	      - yyok, when ready to shift a token.

	     Except in the first case, yyparse will invoke yyremoveDeletes and
	     then shift the next token onto all remaining stacks.  This
	     synchronization of the shift (that is, after all preceding
	     reductions on all stacks) helps prevent double destructor calls
	     on yylval in the event of memory exhaustion.  */

	  for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
	    YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn));
	  yyremoveDeletes (&yystack);
	  if (yystack.yytops.yysize == 0)
	    {
	      yyundeleteLastStack (&yystack);
	      if (yystack.yytops.yysize == 0)
		yyFail (&yystack, YY_("syntax error"));
	      YYCHK1 (yyresolveStack (&yystack));
	      YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
	      yystack.yyerror_range[1].yystate.yyloc = yylloc;
	      yyreportSyntaxError (&yystack);
	      goto yyuser_error;
	    }

	  /* If any yyglrShift call fails, it will fail after shifting.  Thus,
	     a copy of yylval will already be on stack 0 in the event of a
	     failure in the following loop.  Thus, yychar is set to YYEMPTY
	     before the loop to make sure the user destructor for yylval isn't
	     called twice.  */
	  yytoken_to_shift = YYTRANSLATE (yychar);
	  yychar = YYEMPTY;
	  yyposn += 1;
	  for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
	    {
	      int yyaction;
	      const short int* yyconflicts;
	      yyStateNum yystate = yystack.yytops.yystates[yys]->yylrState;
	      yygetLRActions (yystate, yytoken_to_shift, &yyaction,
			      &yyconflicts);
	      /* Note that yyconflicts were handled by yyprocessOneStack.  */
	      YYDPRINTF ((stderr, "On stack %lu, ", (unsigned long int) yys));
	      YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
	      yyglrShift (&yystack, yys, yyaction, yyposn,
			  &yylval, &yylloc);
	      YYDPRINTF ((stderr, "Stack %lu now in state #%d\n",
			  (unsigned long int) yys,
			  yystack.yytops.yystates[yys]->yylrState));
	    }

	  if (yystack.yytops.yysize == 1)
	    {
	      YYCHK1 (yyresolveStack (&yystack));
	      YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
	      yycompressStack (&yystack);
	      break;
	    }
	}
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturn;

 yybuglab:
  YYASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturn;

 yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;

 yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
		YYTRANSLATE (yychar),
		&yylval, &yylloc);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
	{
	  size_t yysize = yystack.yytops.yysize;
	  size_t yyk;
	  for (yyk = 0; yyk < yysize; yyk += 1)
	    if (yystates[yyk])
	      {
		while (yystates[yyk])
		  {
		    yyGLRState *yys = yystates[yyk];
		    yystack.yyerror_range[1].yystate.yyloc = yys->yyloc;
		    yydestroyGLRState ("Cleanup: popping", yys);
		    yystates[yyk] = yys->yypred;
		    yystack.yynextFree -= 1;
		    yystack.yyspaceLeft += 1;
		  }
		break;
	      }
	}
      yyfreeGLRStack (&yystack);
    }

  /* Make sure YYID is used.  */
  return YYID (yyresult);
}

/* DEBUGGING ONLY */
#ifdef YYDEBUG
static void yypstack (yyGLRStack* yystackp, size_t yyk)
  __attribute__ ((__unused__));
static void yypdumpstack (yyGLRStack* yystackp) __attribute__ ((__unused__));

static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      fprintf (stderr, " -> ");
    }
  fprintf (stderr, "%d@%lu", yys->yylrState, (unsigned long int) yys->yyposn);
}

static void
yypstates (yyGLRState* yyst)
{
  if (yyst == NULL)
    fprintf (stderr, "<null>");
  else
    yy_yypstack (yyst);
  fprintf (stderr, "\n");
}

static void
yypstack (yyGLRStack* yystackp, size_t yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

#define YYINDEX(YYX)							     \
    ((YYX) == NULL ? -1 : (yyGLRStackItem*) (YYX) - yystackp->yyitems)


static void
yypdumpstack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yyp;
  size_t yyi;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      fprintf (stderr, "%3lu. ", (unsigned long int) (yyp - yystackp->yyitems));
      if (*(yybool *) yyp)
	{
	  fprintf (stderr, "Res: %d, LR State: %d, posn: %lu, pred: %ld",
		   yyp->yystate.yyresolved, yyp->yystate.yylrState,
		   (unsigned long int) yyp->yystate.yyposn,
		   (long int) YYINDEX (yyp->yystate.yypred));
	  if (! yyp->yystate.yyresolved)
	    fprintf (stderr, ", firstVal: %ld",
		     (long int) YYINDEX (yyp->yystate.yysemantics.yyfirstVal));
	}
      else
	{
	  fprintf (stderr, "Option. rule: %d, state: %ld, next: %ld",
		   yyp->yyoption.yyrule - 1,
		   (long int) YYINDEX (yyp->yyoption.yystate),
		   (long int) YYINDEX (yyp->yyoption.yynext));
	}
      fprintf (stderr, "\n");
    }
  fprintf (stderr, "Tops:");
  for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
    fprintf (stderr, "%lu: %ld; ", (unsigned long int) yyi,
	     (long int) YYINDEX (yystackp->yytops.yystates[yyi]));
  fprintf (stderr, "\n");
}
#endif


#line 1646 "ned2.y"


//----------------------------------------------------------------------
// general bison/flex stuff:
//

NEDElement *doParseNED2(NEDParser *p, const char *nedtext)
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
		return 0;
	}

    // create parser state and NEDFileElement
    resetParserState();
    ps.nedfile = new NedFileElement();

    // store file name with slashes always, even on Windows -- neddoc relies on that
    ps.nedfile->setFilename(slashifyFilename(np->getFileName()).c_str());
    ps.nedfile->setVersion("2");

    // store file comment
    storeFileComment(ps.nedfile);

    ps.propertyscope.push(ps.nedfile);

    globalps = ps; // remember this for error recovery

    if (np->getStoreSourceFlag())
        storeSourceCode(ps.nedfile, np->getSource()->getFullTextPos());

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

    if (np->getErrors()->empty())
    {
        // more sanity checks
        if (ps.propertyscope.size()!=1 || ps.propertyscope.top()!=ps.nedfile)
            INTERNAL_ERROR0(NULL, "error during parsing: imbalanced propertyscope");
        if (!ps.blockscope.empty() || !ps.typescope.empty())
            INTERNAL_ERROR0(NULL, "error during parsing: imbalanced blockscope or typescope");
    }
    yy_delete_buffer(handle);

    //FIXME TODO: fill in @documentation properties from comments
    return ps.nedfile;
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


