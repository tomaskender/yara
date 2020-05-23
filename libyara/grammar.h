/* A Bison parser, made by GNU Bison 3.5.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YARA_YY_GRAMMAR_H_INCLUDED
# define YY_YARA_YY_GRAMMAR_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yara_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    _END_OF_FILE_ = 0,
    _END_OF_INCLUDED_FILE_ = 258,
    _DOT_DOT_ = 259,
    _RULE_ = 260,
    _PRIVATE_ = 261,
    _GLOBAL_ = 262,
    _META_ = 263,
    _STRINGS_ = 264,
    _CONDITION_ = 265,
    _IDENTIFIER_ = 266,
    _STRING_IDENTIFIER_ = 267,
    _STRING_COUNT_ = 268,
    _STRING_OFFSET_ = 269,
    _STRING_LENGTH_ = 270,
    _STRING_IDENTIFIER_WITH_WILDCARD_ = 271,
    _NUMBER_ = 272,
    _DOUBLE_ = 273,
    _INTEGER_FUNCTION_ = 274,
    _TEXT_STRING_ = 275,
    _HEX_STRING_ = 276,
    _REGEXP_ = 277,
    _ASCII_ = 278,
    _WIDE_ = 279,
    _L_ENDIAN_ = 280,
    _B_ENDIAN_ = 281,
    _XOR_ = 282,
    _BASE64_ = 283,
    _BASE64_WIDE_ = 284,
    _NOCASE_ = 285,
    _FULLWORD_ = 286,
    _AT_ = 287,
    _FILESIZE_ = 288,
    _ENTRYPOINT_ = 289,
    _ALL_ = 290,
    _ANY_ = 291,
    _IN_ = 292,
    _OF_ = 293,
    _FOR_ = 294,
    _THEM_ = 295,
    _MATCHES_ = 296,
    _CONTAINS_ = 297,
    _IMPORT_ = 298,
    _TRUE_ = 299,
    _FALSE_ = 300,
    _OR_ = 301,
    _AND_ = 302,
    _NOT_ = 303,
    _EQ_ = 304,
    _NEQ_ = 305,
    _LT_ = 306,
    _LE_ = 307,
    _GT_ = 308,
    _GE_ = 309,
    _SHIFT_LEFT_ = 310,
    _SHIFT_RIGHT_ = 311,
    UNARY_MINUS = 312
  };
#endif
/* Tokens.  */
#define _END_OF_FILE_ 0
#define _END_OF_INCLUDED_FILE_ 258
#define _DOT_DOT_ 259
#define _RULE_ 260
#define _PRIVATE_ 261
#define _GLOBAL_ 262
#define _META_ 263
#define _STRINGS_ 264
#define _CONDITION_ 265
#define _IDENTIFIER_ 266
#define _STRING_IDENTIFIER_ 267
#define _STRING_COUNT_ 268
#define _STRING_OFFSET_ 269
#define _STRING_LENGTH_ 270
#define _STRING_IDENTIFIER_WITH_WILDCARD_ 271
#define _NUMBER_ 272
#define _DOUBLE_ 273
#define _INTEGER_FUNCTION_ 274
#define _TEXT_STRING_ 275
#define _HEX_STRING_ 276
#define _REGEXP_ 277
#define _ASCII_ 278
#define _WIDE_ 279
#define _L_ENDIAN_ 280
#define _B_ENDIAN_ 281
#define _XOR_ 282
#define _BASE64_ 283
#define _BASE64_WIDE_ 284
#define _NOCASE_ 285
#define _FULLWORD_ 286
#define _AT_ 287
#define _FILESIZE_ 288
#define _ENTRYPOINT_ 289
#define _ALL_ 290
#define _ANY_ 291
#define _IN_ 292
#define _OF_ 293
#define _FOR_ 294
#define _THEM_ 295
#define _MATCHES_ 296
#define _CONTAINS_ 297
#define _IMPORT_ 298
#define _TRUE_ 299
#define _FALSE_ 300
#define _OR_ 301
#define _AND_ 302
#define _NOT_ 303
#define _EQ_ 304
#define _NEQ_ 305
#define _LT_ 306
#define _LE_ 307
#define _GT_ 308
#define _GE_ 309
#define _SHIFT_LEFT_ 310
#define _SHIFT_RIGHT_ 311
#define UNARY_MINUS 312

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 299 "grammar.y"

  YR_EXPRESSION   expression;
  SIZED_STRING*   sized_string;
  char*           c_string;
  int64_t         integer;
  double          double_;
  YR_MODIFIER     modifier;

  YR_ARENA_REF tag;
  YR_ARENA_REF rule;
  YR_ARENA_REF meta;
  YR_ARENA_REF string;

#line 187 "grammar.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yara_yyparse (void *yyscanner, YR_COMPILER* compiler);

#endif /* !YY_YARA_YY_GRAMMAR_H_INCLUDED  */
