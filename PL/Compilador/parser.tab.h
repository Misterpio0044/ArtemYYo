/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_ASIGNACION = 258,            /* T_ASIGNACION  */
    T_COMENTARIO = 259,            /* T_COMENTARIO  */
    T_COMPOSICION_SECUENCIAL = 260, /* T_COMPOSICION_SECUENCIAL  */
    T_CONTINUAR = 261,             /* T_CONTINUAR  */
    T_CORCHETE_APERTURA = 262,     /* T_CORCHETE_APERTURA  */
    T_CORCHETE_CIERRE = 263,       /* T_CORCHETE_CIERRE  */
    T_DE = 264,                    /* T_DE  */
    T_DECL_ACC = 265,              /* T_DECL_ACC  */
    T_DECL_ALGORITMO = 266,        /* T_DECL_ALGORITMO  */
    T_DECL_B_MIENTRAS = 267,       /* T_DECL_B_MIENTRAS  */
    T_DECL_B_PARA = 268,           /* T_DECL_B_PARA  */
    T_DECL_CONDICIONAL_SI = 269,   /* T_DECL_CONDICIONAL_SI  */
    T_DECL_CONDICIONAL_SINO = 270, /* T_DECL_CONDICIONAL_SINO  */
    T_DECL_CONST = 271,            /* T_DECL_CONST  */
    T_DECL_FUNC = 272,             /* T_DECL_FUNC  */
    T_DECL_TABLA = 273,            /* T_DECL_TABLA  */
    T_DECL_TUPLA = 274,            /* T_DECL_TUPLA  */
    T_DECL_VAR = 275,              /* T_DECL_VAR  */
    T_DEF_TIPO = 276,              /* T_DEF_TIPO  */
    T_DEV = 277,                   /* T_DEV  */
    T_E_S = 278,                   /* T_E_S  */
    T_ENTRADA = 279,               /* T_ENTRADA  */
    T_ENTONCES = 280,              /* T_ENTONCES  */
    T_HACER = 281,                 /* T_HACER  */
    T_HASTA = 282,                 /* T_HASTA  */
    T_ID = 283,                    /* T_ID  */
    T_ID_BOOLEANO = 284,           /* T_ID_BOOLEANO  */
    T_IGUAL = 285,                 /* T_IGUAL  */
    T_LITERAL_BOOLEANO = 286,      /* T_LITERAL_BOOLEANO  */
    T_LITERAL_CADENA = 287,        /* T_LITERAL_CADENA  */
    T_LITERAL_CARACTER = 288,      /* T_LITERAL_CARACTER  */
    T_LITERAL_NUMERICO = 289,      /* T_LITERAL_NUMERICO  */
    T_NOMBRE_TIPO = 290,           /* T_NOMBRE_TIPO  */
    T_OPERADOR_DEF_TIPO = 291,     /* T_OPERADOR_DEF_TIPO  */
    T_OPERADOR_NO = 292,           /* T_OPERADOR_NO  */
    T_OPERADOR_O = 293,            /* T_OPERADOR_O  */
    T_OPERADOR_PRIO_DOS = 294,     /* T_OPERADOR_PRIO_DOS  */
    T_OPERADOR_PRIO_TRES = 295,    /* T_OPERADOR_PRIO_TRES  */
    T_OPERADOR_RELACIONAL = 296,   /* T_OPERADOR_RELACIONAL  */
    T_OPERADOR_Y = 297,            /* T_OPERADOR_Y  */
    T_PARENTESIS_APERTURA = 298,   /* T_PARENTESIS_APERTURA  */
    T_PARENTESIS_CIERRE = 299,     /* T_PARENTESIS_CIERRE  */
    T_POST = 300,                  /* T_POST  */
    T_PREC = 301,                  /* T_PREC  */
    T_PUNTO = 302,                 /* T_PUNTO  */
    T_REF = 303,                   /* T_REF  */
    T_SALIDA = 304,                /* T_SALIDA  */
    T_SEPARADOR = 305,             /* T_SEPARADOR  */
    T_SUBRANGO_TABLA = 306,        /* T_SUBRANGO_TABLA  */
    T_TERM_ACC = 307,              /* T_TERM_ACC  */
    T_TERM_ALGORITMO = 308,        /* T_TERM_ALGORITMO  */
    T_TERM_B_MIENTRAS = 309,       /* T_TERM_B_MIENTRAS  */
    T_TERM_B_PARA = 310,           /* T_TERM_B_PARA  */
    T_TERM_CONDICIONAL_SI = 311,   /* T_TERM_CONDICIONAL_SI  */
    T_TERM_CONST = 312,            /* T_TERM_CONST  */
    T_TERM_FUNC = 313,             /* T_TERM_FUNC  */
    T_TERM_TIPO = 314,             /* T_TERM_TIPO  */
    T_TERM_TUPLA = 315,            /* T_TERM_TUPLA  */
    T_TERM_VAR = 316,              /* T_TERM_VAR  */
    T_ERROR = 317                  /* T_ERROR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "parser.y"

    char *cadena; 

    Celda celda;

    LiteralBooleanoT literal_booleano;
    LiteralCaracterT literal_caracter;
    LiteralCadenaT literal_cadena;
    LiteralT literal_numerico;

#line 137 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
