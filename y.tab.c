
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "sintactico_simplificado.y"
	
	#include <stdio.h>
	int yystopparser=0;


/* Line 189 of yacc.c  */
#line 79 "y.tab.c"

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


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 221 "y.tab.c"

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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  73
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   344

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  138
/* YYNRULES -- Number of states.  */
#define YYNSTATES  199

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     8,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    37,    39,
      41,    45,    47,    49,    51,    53,    55,    57,    59,    61,
      63,    65,    67,    69,    71,    73,    75,    77,    79,    83,
      85,    89,    91,    94,    96,    98,   100,   103,   106,   109,
     112,   114,   116,   118,   120,   122,   124,   126,   128,   130,
     132,   135,   137,   139,   143,   146,   149,   150,   152,   156,
     159,   163,   167,   170,   173,   176,   178,   181,   185,   191,
     194,   198,   203,   206,   209,   212,   214,   218,   221,   223,
     225,   226,   229,   232,   234,   236,   238,   240,   242,   244,
     247,   249,   253,   259,   264,   268,   271,   274,   277,   280,
     281,   284,   287,   290,   293,   296,   299,   302,   305,   310,
     312,   314,   316,   318,   320,   322,   325,   328,   331,   335,
     339,   345,   349,   352,   354,   356,   358,   361,   363
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,    53,    -1,    -1,    54,    -1,    54,    53,
      -1,    55,    -1,    79,    -1,    76,    -1,    92,    -1,    98,
      -1,   101,    -1,   106,    -1,    80,    -1,    14,    -1,    56,
      -1,    60,    -1,     8,    58,    57,    -1,    59,    -1,     8,
      -1,     8,    41,    80,    -1,    65,    -1,    84,    -1,    35,
      -1,    36,    -1,    37,    -1,    38,    -1,    39,    -1,    40,
      -1,    76,    -1,     3,    -1,     4,    -1,     6,    -1,     5,
      -1,    80,    -1,    75,    -1,    69,    -1,    83,    -1,    61,
      35,    62,    -1,     8,    -1,     8,    18,    61,    -1,    63,
      -1,    63,    64,    -1,     8,    -1,    59,    -1,    65,    -1,
      18,    62,    -1,    66,    67,    -1,     8,    68,    -1,    59,
      68,    -1,     8,    -1,    59,    -1,    65,    -1,    28,    -1,
      29,    -1,    30,    -1,    31,    -1,    32,    -1,    33,    -1,
      34,    -1,    70,    71,    -1,    23,    -1,    24,    -1,    14,
      72,    24,    -1,    72,    24,    -1,    74,    73,    -1,    -1,
      14,    -1,    18,    14,    72,    -1,    18,    72,    -1,     5,
      20,    59,    -1,    21,    62,    22,    -1,    77,    78,    -1,
      15,    12,    -1,    16,    12,    -1,    13,    -1,     5,    13,
      -1,     9,    84,    20,    -1,     9,     8,    19,    83,    20,
      -1,    79,    53,    -1,    79,    53,    88,    -1,    79,    53,
      88,    91,    -1,    81,    82,    -1,     8,    12,    -1,    62,
      13,    -1,    13,    -1,    12,    62,    13,    -1,    85,    86,
      -1,     8,    -1,    59,    -1,    -1,    87,     8,    -1,    87,
      59,    -1,    46,    -1,    47,    -1,    43,    -1,    44,    -1,
      45,    -1,    48,    -1,    89,    90,    -1,    11,    -1,    84,
      20,    53,    -1,     8,    19,    83,    20,    53,    -1,    84,
      20,    53,    88,    -1,    10,    20,    53,    -1,    93,    94,
      -1,    17,     5,    -1,    17,     8,    -1,    17,    80,    -1,
      -1,    95,    94,    -1,    96,    94,    -1,    18,     8,    -1,
      18,    59,    -1,    18,    97,    -1,    28,     8,    -1,    28,
      80,    -1,    28,     5,    -1,     8,    21,     8,    22,    -1,
      99,    -1,   100,    -1,    27,    -1,     7,    -1,   102,    -1,
     105,    -1,   103,   104,    -1,   102,    53,    -1,    26,     8,
      -1,    19,     8,    20,    -1,    19,    80,    20,    -1,    18,
       8,    19,     8,    20,    -1,    42,    84,    20,    -1,   105,
      53,    -1,   107,    -1,   108,    -1,    49,    -1,    49,    14,
      -1,    50,    -1,    50,    14,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    58,    58,    59,    62,    63,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    77,    78,    81,    84,    85,
      86,    87,    88,    91,    92,    93,    94,    95,    96,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   110,   113,
     114,   117,   118,   121,   122,   123,   126,   129,   131,   132,
     135,   136,   137,   140,   141,   142,   143,   144,   145,   146,
     149,   152,   155,   156,   157,   160,   163,   164,   165,   166,
     169,   172,   175,   178,   179,   182,   183,   186,   187,   188,
     189,   190,   193,   195,   198,   199,   202,   205,   207,   208,
     211,   212,   213,   216,   217,   218,   219,   220,   221,   224,
     226,   229,   230,   231,   234,   237,   239,   240,   241,   244,
     245,   246,   249,   250,   251,   254,   255,   256,   259,   262,
     263,   266,   268,   271,   272,   275,   276,   279,   282,   283,
     284,   287,   288,   291,   292,   295,   296,   299,   300
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENTERO", "FLOTANTE", "CADENA",
  "BOOLEANO", "TOKEN_CADENA_TRES", "IDENTIFICADOR", "TOKEN_IF",
  "TOKEN_ELSE", "TOKEN_ELIF", "PARENTESIS_INICIO", "PARENTESIS_FINAL",
  "SALTO_LINEA", "TOKEN_INPUT", "TOKEN_RAW_INPUT", "TOKEN_PRINT", "COMA",
  "IN", "DOS_PUNTOS", "CORCHETE_INICIO", "CORCHETE_FINAL", "LLAVE_INICIAL",
  "LLAVE_FINAL", "GATO", "TOKEN_FOR", "COMENTARIO_TEXTO", "OPERADOR_SUMA",
  "OPERADOR_MULT", "OPERADOR_RESTA", "OPERADOR_DIVISION",
  "OPERADOR_EXPONENCIAL", "OPERADOR_DIVISION_ENTERA", "OPERADOR_MODULO",
  "OPERADOR_IGUAL", "OPERADOR_MAS_IGUAL", "OPERADOR_MENOS_IGUAL",
  "OPERADOR_DIVISION_IGUAL", "OPERADOR_DIVISION_ENTERA_IGUAL",
  "OPERADOR_MULT_IGUAL", "UN_PUNTO", "TOKEN_WHILE",
  "COMPARADOR_MENOR_IGUAL", "COMPARADOR_NOT_IGUAL", "COMPARADOR_MAYOR",
  "COMPARADOR_MENOR", "COMPARADOR_IGUAL", "COMPARADOR_MAYOR_IGUAL",
  "TOKEN_BREAK", "TOKEN_CONTINUE", "$accept", "programa",
  "grupo_de_sentencias", "sentencia", "asignacion", "asignacion_simple",
  "asignacion_simple_lado_derecho", "simbolo_asignacion", "dato",
  "asignacion_multiple", "grupo_de_identificadores", "grupo_de_datos",
  "grupo_de_datos_lado_izquierdo", "grupo_de_datos_lado_derecho",
  "operacion_aritmetica", "operacion_aritmetica_lado_izquierdo",
  "operacion_aritmetica_lado_derecho", "simbolo_operacion", "diccionario",
  "diccionario_lado_izquierdo", "diccionario_lado_derecho",
  "valores_diccionario", "valores_diccionario_derecho",
  "valor_diccionario", "lista", "entrada", "entrada_lado_izquierdo",
  "entrada_lado_derecho", "if", "funcion", "funcion_lado_izquierdo",
  "funcion_lado_derecho", "tupla", "condicion", "condicion_lado_izquierdo",
  "condicion_lado_derecho", "simbolo_comparador", "elif",
  "elif_lado_izquierdo", "elif_lado_derecho", "else", "salida",
  "salida_lado_izquierdo", "salida_lado_derecho", "salida_lado_derecho_1",
  "salida_lado_derecho_2", "identificador_array", "comentario",
  "comentario_linea", "comentario_multilinea", "ciclo", "for",
  "for_lado_izquierdo", "for_lado_derecho", "while", "control_flujo",
  "break", "continue", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    53,    53,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    55,    55,    56,    57,    57,
      57,    57,    57,    58,    58,    58,    58,    58,    58,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    60,    61,
      61,    62,    62,    63,    63,    63,    64,    65,    66,    66,
      67,    67,    67,    68,    68,    68,    68,    68,    68,    68,
      69,    70,    71,    71,    71,    72,    73,    73,    73,    73,
      74,    75,    76,    77,    77,    78,    78,    79,    79,    79,
      79,    79,    80,    81,    82,    82,    83,    84,    85,    85,
      86,    86,    86,    87,    87,    87,    87,    87,    87,    88,
      89,    90,    90,    90,    91,    92,    93,    93,    93,    94,
      94,    94,    95,    95,    95,    96,    96,    96,    97,    98,
      98,    99,   100,   101,   101,   102,   102,   103,   104,   104,
     104,   105,   105,   106,   106,   107,   107,   108,   108
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     1,     2,     1,     1,     1,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     3,     2,     2,     0,     1,     3,     2,
       3,     3,     2,     2,     2,     1,     2,     3,     5,     2,
       3,     4,     2,     2,     2,     1,     3,     2,     1,     1,
       0,     2,     2,     1,     1,     1,     1,     1,     1,     2,
       1,     3,     5,     4,     3,     2,     2,     2,     2,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     4,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     3,     3,
       5,     3,     2,     1,     1,     1,     2,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,   122,     0,     0,    14,     0,     0,     0,     0,   121,
       0,   135,   137,     0,     2,     4,     6,    15,    16,     0,
       8,     0,     7,    13,     0,     9,   109,    10,   119,   120,
      11,   123,     0,   124,    12,   133,   134,    83,     0,    23,
      24,    25,    26,    27,    28,     0,    30,    31,    33,    32,
      88,     0,     0,    61,    89,    36,     0,    35,    29,    34,
      37,     0,    90,    73,    74,   106,   107,   108,   127,    88,
       0,   136,   138,     1,     5,     0,     0,    75,    72,    79,
      43,    85,    44,     0,    41,    45,     0,    82,     0,     0,
     105,   109,   109,   126,     0,     0,   125,   132,    39,    40,
      19,    17,    18,    21,    22,     0,     0,     0,     0,     0,
      62,    60,     0,    66,    77,    95,    96,    97,    93,    94,
      98,    87,     0,   131,    38,    76,   100,    80,     0,    53,
      54,    55,    56,    57,    58,    59,    48,    49,    84,     0,
      42,    50,    51,    52,    47,   112,   113,   114,   117,   115,
     116,   110,   111,     0,     0,     0,     0,     0,    86,    71,
       0,     0,    64,    67,     0,    65,    91,    92,     0,    81,
      88,     0,    99,    46,     0,     0,   128,   129,     0,    20,
      78,    70,    63,     0,    69,     0,     0,     0,     0,     0,
      68,   104,     0,   101,   118,   130,     0,   103,   102
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    17,   101,    45,    82,    18,
      19,    83,    84,   140,    85,    86,   144,   136,    55,    56,
     111,   112,   165,   113,    57,    58,    21,    78,    22,    59,
      24,    87,    60,    61,    62,   121,   122,   127,   128,   172,
     169,    25,    26,    90,    91,    92,   147,    27,    28,    29,
      30,    31,    32,    96,    33,    34,    35,    36
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -104
static const yytype_int16 yypact[] =
{
      37,  -104,    38,   209,  -104,    -1,    12,    52,    18,  -104,
     223,    28,    51,    69,  -104,    37,  -104,  -104,  -104,    48,
    -104,    35,    37,  -104,   195,  -104,     7,  -104,  -104,  -104,
    -104,    37,    53,    37,  -104,  -104,  -104,  -104,    76,  -104,
    -104,  -104,  -104,  -104,  -104,   237,  -104,  -104,  -104,  -104,
      43,   251,   251,  -104,  -104,  -104,     5,  -104,  -104,  -104,
    -104,    72,    95,  -104,  -104,  -104,    81,  -104,  -104,    81,
      74,  -104,  -104,  -104,  -104,   251,    83,  -104,  -104,    86,
      79,  -104,   135,    85,    82,  -104,   265,  -104,   279,    62,
    -104,     7,     7,  -104,    91,    94,  -104,  -104,    87,  -104,
     103,  -104,   147,  -104,  -104,    92,    90,    84,    96,   109,
    -104,  -104,    93,    25,  -104,  -104,  -104,  -104,  -104,  -104,
    -104,  -104,   293,  -104,  -104,  -104,  -104,   108,   307,  -104,
    -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,   251,
    -104,    79,   135,  -104,  -104,     9,  -104,  -104,  -104,    81,
    -104,  -104,  -104,   100,    29,   102,   112,   105,  -104,  -104,
     321,    99,  -104,  -104,    22,  -104,    81,  -104,   106,  -104,
      47,   107,  -104,  -104,   120,   121,  -104,  -104,    81,  -104,
    -104,  -104,  -104,   109,  -104,    37,    92,    37,   123,   132,
    -104,  -104,   133,    86,  -104,  -104,    37,  -104,  -104
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -104,  -104,   -13,  -104,  -104,  -104,  -104,  -104,     2,  -104,
     116,   -38,  -104,  -104,   -28,  -104,  -104,   -74,  -104,  -104,
    -104,  -103,  -104,  -104,  -104,     1,  -104,  -104,  -104,     0,
    -104,  -104,  -101,    -7,  -104,  -104,  -104,   -36,  -104,  -104,
    -104,  -104,  -104,   -10,  -104,  -104,  -104,  -104,  -104,  -104,
    -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -90
static const yytype_int16 yytable[] =
{
      23,    20,    74,    70,   157,    54,   161,    67,   137,    79,
     108,    63,    54,   106,   107,    23,    20,   103,    93,   109,
      97,    37,    23,    20,    64,    88,    68,   108,   137,   110,
     174,    23,    20,    23,    20,    89,   183,   124,   104,   163,
      76,    37,    71,   164,     1,     2,     3,   102,    77,   176,
      37,     4,     5,     6,     7,    37,    38,    65,   143,    37,
      66,   184,   105,     8,     9,    72,   186,   148,   137,    73,
     149,    94,    95,    39,    40,    41,    42,    43,    44,    10,
     190,   151,   152,    75,    98,   192,    11,    12,   142,   150,
     146,    37,   114,    37,   123,   155,   125,   126,   138,   153,
     139,   173,   154,   158,    51,    38,   159,   129,   130,   131,
     132,   133,   134,   135,   108,    37,   160,   162,   168,   175,
     178,   171,   177,   182,   167,   180,   185,   187,   188,   189,
      54,   129,   130,   131,   132,   133,   134,   135,   115,   116,
     117,   118,   119,   120,   156,   194,   -88,   -88,   -88,   -88,
     -88,   -88,   195,   196,    99,     0,   179,   197,     0,     0,
       0,     0,   181,   129,   130,   131,   132,   133,   134,   135,
       0,     0,   191,     0,   193,   129,   130,   131,   132,   133,
     134,   135,     0,   198,     0,    23,    20,    23,    20,     0,
     -89,   -89,   -89,   -89,   -89,   -89,    23,    20,    46,    47,
      48,    49,     0,    80,     0,     0,     0,    51,    81,     0,
       5,     6,    46,    47,    48,    49,    52,    50,    53,     0,
       0,    51,     0,     0,     5,     6,    46,    47,    48,    49,
      52,    69,    53,     0,     0,    51,     0,     0,     5,     6,
      46,    47,    48,    49,    52,   100,    53,     0,     0,    51,
       0,     0,     5,     6,    46,    47,    48,    49,    52,    80,
      53,     0,     0,    51,     0,     0,     5,     6,    46,    47,
      48,    49,    52,   141,    53,     0,     0,    51,     0,     0,
       5,     6,    46,    47,    48,    49,    52,   145,    53,     0,
       0,    51,     0,     0,     5,     6,    46,    47,    48,    49,
      52,   166,    53,     0,     0,    51,     0,     0,     5,     6,
      46,    47,    48,    49,    52,   170,    53,     0,     0,    51,
       0,     0,     5,     6,    46,    47,    48,    49,    52,   178,
      53,     0,     0,    51,     0,     0,     5,     6,     0,     0,
       0,     0,    52,     0,    53
};

static const yytype_int16 yycheck[] =
{
       0,     0,    15,    10,   105,     3,   109,     7,    82,    22,
       5,    12,    10,    51,    52,    15,    15,    45,    31,    14,
      33,    12,    22,    22,    12,    18,     8,     5,   102,    24,
      21,    31,    31,    33,    33,    28,    14,    75,    45,    14,
       5,    12,    14,    18,     7,     8,     9,    45,    13,    20,
      12,    14,    15,    16,    17,    12,    18,     5,    86,    12,
       8,   164,    19,    26,    27,    14,    19,     5,   142,     0,
       8,    18,    19,    35,    36,    37,    38,    39,    40,    42,
     183,    91,    92,    35,     8,   186,    49,    50,    86,    89,
      88,    12,    20,    12,    20,    95,    13,    11,    13,     8,
      18,   139,     8,    13,    12,    18,    22,    28,    29,    30,
      31,    32,    33,    34,     5,    12,    20,    24,    10,    19,
       8,   128,    20,    24,   122,    20,    20,    20,     8,     8,
     128,    28,    29,    30,    31,    32,    33,    34,    43,    44,
      45,    46,    47,    48,    41,    22,    43,    44,    45,    46,
      47,    48,    20,    20,    38,    -1,   156,   193,    -1,    -1,
      -1,    -1,   160,    28,    29,    30,    31,    32,    33,    34,
      -1,    -1,   185,    -1,   187,    28,    29,    30,    31,    32,
      33,    34,    -1,   196,    -1,   185,   185,   187,   187,    -1,
      43,    44,    45,    46,    47,    48,   196,   196,     3,     4,
       5,     6,    -1,     8,    -1,    -1,    -1,    12,    13,    -1,
      15,    16,     3,     4,     5,     6,    21,     8,    23,    -1,
      -1,    12,    -1,    -1,    15,    16,     3,     4,     5,     6,
      21,     8,    23,    -1,    -1,    12,    -1,    -1,    15,    16,
       3,     4,     5,     6,    21,     8,    23,    -1,    -1,    12,
      -1,    -1,    15,    16,     3,     4,     5,     6,    21,     8,
      23,    -1,    -1,    12,    -1,    -1,    15,    16,     3,     4,
       5,     6,    21,     8,    23,    -1,    -1,    12,    -1,    -1,
      15,    16,     3,     4,     5,     6,    21,     8,    23,    -1,
      -1,    12,    -1,    -1,    15,    16,     3,     4,     5,     6,
      21,     8,    23,    -1,    -1,    12,    -1,    -1,    15,    16,
       3,     4,     5,     6,    21,     8,    23,    -1,    -1,    12,
      -1,    -1,    15,    16,     3,     4,     5,     6,    21,     8,
      23,    -1,    -1,    12,    -1,    -1,    15,    16,    -1,    -1,
      -1,    -1,    21,    -1,    23
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,     9,    14,    15,    16,    17,    26,    27,
      42,    49,    50,    52,    53,    54,    55,    56,    60,    61,
      76,    77,    79,    80,    81,    92,    93,    98,    99,   100,
     101,   102,   103,   105,   106,   107,   108,    12,    18,    35,
      36,    37,    38,    39,    40,    58,     3,     4,     5,     6,
       8,    12,    21,    23,    59,    69,    70,    75,    76,    80,
      83,    84,    85,    12,    12,     5,     8,    80,     8,     8,
      84,    14,    14,     0,    53,    35,     5,    13,    78,    53,
       8,    13,    59,    62,    63,    65,    66,    82,    18,    28,
      94,    95,    96,    53,    18,    19,   104,    53,     8,    61,
       8,    57,    59,    65,    84,    19,    62,    62,     5,    14,
      24,    71,    72,    74,    20,    43,    44,    45,    46,    47,
      48,    86,    87,    20,    62,    13,    11,    88,    89,    28,
      29,    30,    31,    32,    33,    34,    68,    68,    13,    18,
      64,     8,    59,    65,    67,     8,    59,    97,     5,     8,
      80,    94,    94,     8,     8,    80,    41,    83,    13,    22,
      20,    72,    24,    14,    18,    73,     8,    59,    10,    91,
       8,    84,    90,    62,    21,    19,    20,    20,     8,    80,
      20,    59,    24,    14,    72,    20,    19,    20,     8,     8,
      72,    53,    83,    53,    22,    20,    20,    88,    53
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
      

/* Line 1455 of yacc.c  */
#line 1661 "y.tab.c"
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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



/* Line 1675 of yacc.c  */
#line 304 "sintactico_simplificado.y"

