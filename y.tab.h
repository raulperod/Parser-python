
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ENTERO = 258,
     FLOTANTE = 259,
     CADENA = 260,
     BOOLEANO = 261,
     TOKEN_CADENA_TRES = 262,
     IDENTIFICADOR = 263,
     TOKEN_IF = 264,
     TOKEN_ELSE = 265,
     TOKEN_ELIF = 266,
     PARENTESIS_INICIO = 267,
     PARENTESIS_FINAL = 268,
     SALTO_LINEA = 269,
     TOKEN_INPUT = 270,
     TOKEN_RAW_INPUT = 271,
     TOKEN_PRINT = 272,
     COMA = 273,
     IN = 274,
     DOS_PUNTOS = 275,
     CORCHETE_INICIO = 276,
     CORCHETE_FINAL = 277,
     LLAVE_INICIAL = 278,
     LLAVE_FINAL = 279,
     GATO = 280,
     TOKEN_FOR = 281,
     COMENTARIO_TEXTO = 282,
     OPERADOR_SUMA = 283,
     OPERADOR_MULT = 284,
     OPERADOR_RESTA = 285,
     OPERADOR_DIVISION = 286,
     OPERADOR_EXPONENCIAL = 287,
     OPERADOR_DIVISION_ENTERA = 288,
     OPERADOR_MODULO = 289,
     OPERADOR_IGUAL = 290,
     OPERADOR_MAS_IGUAL = 291,
     OPERADOR_MENOS_IGUAL = 292,
     OPERADOR_DIVISION_IGUAL = 293,
     OPERADOR_DIVISION_ENTERA_IGUAL = 294,
     OPERADOR_MULT_IGUAL = 295,
     UN_PUNTO = 296,
     TOKEN_WHILE = 297,
     COMPARADOR_MENOR_IGUAL = 298,
     COMPARADOR_NOT_IGUAL = 299,
     COMPARADOR_MAYOR = 300,
     COMPARADOR_MENOR = 301,
     COMPARADOR_IGUAL = 302,
     COMPARADOR_MAYOR_IGUAL = 303,
     TOKEN_BREAK = 304,
     TOKEN_CONTINUE = 305
   };
#endif
/* Tokens.  */
#define ENTERO 258
#define FLOTANTE 259
#define CADENA 260
#define BOOLEANO 261
#define TOKEN_CADENA_TRES 262
#define IDENTIFICADOR 263
#define TOKEN_IF 264
#define TOKEN_ELSE 265
#define TOKEN_ELIF 266
#define PARENTESIS_INICIO 267
#define PARENTESIS_FINAL 268
#define SALTO_LINEA 269
#define TOKEN_INPUT 270
#define TOKEN_RAW_INPUT 271
#define TOKEN_PRINT 272
#define COMA 273
#define IN 274
#define DOS_PUNTOS 275
#define CORCHETE_INICIO 276
#define CORCHETE_FINAL 277
#define LLAVE_INICIAL 278
#define LLAVE_FINAL 279
#define GATO 280
#define TOKEN_FOR 281
#define COMENTARIO_TEXTO 282
#define OPERADOR_SUMA 283
#define OPERADOR_MULT 284
#define OPERADOR_RESTA 285
#define OPERADOR_DIVISION 286
#define OPERADOR_EXPONENCIAL 287
#define OPERADOR_DIVISION_ENTERA 288
#define OPERADOR_MODULO 289
#define OPERADOR_IGUAL 290
#define OPERADOR_MAS_IGUAL 291
#define OPERADOR_MENOS_IGUAL 292
#define OPERADOR_DIVISION_IGUAL 293
#define OPERADOR_DIVISION_ENTERA_IGUAL 294
#define OPERADOR_MULT_IGUAL 295
#define UN_PUNTO 296
#define TOKEN_WHILE 297
#define COMPARADOR_MENOR_IGUAL 298
#define COMPARADOR_NOT_IGUAL 299
#define COMPARADOR_MAYOR 300
#define COMPARADOR_MENOR 301
#define COMPARADOR_IGUAL 302
#define COMPARADOR_MAYOR_IGUAL 303
#define TOKEN_BREAK 304
#define TOKEN_CONTINUE 305




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


