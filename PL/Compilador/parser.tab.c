/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "nombresDeTipos.h"
#include "literal.h"
#include "tablaDeSimbolos.h"
#include "tablaDeCuadruplas.h"
#include "colaDeStrings.h"

void yyerror(const char *s);
int yylex();
extern FILE* yyin;
TablaDeSimbolosT ts;
TablaDeCuadruplasT tc;
ColaDeStrings colaTempVariables;

// #define YYDEBUG 1


#line 92 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_ASIGNACION = 3,               /* T_ASIGNACION  */
  YYSYMBOL_T_COMPOSICION_SECUENCIAL = 4,   /* T_COMPOSICION_SECUENCIAL  */
  YYSYMBOL_T_CONTINUAR = 5,                /* T_CONTINUAR  */
  YYSYMBOL_T_CORCHETE_APERTURA = 6,        /* T_CORCHETE_APERTURA  */
  YYSYMBOL_T_CORCHETE_CIERRE = 7,          /* T_CORCHETE_CIERRE  */
  YYSYMBOL_T_DE = 8,                       /* T_DE  */
  YYSYMBOL_T_DECL_ACC = 9,                 /* T_DECL_ACC  */
  YYSYMBOL_T_DECL_ALGORITMO = 10,          /* T_DECL_ALGORITMO  */
  YYSYMBOL_T_DECL_B_MIENTRAS = 11,         /* T_DECL_B_MIENTRAS  */
  YYSYMBOL_T_DECL_B_PARA = 12,             /* T_DECL_B_PARA  */
  YYSYMBOL_T_DECL_CONDICIONAL_SI = 13,     /* T_DECL_CONDICIONAL_SI  */
  YYSYMBOL_T_DECL_CONDICIONAL_SINO = 14,   /* T_DECL_CONDICIONAL_SINO  */
  YYSYMBOL_T_DECL_CONST = 15,              /* T_DECL_CONST  */
  YYSYMBOL_T_DECL_FUNC = 16,               /* T_DECL_FUNC  */
  YYSYMBOL_T_DECL_TABLA = 17,              /* T_DECL_TABLA  */
  YYSYMBOL_T_DECL_TUPLA = 18,              /* T_DECL_TUPLA  */
  YYSYMBOL_T_DECL_VAR = 19,                /* T_DECL_VAR  */
  YYSYMBOL_T_DEF_TIPO = 20,                /* T_DEF_TIPO  */
  YYSYMBOL_T_DEV = 21,                     /* T_DEV  */
  YYSYMBOL_T_E_S = 22,                     /* T_E_S  */
  YYSYMBOL_T_ENTRADA = 23,                 /* T_ENTRADA  */
  YYSYMBOL_T_ENTONCES = 24,                /* T_ENTONCES  */
  YYSYMBOL_T_HACER = 25,                   /* T_HACER  */
  YYSYMBOL_T_HASTA = 26,                   /* T_HASTA  */
  YYSYMBOL_T_ID = 27,                      /* T_ID  */
  YYSYMBOL_T_ID_BOOLEANO = 28,             /* T_ID_BOOLEANO  */
  YYSYMBOL_T_IGUAL = 29,                   /* T_IGUAL  */
  YYSYMBOL_T_LITERAL_BOOLEANO = 30,        /* T_LITERAL_BOOLEANO  */
  YYSYMBOL_T_LITERAL_CADENA = 31,          /* T_LITERAL_CADENA  */
  YYSYMBOL_T_LITERAL_CARACTER = 32,        /* T_LITERAL_CARACTER  */
  YYSYMBOL_T_LITERAL_NUMERICO = 33,        /* T_LITERAL_NUMERICO  */
  YYSYMBOL_T_NOMBRE_TIPO = 34,             /* T_NOMBRE_TIPO  */
  YYSYMBOL_T_OPERADOR_DEF_TIPO = 35,       /* T_OPERADOR_DEF_TIPO  */
  YYSYMBOL_T_OPERADOR_NO = 36,             /* T_OPERADOR_NO  */
  YYSYMBOL_T_OPERADOR_O = 37,              /* T_OPERADOR_O  */
  YYSYMBOL_T_OPERADOR_PRIO_DOS = 38,       /* T_OPERADOR_PRIO_DOS  */
  YYSYMBOL_T_OPERADOR_PRIO_TRES = 39,      /* T_OPERADOR_PRIO_TRES  */
  YYSYMBOL_T_OPERADOR_RELACIONAL = 40,     /* T_OPERADOR_RELACIONAL  */
  YYSYMBOL_T_OPERADOR_Y = 41,              /* T_OPERADOR_Y  */
  YYSYMBOL_T_PARENTESIS_APERTURA = 42,     /* T_PARENTESIS_APERTURA  */
  YYSYMBOL_T_PARENTESIS_CIERRE = 43,       /* T_PARENTESIS_CIERRE  */
  YYSYMBOL_T_POST = 44,                    /* T_POST  */
  YYSYMBOL_T_PREC = 45,                    /* T_PREC  */
  YYSYMBOL_T_PUNTO = 46,                   /* T_PUNTO  */
  YYSYMBOL_T_REF = 47,                     /* T_REF  */
  YYSYMBOL_T_SALIDA = 48,                  /* T_SALIDA  */
  YYSYMBOL_T_SEPARADOR = 49,               /* T_SEPARADOR  */
  YYSYMBOL_T_SUBRANGO_TABLA = 50,          /* T_SUBRANGO_TABLA  */
  YYSYMBOL_T_TERM_ACC = 51,                /* T_TERM_ACC  */
  YYSYMBOL_T_TERM_ALGORITMO = 52,          /* T_TERM_ALGORITMO  */
  YYSYMBOL_T_TERM_B_MIENTRAS = 53,         /* T_TERM_B_MIENTRAS  */
  YYSYMBOL_T_TERM_B_PARA = 54,             /* T_TERM_B_PARA  */
  YYSYMBOL_T_TERM_CONDICIONAL_SI = 55,     /* T_TERM_CONDICIONAL_SI  */
  YYSYMBOL_T_TERM_CONST = 56,              /* T_TERM_CONST  */
  YYSYMBOL_T_TERM_FUNC = 57,               /* T_TERM_FUNC  */
  YYSYMBOL_T_TERM_TIPO = 58,               /* T_TERM_TIPO  */
  YYSYMBOL_T_TERM_TUPLA = 59,              /* T_TERM_TUPLA  */
  YYSYMBOL_T_TERM_VAR = 60,                /* T_TERM_VAR  */
  YYSYMBOL_YYACCEPT = 61,                  /* $accept  */
  YYSYMBOL_algoritmo = 62,                 /* algoritmo  */
  YYSYMBOL_V_cabecera = 63,                /* V_cabecera  */
  YYSYMBOL_V_bloque_alg = 64,              /* V_bloque_alg  */
  YYSYMBOL_V_decl_globales = 65,           /* V_decl_globales  */
  YYSYMBOL_V_decl_a_f = 66,                /* V_decl_a_f  */
  YYSYMBOL_V_bloque = 67,                  /* V_bloque  */
  YYSYMBOL_V_declaraciones = 68,           /* V_declaraciones  */
  YYSYMBOL_V_declaracion_tipo = 69,        /* V_declaracion_tipo  */
  YYSYMBOL_V_declaracion_const = 70,       /* V_declaracion_const  */
  YYSYMBOL_V_declaracion_var = 71,         /* V_declaracion_var  */
  YYSYMBOL_V_lista_d_tipo = 72,            /* V_lista_d_tipo  */
  YYSYMBOL_V_d_tipo = 73,                  /* V_d_tipo  */
  YYSYMBOL_V_expresion_t = 74,             /* V_expresion_t  */
  YYSYMBOL_V_lista_campos = 75,            /* V_lista_campos  */
  YYSYMBOL_V_lista_d_const = 76,           /* V_lista_d_const  */
  YYSYMBOL_V_lista_d_var = 77,             /* V_lista_d_var  */
  YYSYMBOL_V_lista_id = 78,                /* V_lista_id  */
  YYSYMBOL_V_decl_ent_sal = 79,            /* V_decl_ent_sal  */
  YYSYMBOL_V_decl_ent = 80,                /* V_decl_ent  */
  YYSYMBOL_V_decl_sal = 81,                /* V_decl_sal  */
  YYSYMBOL_V_expresion = 82,               /* V_expresion  */
  YYSYMBOL_V_exp_a = 83,                   /* V_exp_a  */
  YYSYMBOL_V_exp_b = 84,                   /* V_exp_b  */
  YYSYMBOL_V_operando = 85,                /* V_operando  */
  YYSYMBOL_V_cadena_operandos = 86,        /* V_cadena_operandos  */
  YYSYMBOL_V_continuacion_cadena = 87,     /* V_continuacion_cadena  */
  YYSYMBOL_V_operando_no_booleano = 88,    /* V_operando_no_booleano  */
  YYSYMBOL_V_operando_booleano = 89,       /* V_operando_booleano  */
  YYSYMBOL_V_instrucciones = 90,           /* V_instrucciones  */
  YYSYMBOL_V_instruccion = 91,             /* V_instruccion  */
  YYSYMBOL_V_asignacion = 92,              /* V_asignacion  */
  YYSYMBOL_V_alternativa = 93,             /* V_alternativa  */
  YYSYMBOL_V_lista_opciones = 94,          /* V_lista_opciones  */
  YYSYMBOL_V_iiteracion = 95,              /* V_iiteracion  */
  YYSYMBOL_V_it_cota_exp = 96,             /* V_it_cota_exp  */
  YYSYMBOL_V_it_cota_fija = 97,            /* V_it_cota_fija  */
  YYSYMBOL_V_accion_d = 98,                /* V_accion_d  */
  YYSYMBOL_V_funcion_d = 99,               /* V_funcion_d  */
  YYSYMBOL_V_a_cabecera = 100,             /* V_a_cabecera  */
  YYSYMBOL_V_f_cabecera = 101,             /* V_f_cabecera  */
  YYSYMBOL_V_d_par_form = 102,             /* V_d_par_form  */
  YYSYMBOL_V_d_p_form = 103,               /* V_d_p_form  */
  YYSYMBOL_V_accion_ll = 104,              /* V_accion_ll  */
  YYSYMBOL_V_funcion_ll = 105,             /* V_funcion_ll  */
  YYSYMBOL_V_l_ll = 106                    /* V_l_ll  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   249

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  234

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   315


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   114,   114,   115,   116,   117,   118,   119,   120,   120,
     121,   122,   123,   124,   125,   126,   130,   131,   132,   135,
     136,   137,   138,   139,   140,   141,   142,   151,   152,   153,
     154,   158,   159,   160,   161,   162,   165,   166,   167,   171,
     178,   179,   180,   181,   182,   186,   187,   188,   189,   236,
     300,   305,   309,   310,   328,   329,   330,   331,   332,   333,
     334,   335,   339,   343,   344,   345,   346,   350,   351,   352,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   387,   388,   389,   390
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "T_ASIGNACION",
  "T_COMPOSICION_SECUENCIAL", "T_CONTINUAR", "T_CORCHETE_APERTURA",
  "T_CORCHETE_CIERRE", "T_DE", "T_DECL_ACC", "T_DECL_ALGORITMO",
  "T_DECL_B_MIENTRAS", "T_DECL_B_PARA", "T_DECL_CONDICIONAL_SI",
  "T_DECL_CONDICIONAL_SINO", "T_DECL_CONST", "T_DECL_FUNC", "T_DECL_TABLA",
  "T_DECL_TUPLA", "T_DECL_VAR", "T_DEF_TIPO", "T_DEV", "T_E_S",
  "T_ENTRADA", "T_ENTONCES", "T_HACER", "T_HASTA", "T_ID", "T_ID_BOOLEANO",
  "T_IGUAL", "T_LITERAL_BOOLEANO", "T_LITERAL_CADENA",
  "T_LITERAL_CARACTER", "T_LITERAL_NUMERICO", "T_NOMBRE_TIPO",
  "T_OPERADOR_DEF_TIPO", "T_OPERADOR_NO", "T_OPERADOR_O",
  "T_OPERADOR_PRIO_DOS", "T_OPERADOR_PRIO_TRES", "T_OPERADOR_RELACIONAL",
  "T_OPERADOR_Y", "T_PARENTESIS_APERTURA", "T_PARENTESIS_CIERRE", "T_POST",
  "T_PREC", "T_PUNTO", "T_REF", "T_SALIDA", "T_SEPARADOR",
  "T_SUBRANGO_TABLA", "T_TERM_ACC", "T_TERM_ALGORITMO",
  "T_TERM_B_MIENTRAS", "T_TERM_B_PARA", "T_TERM_CONDICIONAL_SI",
  "T_TERM_CONST", "T_TERM_FUNC", "T_TERM_TIPO", "T_TERM_TUPLA",
  "T_TERM_VAR", "$accept", "algoritmo", "V_cabecera", "V_bloque_alg",
  "V_decl_globales", "V_decl_a_f", "V_bloque", "V_declaraciones",
  "V_declaracion_tipo", "V_declaracion_const", "V_declaracion_var",
  "V_lista_d_tipo", "V_d_tipo", "V_expresion_t", "V_lista_campos",
  "V_lista_d_const", "V_lista_d_var", "V_lista_id", "V_decl_ent_sal",
  "V_decl_ent", "V_decl_sal", "V_expresion", "V_exp_a", "V_exp_b",
  "V_operando", "V_cadena_operandos", "V_continuacion_cadena",
  "V_operando_no_booleano", "V_operando_booleano", "V_instrucciones",
  "V_instruccion", "V_asignacion", "V_alternativa", "V_lista_opciones",
  "V_iiteracion", "V_it_cota_exp", "V_it_cota_fija", "V_accion_d",
  "V_funcion_d", "V_a_cabecera", "V_f_cabecera", "V_d_par_form",
  "V_d_p_form", "V_accion_ll", "V_funcion_ll", "V_l_ll", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-121)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-63)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      21,    71,   104,   132,  -121,   107,    60,    98,   137,    41,
     107,   107,   114,   120,    97,   129,   123,   134,   130,   111,
      72,   137,   137,   137,   156,   157,    -1,    41,    41,  -121,
    -121,    79,   155,   182,     2,   183,   139,   131,   154,   144,
    -121,  -121,   112,   165,   112,   151,     5,  -121,   148,  -121,
     191,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
     158,   137,   159,   137,   134,   134,   162,   149,  -121,  -121,
    -121,   192,   194,   195,   198,  -121,   197,   177,    14,  -121,
    -121,  -121,  -121,  -121,   112,    63,   112,     2,   204,   160,
     169,    56,    39,     6,  -121,  -121,  -121,   134,   207,     2,
    -121,   170,    34,   210,    18,   112,   112,   112,  -121,    91,
    -121,    72,     3,   163,   134,   196,  -121,  -121,  -121,  -121,
      60,    60,    60,    60,   105,   180,   161,   112,   169,   128,
    -121,    63,   178,   121,    66,  -121,    98,   105,   112,    63,
      63,   112,   112,  -121,  -121,   214,    72,   112,    72,   -16,
     176,   169,     8,     6,   148,  -121,  -121,   134,   134,   134,
     179,   217,  -121,   181,   112,  -121,  -121,  -121,  -121,   173,
       2,  -121,   184,   121,  -121,  -121,  -121,  -121,   185,  -121,
     178,   126,   186,   134,   175,    53,   215,   112,  -121,  -121,
       7,   199,   200,   201,   226,     3,   211,   -17,   105,   227,
    -121,  -121,  -121,   112,   112,   187,  -121,     2,     2,     2,
    -121,  -121,     2,  -121,   230,   177,    35,    22,  -121,  -121,
    -121,  -121,   229,   231,  -121,    72,    72,  -121,     2,   189,
     215,  -121,  -121,  -121
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    35,    20,    15,    10,
       7,     7,     0,     0,     0,     0,     0,    37,     0,     0,
       0,    15,    15,    15,     0,     0,     0,    10,    10,     5,
       6,     0,     0,     0,     0,     0,    39,     0,     0,     0,
       4,    72,     0,     0,     0,    66,     0,    61,    65,    11,
      71,    73,    74,    75,    82,    81,    76,    12,    13,    14,
       0,    15,     0,    15,    37,    37,     0,    40,    42,     8,
       9,     0,     0,     0,     0,    17,     0,    30,    66,    69,
      58,    28,    52,    26,     0,     0,     0,     0,     0,     0,
      27,    45,    46,    51,    57,    47,    16,     0,     0,     0,
       2,    66,     0,     0,     0,     0,     0,     0,    68,     0,
      62,     0,    90,     0,    37,     0,    43,    44,     3,    41,
      35,    35,    35,    35,     0,     0,     0,     0,     0,    56,
      66,     0,    53,    45,    46,    25,    20,     0,     0,     0,
       0,     0,     0,    38,    18,     0,     0,     0,     0,    97,
       0,    77,     0,     0,    65,    64,    70,     0,     0,     0,
       0,     0,    85,     0,     0,    34,    32,    31,    33,     0,
       0,    21,     0,     0,    50,    60,    19,    24,    59,    49,
      48,    55,    54,    37,     0,     0,    80,     0,    94,    67,
      63,     0,     0,     0,     0,    90,     0,     0,     0,     0,
      95,    36,    83,     0,     0,     0,    96,     0,     0,     0,
      87,    89,     0,    86,     0,    30,     0,     0,    78,    93,
      91,    92,     0,     0,    29,     0,     0,    88,     0,     0,
      80,    22,    84,    79
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -121,  -121,  -121,  -121,   167,   152,     0,   153,   103,   110,
    -121,   102,   -78,  -120,    25,    50,   -59,   -90,  -121,  -121,
     174,   -41,   -58,   -70,   -20,  -121,    90,   136,   138,  -109,
    -121,  -121,  -121,    16,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,    54,  -121,  -121,  -121,  -117
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     8,    18,     9,    26,    19,    20,    21,    22,
      23,    16,    88,    89,   126,    14,    37,    38,    66,    67,
      68,    90,    91,    92,    93,    47,   110,    48,    94,    49,
      50,    51,    52,   205,    53,    54,    55,    27,    28,    61,
      63,   160,   161,    56,    95,   150
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,   102,   156,   104,   169,   116,   117,   143,   106,   135,
     172,   107,   107,   -62,   129,   189,   134,   177,   -23,    76,
      77,   145,    64,   138,   138,   157,   158,   132,   133,    78,
      79,     1,    80,   187,    81,    82,    83,   184,    84,   186,
     213,    85,   148,   128,    86,   128,   226,    65,   138,    87,
      24,   159,   108,   108,   -62,   163,   127,    25,   138,   146,
     225,   113,   138,   115,   149,   151,   152,   191,   192,   193,
     206,   181,   182,   173,   138,   138,   141,    41,   214,   203,
     142,   179,   180,    42,    43,    44,   149,    12,    13,   153,
     130,    46,   199,   138,   139,   140,    82,   178,     3,    45,
     128,   128,    85,   141,     4,   131,   185,   142,    10,   175,
      71,    72,    73,    10,    10,    11,   229,   230,   130,    79,
      11,    11,     6,   197,   201,    15,    46,     7,    46,   219,
     220,   221,   101,    79,   222,    80,     5,    81,    82,   101,
      79,    84,    80,    31,    85,    82,   149,    86,    84,    32,
     231,    85,     6,    33,    86,    40,    17,     7,    34,   139,
     140,    36,   216,   217,   174,   141,   -46,   142,   -46,   142,
     165,   166,   167,   168,    57,    58,    59,    29,    30,    69,
      70,    35,    39,    60,    62,    74,    75,    96,    97,    99,
     100,    98,   103,   105,   109,   111,   120,    65,   121,   122,
     112,   114,   123,   124,   125,    46,    46,   118,   136,   138,
     137,   144,   127,   147,   162,   170,   139,   164,   183,   188,
     171,   195,   194,   198,   196,   -63,   -46,   200,   202,   204,
     210,   215,   212,   227,   207,   208,   209,   223,   176,   228,
     224,   119,   218,   232,   190,   154,   233,   155,     0,   211
};

static const yytype_int16 yycheck[] =
{
      20,    42,   111,    44,   124,    64,    65,    97,     3,    87,
     127,     6,     6,     6,    84,     7,    86,   137,     4,    17,
      18,    99,    23,    40,    40,    22,    23,    85,    86,    27,
      28,    10,    30,    49,    32,    33,    34,   146,    36,   148,
      57,    39,    24,    84,    42,    86,    24,    48,    40,    47,
       9,    48,    47,    47,    47,   114,    42,    16,    40,    25,
      25,    61,    40,    63,   105,   106,   107,   157,   158,   159,
     187,   141,   142,   131,    40,    40,    37,     5,   198,    26,
      41,   139,   140,    11,    12,    13,   127,    27,    28,   109,
      27,   111,   170,    40,    38,    39,    33,   138,    27,    27,
     141,   142,    39,    37,     0,    42,   147,    41,     5,    43,
      31,    32,    33,    10,    11,     5,   225,   226,    27,    28,
      10,    11,    15,   164,   183,    27,   146,    20,   148,   207,
     208,   209,    27,    28,   212,    30,     4,    32,    33,    27,
      28,    36,    30,    29,    39,    33,   187,    42,    36,    29,
     228,    39,    15,    56,    42,    44,    19,    20,    29,    38,
      39,    27,   203,   204,    43,    37,    40,    41,    40,    41,
     120,   121,   122,   123,    21,    22,    23,    10,    11,    27,
      28,    58,    52,    27,    27,    30,     4,     4,    49,    35,
      46,    60,    27,    42,    46,     4,     4,    48,     4,     4,
      42,    42,     4,     6,    27,   225,   226,    45,     4,    40,
      50,     4,    42,     3,    51,    35,    38,    21,     4,    43,
      59,     4,    43,    50,    43,    40,    40,    43,    53,    14,
       4,     4,    21,     4,    35,    35,    35,     7,   136,     8,
     215,    67,    55,    54,   154,   109,   230,   109,    -1,   195
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    62,    27,     0,     4,    15,    20,    63,    65,
      69,    70,    27,    28,    76,    27,    72,    19,    64,    67,
      68,    69,    70,    71,     9,    16,    66,    98,    99,    65,
      65,    29,    29,    56,    29,    58,    27,    77,    78,    52,
      44,     5,    11,    12,    13,    27,    85,    86,    88,    90,
      91,    92,    93,    95,    96,    97,   104,    68,    68,    68,
      27,   100,    27,   101,    23,    48,    79,    80,    81,    66,
      66,    31,    32,    33,    30,     4,    17,    18,    27,    28,
      30,    32,    33,    34,    36,    39,    42,    47,    73,    74,
      82,    83,    84,    85,    89,   105,     4,    49,    60,    35,
      46,    27,    82,    27,    82,    42,     3,     6,    47,    46,
      87,     4,    42,    67,    42,    67,    77,    77,    45,    81,
       4,     4,     4,     4,     6,    27,    75,    42,    82,    84,
      27,    42,    83,    83,    84,    73,     4,    50,    40,    38,
      39,    37,    41,    78,     4,    73,    25,     3,    24,    82,
     106,    82,    82,    85,    88,    89,    90,    22,    23,    48,
     102,   103,    51,    77,    21,    76,    76,    76,    76,    74,
      35,    59,   106,    83,    43,    43,    72,    74,    82,    83,
      83,    84,    84,     4,    90,    82,    90,    49,    43,     7,
      87,    78,    78,    78,    43,     4,    43,    82,    50,    73,
      43,    77,    53,    26,    14,    94,   106,    35,    35,    35,
       4,   102,    21,    57,    74,     4,    82,    82,    55,    73,
      73,    73,    73,     7,    75,    25,    24,     4,     8,    90,
      90,    73,    54,    94
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    61,    62,    63,    64,    65,    65,    65,    66,    66,
      66,    67,    68,    68,    68,    68,    69,    70,    71,    72,
      72,    73,    73,    73,    73,    73,    73,    74,    74,    75,
      75,    76,    76,    76,    76,    76,    77,    77,    78,    78,
      79,    79,    79,    80,    81,    82,    82,    82,    83,    83,
      83,    83,    83,    83,    84,    84,    84,    84,    84,    84,
      84,    85,    86,    87,    87,    87,    88,    88,    88,    89,
      90,    90,    91,    91,    91,    91,    91,    92,    93,    94,
      94,    95,    95,    96,    97,    98,    99,   100,   101,   102,
     102,   103,   103,   103,   104,   105,   106,   106
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     4,     4,     4,     5,
       0,     3,     8,     1,     3,     2,     1,     1,     1,     5,
       0,     5,     5,     5,     5,     0,     5,     0,     3,     1,
       1,     2,     1,     2,     2,     1,     1,     1,     3,     3,
       3,     1,     1,     2,     3,     3,     2,     1,     1,     3,
       3,     1,     2,     3,     2,     0,     1,     4,     2,     1,
       3,     1,     1,     1,     1,     1,     1,     3,     6,     5,
       0,     1,     1,     5,     9,     4,     6,     5,     7,     3,
       0,     4,     4,     4,     4,     4,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 26: /* V_d_tipo: T_NOMBRE_TIPO  */
