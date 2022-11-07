/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison GLR parsers in C

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IMPORT = 258,
     PACKAGE = 259,
     PROPERTY = 260,
     MODULE = 261,
     SIMPLE = 262,
     NETWORK = 263,
     CHANNEL = 264,
     MODULEINTERFACE = 265,
     CHANNELINTERFACE = 266,
     EXTENDS = 267,
     LIKE = 268,
     TYPES = 269,
     PARAMETERS = 270,
     GATES = 271,
     SUBMODULES = 272,
     CONNECTIONS = 273,
     ALLOWUNCONNECTED = 274,
     DOUBLETYPE = 275,
     INTTYPE = 276,
     STRINGTYPE = 277,
     BOOLTYPE = 278,
     XMLTYPE = 279,
     VOLATILE = 280,
     INPUT_ = 281,
     OUTPUT_ = 282,
     INOUT_ = 283,
     IF = 284,
     FOR = 285,
     RIGHTARROW = 286,
     LEFTARROW = 287,
     DBLARROW = 288,
     TO = 289,
     TRUE_ = 290,
     FALSE_ = 291,
     THIS_ = 292,
     DEFAULT = 293,
     ASK = 294,
     CONST_ = 295,
     SIZEOF = 296,
     INDEX_ = 297,
     XMLDOC = 298,
     NAME = 299,
     INTCONSTANT = 300,
     REALCONSTANT = 301,
     STRINGCONSTANT = 302,
     CHARCONSTANT = 303,
     PLUSPLUS = 304,
     DOUBLEASTERISK = 305,
     EQ = 306,
     NE = 307,
     GE = 308,
     LE = 309,
     AND = 310,
     OR = 311,
     XOR = 312,
     NOT = 313,
     BIN_AND = 314,
     BIN_OR = 315,
     BIN_XOR = 316,
     BIN_COMPL = 317,
     SHIFT_LEFT = 318,
     SHIFT_RIGHT = 319,
     EXPRESSION_SELECTOR = 320,
     INVALID_CHAR = 321,
     UMIN = 322
   };
#endif


/* Copy the first part of user declarations.  */
#line 74 "ned2.y"


#include <stdio.h>
#include <stdlib.h>
#include <stack>
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

#define yylloc ned2yylloc
#define yyin ned2yyin
#define yyout ned2yyout
#define yyrestart ned2yyrestart
#define yy_scan_string ned2yy_scan_string
#define yy_delete_buffer ned2yy_delete_buffer
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

static struct NED2ParserState
{
    bool inTypes;
    bool inConnGroup;
    std::stack<NEDElement *> propertyscope; // top(): where to insert properties as we parse them
    std::stack<NEDElement *> blockscope;    // top(): where to insert parameters, gates, etc
    std::stack<NEDElement *> typescope;     // top(): as blockscope, but ignore submodules and connection channels

    /* tmp flags, used with param, gate and conn */
    int paramType;
    int gateType;
    bool isVolatile;
    bool isDefault;
    YYLTYPE exprPos;
    int subgate;
    std::vector<NEDElement *> propvals; // temporarily collects property values

    /* tmp flags, used with msg fields */
    bool isAbstract;
    bool isReadonly;

    /* NED-II: modules, channels */
    NedFileElement *nedfile;
    CommentElement *comment;
    PackageElement *package;
    ImportElement *import;
    PropertyDeclElement *propertydecl;
    ExtendsElement *extends;
    InterfaceNameElement *interfacename;
    NEDElement *component;  // compound/simple module, module interface, channel or channel interface
    ParametersElement *parameters;
    ParamElement *param;
    PatternElement *pattern;
    PropertyElement *property;
    PropertyKeyElement *propkey;
    TypesElement *types;
    GatesElement *gates;
    GateElement *gate;
    SubmodulesElement *submods;
    SubmoduleElement *submod;
    ConnectionsElement *conns;
    ConnectionGroupElement *conngroup;
    ConnectionElement *conn;
    ChannelSpecElement *chanspec;
    LoopElement *loop;
    ConditionElement *condition;
} ps;


static void resetParserState()
{
    static NED2ParserState cleanps;
    ps = cleanps;
}

static NED2ParserState globalps;  // for error recovery

static void restoreGlobalParserState()  // for error recovery
{
    ps = globalps;
}

static void assertNonEmpty(std::stack<NEDElement *>& somescope)
{
    // for error recovery: STL stack::top() crashes if stack is empty
    if (somescope.empty())
    {
        INTERNAL_ERROR0(NULL, "error during parsing: scope stack empty");
        somescope.push(NULL);
    }
}



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
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
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE ned2yylval;

extern YYLTYPE ned2yylloc;


