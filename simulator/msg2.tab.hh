/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE msg2yylval;

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

extern YYLTYPE msg2yylloc;