#line 143 "parser.y"
        {
            char* aux;
            while(!esNulaColaDeStrings(colaTempVariables)){
                aux = primeroColaDeStrings(colaTempVariables);
                insertaSimbolos(&ts, aux, (yyvsp[0].cadena));
                avanceColaDeStrings(&colaTempVariables);
            }
        }
#line 1362 "parser.tab.c"
    break;

  case 38: /* V_lista_id: T_ID T_SEPARADOR V_lista_id  */
#line 168 "parser.y"
            { 
                pideTurnoColaDeStrings(&colaTempVariables, (yyvsp[-2].cadena));
            }
#line 1370 "parser.tab.c"
    break;

  case 39: /* V_lista_id: T_ID  */
#line 172 "parser.y"
            { 
                pideTurnoColaDeStrings(&colaTempVariables, (yyvsp[0].cadena));
            }
#line 1378 "parser.tab.c"
    break;

  case 48: /* V_exp_a: V_exp_a T_OPERADOR_PRIO_TRES V_exp_a  */
#line 190 "parser.y"
        {
            int T = newTempVariable(&ts);
            (yyval.celda).place = T;
            if((yyvsp[-2].celda).type == ENTERO && (yyvsp[0].celda).type == ENTERO){
                modificarTipoT(&ts, T, ENTERO);
                if(strcmp((yyvsp[-1].cadena), "+") == 0){
                    insertaCuadrupla(&tc, T, "+E", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    (yyval.celda).type = ENTERO;
                }else if(strcmp((yyvsp[-1].cadena), "-") == 0){
                    insertaCuadrupla(&tc, T, "-E", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    (yyval.celda).type = ENTERO;
                }
            }else if((yyvsp[-2].celda).type == ENTERO && (yyvsp[0].celda).type == REAL){
                modificarTipoT(&ts, T, REAL);
                if(strcmp((yyvsp[-1].cadena), "+") == 0){
                    insertaCuadrupla(&tc, T, "INT_TO_REAL", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    insertaCuadrupla(&tc, T, "+R", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    (yyval.celda).type = REAL;
                }else if(strcmp((yyvsp[-1].cadena), "-") == 0){
                    insertaCuadrupla(&tc, T, "INT_TO_REAL", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    insertaCuadrupla(&tc, T, "-R", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    (yyval.celda).type = REAL;
                }
            }else if((yyvsp[-2].celda).type == REAL && (yyvsp[0].celda).type == ENTERO){
                modificarTipoT(&ts, T, REAL);
                if(strcmp((yyvsp[-1].cadena), "+") == 0){
                    insertaCuadrupla(&tc, T, "INT_TO_REAL", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    insertaCuadrupla(&tc, T, "+R", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    (yyval.celda).type = REAL;
                }else if(strcmp((yyvsp[-1].cadena), "-") == 0){
                    insertaCuadrupla(&tc, T, "INT_TO_REAL", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    insertaCuadrupla(&tc, T, "-R", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    (yyval.celda).type = REAL;
                }
            }else if((yyvsp[-2].celda).type == REAL && (yyvsp[0].celda).type == REAL){
                modificarTipoT(&ts, T, REAL);
                if(strcmp((yyvsp[-1].cadena), "+") == 0){
                    insertaCuadrupla(&tc, T, "+R", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    (yyval.celda).type = REAL;
                }else if(strcmp((yyvsp[-1].cadena), "-") == 0){
                    insertaCuadrupla(&tc, T, "-R", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    (yyval.celda).type = REAL;
                }
            }

        }
#line 1429 "parser.tab.c"
    break;

  case 49: /* V_exp_a: V_exp_a T_OPERADOR_PRIO_DOS V_exp_a  */
#line 237 "parser.y"
        {
            int T = newTempVariable(&ts);
            (yyval.celda).place = T;
            if((yyvsp[-2].celda).type == ENTERO && (yyvsp[0].celda).type == ENTERO){
                modificarTipoT(&ts, T, ENTERO);
                if(strcmp((yyvsp[-1].cadena), "*") == 0){
                    insertaCuadrupla(&tc, T, "*E", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    (yyval.celda).type = ENTERO;
                }else if(strcmp((yyvsp[-1].cadena), "div") == 0){
                    insertaCuadrupla(&tc, T, "div", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    (yyval.celda).type = ENTERO;
                }else if(strcmp((yyvsp[-1].cadena), "/") == 0){
                    insertaCuadrupla(&tc, T, "/E", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    (yyval.celda).type = ENTERO;
                }else if(strcmp((yyvsp[-1].cadena), "mod") == 0){
                    insertaCuadrupla(&tc, T, "modE", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    (yyval.celda).type = ENTERO;
                }
            }else if((yyvsp[-2].celda).type == ENTERO && (yyvsp[0].celda).type == REAL){
                modificarTipoT(&ts, T, REAL);
                if(strcmp((yyvsp[-1].cadena), "*") == 0){
                    insertaCuadrupla(&tc, T, "INT_TO_REAL", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    insertaCuadrupla(&tc, T, "*R", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    (yyval.celda).type = REAL;
                }else if(strcmp((yyvsp[-1].cadena), "/") == 0){
                    insertaCuadrupla(&tc, T, "INT_TO_REAL", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    insertaCuadrupla(&tc, T, "/R", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    (yyval.celda).type = REAL;
                }else if(strcmp((yyvsp[-1].cadena), "mod") == 0){
                    insertaCuadrupla(&tc, T, "INT_TO_REAL", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    insertaCuadrupla(&tc, T, "modR", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    (yyval.celda).type = REAL;
                }
            }else if((yyvsp[-2].celda).type == REAL && (yyvsp[0].celda).type == ENTERO){
                modificarTipoT(&ts, T, REAL);
                if(strcmp((yyvsp[-1].cadena), "*") == 0){
                    insertaCuadrupla(&tc, T, "INT_TO_REAL", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    insertaCuadrupla(&tc, T, "*R", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    (yyval.celda).type = REAL;
                }else if(strcmp((yyvsp[-1].cadena), "/") == 0){
                    insertaCuadrupla(&tc, T, "INT_TO_REAL", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    insertaCuadrupla(&tc, T, "/R", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    (yyval.celda).type = REAL;
                }else if(strcmp((yyvsp[-1].cadena), "mod") == 0){
                    insertaCuadrupla(&tc, T, "INT_TO_REAL", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    insertaCuadrupla(&tc, T, "modR", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    (yyval.celda).type = REAL;
                }
            }else if((yyvsp[-2].celda).type == REAL && (yyvsp[0].celda).type == REAL){
                modificarTipoT(&ts, T, REAL);
                if(strcmp((yyvsp[-1].cadena), "*") == 0){
                    insertaCuadrupla(&tc, T, "*R", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    (yyval.celda).type = REAL;
                }else if(strcmp((yyvsp[-1].cadena), "/") == 0){
                    insertaCuadrupla(&tc, T, "/R", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    (yyval.celda).type = REAL;
                }else if(strcmp((yyvsp[-1].cadena), "mod") == 0){
                    insertaCuadrupla(&tc, T, "modR", (yyvsp[-2].celda).place, (yyvsp[0].celda).place);
                    (yyval.celda).type = REAL;
                }
            }
        }
#line 1496 "parser.tab.c"
    break;

  case 50: /* V_exp_a: T_PARENTESIS_APERTURA V_exp_a T_PARENTESIS_CIERRE  */
#line 301 "parser.y"
        {
            (yyval.celda).place = (yyvsp[-1].celda).place;
            (yyval.celda).type = (yyvsp[-1].celda).type;
        }
#line 1505 "parser.tab.c"
    break;

  case 51: /* V_exp_a: V_operando  */
#line 306 "parser.y"
        {
            (yyval.celda) = (yyvsp[0].celda);
        }
#line 1513 "parser.tab.c"
    break;

  case 53: /* V_exp_a: T_OPERADOR_PRIO_TRES V_exp_a  */
#line 311 "parser.y"
        {
            int T = newTempVariable(&ts);
            modificarTipoT(&ts,T, (yyvsp[0].celda).type);
            (yyval.celda).place = T;

            if ((yyvsp[0].celda).type == ENTERO) {
                insertaCuadrupla(&tc, T, "-E", (yyvsp[0].celda).place, 0);
            } else if ((yyvsp[0].celda).type == REAL) {
                insertaCuadrupla(&tc, T, "-R", (yyvsp[0].celda).place, 0);
            }
            if ((yyvsp[0].celda).type == ENTERO) {
                insertaCuadrupla(&tc, T, "+E", (yyvsp[0].celda).place, 0);
            } else if ((yyvsp[0].celda).type == REAL) {
                insertaCuadrupla(&tc, T, "+R", (yyvsp[0].celda).place, 0);
            }
        }
#line 1534 "parser.tab.c"
    break;

  case 61: /* V_operando: V_cadena_operandos  */
#line 336 "parser.y"
            {
                (yyval.celda) = (yyvsp[0].celda);
            }
#line 1542 "parser.tab.c"
    break;

  case 62: /* V_cadena_operandos: V_operando_no_booleano V_continuacion_cadena  */
#line 340 "parser.y"
                    {
                        (yyval.celda) = (yyvsp[-1].celda);
                    }
#line 1550 "parser.tab.c"
    break;

  case 66: /* V_operando_no_booleano: T_ID  */
#line 347 "parser.y"
                        {
                            (yyval.celda) = buscaSimboloPorNombre(ts, (yyvsp[0].cadena));
                        }
#line 1558 "parser.tab.c"
    break;


#line 1562 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 392 "parser.y"


int main(int argc, char **argv){
	/* #if defined YYDEBUG
	yydebug = 1;
	#endif */
	++argv, --argc;
	if (argc > 0)
		yyin = fopen(argv[0], "r");
	else
		yyin = stdin;
	ts = nuevaTablaDeSimbolos();
    tc = nuevaTablaDeCuadruplas();
    nuevaColaDeStrings(&colaTempVariables);
	yyparse();
    imprimeTablaDeSimbolos(ts);
	imprimeTablaDeCuadruplas(tc);
	return 0;
}

void yyerror(const char *s) {
    fprintf(stderr, "Error de sintaxis: %s\n", s);
}






 // DUDAS
 // Tabla simbolos...


 /*
 bison -v -d parser.y
 flex scanner.l
 gcc -c lex.yy.c
 gcc parser.tab.c lex.yy.o -lfl -lm 
 */
