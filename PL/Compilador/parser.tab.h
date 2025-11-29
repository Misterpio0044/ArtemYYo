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
# define YYDEBUG 1
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
    T_COMPOSICION_SECUENCIAL = 259, /* T_COMPOSICION_SECUENCIAL  */
    T_CONTINUAR = 260,             /* T_CONTINUAR  */
    T_CORCHETE_APERTURA = 261,     /* T_CORCHETE_APERTURA  */
    T_CORCHETE_CIERRE = 262,       /* T_CORCHETE_CIERRE  */
    T_DE = 263,                    /* T_DE  */
    T_DECL_ACC = 264,              /* T_DECL_ACC  */
    T_DECL_ALGORITMO = 265,        /* T_DECL_ALGORITMO  */
    T_DECL_B_MIENTRAS = 266,       /* T_DECL_B_MIENTRAS  */
    T_DECL_B_PARA = 267,           /* T_DECL_B_PARA  */
    T_DECL_CONDICIONAL_SI = 268,   /* T_DECL_CONDICIONAL_SI  */
    T_DECL_CONDICIONAL_SINO = 269, /* T_DECL_CONDICIONAL_SINO  */
    T_DECL_CONST = 270,            /* T_DECL_CONST  */
    T_DECL_FUNC = 271,             /* T_DECL_FUNC  */
    T_DECL_TABLA = 272,            /* T_DECL_TABLA  */
    T_DECL_TUPLA = 273,            /* T_DECL_TUPLA  */
    T_DECL_VAR = 274,              /* T_DECL_VAR  */
    T_DEF_TIPO = 275,              /* T_DEF_TIPO  */
    T_DEV = 276,                   /* T_DEV  */
    T_E_S = 277,                   /* T_E_S  */
    T_ENTRADA = 278,               /* T_ENTRADA  */
    T_ENTONCES = 279,              /* T_ENTONCES  */
    T_HACER = 280,                 /* T_HACER  */
    T_HASTA = 281,                 /* T_HASTA  */
    T_ID = 282,                    /* T_ID  */
    T_ID_BOOLEANO = 283,           /* T_ID_BOOLEANO  */
    T_IGUAL = 284,                 /* T_IGUAL  */
    T_LITERAL_BOOLEANO = 285,      /* T_LITERAL_BOOLEANO  */
    T_LITERAL_CADENA = 286,        /* T_LITERAL_CADENA  */
    T_LITERAL_CARACTER = 287,      /* T_LITERAL_CARACTER  */
    T_LITERAL_NUMERICO = 288,      /* T_LITERAL_NUMERICO  */
    T_NOMBRE_TIPO = 289,           /* T_NOMBRE_TIPO  */
    T_OPERADOR_DEF_TIPO = 290,     /* T_OPERADOR_DEF_TIPO  */
    T_OPERADOR_NO = 291,           /* T_OPERADOR_NO  */
    T_OPERADOR_O = 292,            /* T_OPERADOR_O  */
    T_OPERADOR_PRIO_DOS = 293,     /* T_OPERADOR_PRIO_DOS  */
    T_OPERADOR_PRIO_TRES = 294,    /* T_OPERADOR_PRIO_TRES  */
    T_OPERADOR_RELACIONAL = 295,   /* T_OPERADOR_RELACIONAL  */
    T_OPERADOR_Y = 296,            /* T_OPERADOR_Y  */
    T_PARENTESIS_APERTURA = 297,   /* T_PARENTESIS_APERTURA  */
    T_PARENTESIS_CIERRE = 298,     /* T_PARENTESIS_CIERRE  */
    T_POST = 299,                  /* T_POST  */
    T_PREC = 300,                  /* T_PREC  */
    T_PUNTO = 301,                 /* T_PUNTO  */
    T_REF = 302,                   /* T_REF  */
    T_SALIDA = 303,                /* T_SALIDA  */
    T_SEPARADOR = 304,             /* T_SEPARADOR  */
    T_SUBRANGO_TABLA = 305,        /* T_SUBRANGO_TABLA  */
    T_TERM_ACC = 306,              /* T_TERM_ACC  */
    T_TERM_ALGORITMO = 307,        /* T_TERM_ALGORITMO  */
    T_TERM_B_MIENTRAS = 308,       /* T_TERM_B_MIENTRAS  */
    T_TERM_B_PARA = 309,           /* T_TERM_B_PARA  */
    T_TERM_CONDICIONAL_SI = 310,   /* T_TERM_CONDICIONAL_SI  */
    T_TERM_CONST = 311,            /* T_TERM_CONST  */
    T_TERM_FUNC = 312,             /* T_TERM_FUNC  */
    T_TERM_TIPO = 313,             /* T_TERM_TIPO  */
    T_TERM_TUPLA = 314,            /* T_TERM_TUPLA  */
    T_TERM_VAR = 315               /* T_TERM_VAR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "parser.y"

    char *cadena; 

    Celda celda;

    LiteralBooleanoT literal_booleano;
    LiteralCaracterT literal_caracter;
    LiteralCadenaT literal_cadena;
    LiteralT literal_numerico;

#line 135 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
