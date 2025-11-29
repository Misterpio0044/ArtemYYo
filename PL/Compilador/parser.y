%{
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

%}

%union {
    char *cadena; 

    Celda celda;

    LiteralBooleanoT literal_booleano;
    LiteralCaracterT literal_caracter;
    LiteralCadenaT literal_cadena;
    LiteralT literal_numerico;
}

%type <cadena> V_lista_id
%type <celda> V_operando_no_booleano
%type <celda> V_cadena_operandos
%type <celda> V_operando
%type <celda> V_exp_a

%token T_ASIGNACION
%token T_COMPOSICION_SECUENCIAL
%token T_CONTINUAR
%token T_CORCHETE_APERTURA
%token T_CORCHETE_CIERRE
%token T_DE
%token T_DECL_ACC
%token T_DECL_ALGORITMO
%token T_DECL_B_MIENTRAS
%token T_DECL_B_PARA
%token T_DECL_CONDICIONAL_SI
%token T_DECL_CONDICIONAL_SINO
%token T_DECL_CONST
%token T_DECL_FUNC
%token T_DECL_TABLA
%token T_DECL_TUPLA
%token T_DECL_VAR
%token T_DEF_TIPO
%token T_DEV
%token T_E_S
%token T_ENTRADA
%token T_ENTONCES
%token T_HACER
%token T_HASTA
%token <cadena> T_ID
%token <cadena> T_ID_BOOLEANO
%token T_IGUAL
%token <literal_booleano> T_LITERAL_BOOLEANO
%token <literal_cadena> T_LITERAL_CADENA
%token <literal_caracter> T_LITERAL_CARACTER
%token <literal_numerico> T_LITERAL_NUMERICO
%token <cadena> T_NOMBRE_TIPO
%token T_OPERADOR_DEF_TIPO
%token T_OPERADOR_NO
%token T_OPERADOR_O
%token <cadena> T_OPERADOR_PRIO_DOS
%token <cadena> T_OPERADOR_PRIO_TRES
%token T_OPERADOR_RELACIONAL
%token T_OPERADOR_Y
%token T_PARENTESIS_APERTURA
%token T_PARENTESIS_CIERRE
%token T_POST
%token T_PREC
%token T_PUNTO
%token T_REF
%token T_SALIDA
%token T_SEPARADOR
%token T_SUBRANGO_TABLA
%token T_TERM_ACC
%token T_TERM_ALGORITMO
%token T_TERM_B_MIENTRAS
%token T_TERM_B_PARA
%token T_TERM_CONDICIONAL_SI
%token T_TERM_CONST
%token T_TERM_FUNC
%token T_TERM_TIPO
%token T_TERM_TUPLA
%token T_TERM_VAR

%left T_OPERADOR_O
%left T_OPERADOR_Y

%left T_OPERADOR_PRIO_TRES
%left T_OPERADOR_PRIO_DOS

%nonassoc T_OPERADOR_RELACIONAL

%%
 // Definición de prorama
 // algoritmo: algoritmo orden3; (cabecera) (bloque) falgoritmo .
 // cabecera: (globales) (funciones/acciones) (entradas y salidas) precondicion
 // bloque: (codigo) postcondicion
 // globales: (tipo)/(const) (global)
 // funciones/acciones:  

algoritmo: T_DECL_ALGORITMO T_ID T_COMPOSICION_SECUENCIAL V_cabecera V_bloque_alg T_TERM_ALGORITMO T_PUNTO;
V_cabecera: V_decl_globales V_decl_a_f V_decl_ent_sal T_PREC;
V_bloque_alg: V_bloque T_POST;
V_decl_globales: V_declaracion_tipo V_decl_globales 
               | V_declaracion_const V_decl_globales 
               | ;
V_decl_a_f: V_accion_d V_decl_a_f | V_funcion_d V_decl_a_f 
          | ;
V_bloque: V_declaraciones V_instrucciones;
V_declaraciones: V_declaracion_tipo V_declaraciones 
               | V_declaracion_const V_declaraciones 
               | V_declaracion_var V_declaraciones 
               | ;


 // Definicion de declaraciones de tipo, const y var
V_declaracion_tipo: T_DEF_TIPO V_lista_d_tipo T_TERM_TIPO T_COMPOSICION_SECUENCIAL;
V_declaracion_const: T_DECL_CONST V_lista_d_const T_TERM_CONST T_COMPOSICION_SECUENCIAL;
V_declaracion_var: T_DECL_VAR V_lista_d_var T_TERM_VAR T_COMPOSICION_SECUENCIAL;

 // Definición lista de tipos
V_lista_d_tipo: T_ID T_IGUAL V_d_tipo T_COMPOSICION_SECUENCIAL V_lista_d_tipo 
              | ;
V_d_tipo: T_DECL_TUPLA V_lista_campos T_TERM_TUPLA 
        | T_DECL_TABLA T_CORCHETE_APERTURA V_expresion_t T_SUBRANGO_TABLA V_expresion_t T_CORCHETE_CIERRE T_DE V_d_tipo
        | T_ID 
        | V_expresion_t T_SUBRANGO_TABLA V_expresion_t 
        | T_REF V_d_tipo 
        | T_NOMBRE_TIPO
        {
            char* aux;
            while(!esNulaColaDeStrings(colaTempVariables)){
                aux = primeroColaDeStrings(colaTempVariables);
                insertaSimbolos(&ts, aux, $1);
                avanceColaDeStrings(&colaTempVariables);
            }
        };
V_expresion_t: V_expresion 
             | T_LITERAL_CARACTER;
V_lista_campos: T_ID T_OPERADOR_DEF_TIPO V_d_tipo T_COMPOSICION_SECUENCIAL V_lista_campos 
              | ;


 // Definicion lista de constantes
V_lista_d_const: T_ID T_IGUAL T_LITERAL_NUMERICO T_COMPOSICION_SECUENCIAL V_lista_d_const 
               | T_ID T_IGUAL T_LITERAL_CARACTER T_COMPOSICION_SECUENCIAL V_lista_d_const
               | T_ID_BOOLEANO T_IGUAL T_LITERAL_BOOLEANO T_COMPOSICION_SECUENCIAL V_lista_d_const  
               | T_ID T_IGUAL T_LITERAL_CADENA T_COMPOSICION_SECUENCIAL V_lista_d_const  
               | ;

 // Definicion lista de variables
V_lista_d_var: V_lista_id T_OPERADOR_DEF_TIPO V_d_tipo T_COMPOSICION_SECUENCIAL V_lista_d_var 
             | ;
V_lista_id: T_ID T_SEPARADOR V_lista_id
            { 
                pideTurnoColaDeStrings(&colaTempVariables, $1);
            }
            | T_ID
            { 
                pideTurnoColaDeStrings(&colaTempVariables, $1);
            };


 // Definicion de entradas y salidas
V_decl_ent_sal: V_decl_ent 
              | V_decl_ent V_decl_sal 
              | V_decl_sal;
V_decl_ent: T_ENTRADA V_lista_d_var;
V_decl_sal: T_SALIDA V_lista_d_var;


 // Definicion de expresiones
V_expresion: V_exp_a 
            | V_exp_b 
            | V_funcion_ll;
V_exp_a: V_exp_a T_OPERADOR_PRIO_TRES V_exp_a
        {
            int T = newTempVariable(&ts);
            $$.place = T;
            if($1.type == ENTERO && $3.type == ENTERO){
                modificarTipoT(&ts, T, ENTERO);
                if(strcmp($2, "+") == 0){
                    insertaCuadrupla(&tc, T, "+E", $1.place, $3.place);
                    $$.type = ENTERO;
                }else if(strcmp($2, "-") == 0){
                    insertaCuadrupla(&tc, T, "-E", $1.place, $3.place);
                    $$.type = ENTERO;
                }
            }else if($1.type == ENTERO && $3.type == REAL){
                modificarTipoT(&ts, T, REAL);
                if(strcmp($2, "+") == 0){
                    insertaCuadrupla(&tc, T, "ITR", $1.place, -1);
                    insertaCuadrupla(&tc, T, "+R", $1.place, $3.place);
                    $$.type = REAL;
                }else if(strcmp($2, "-") == 0){
                    insertaCuadrupla(&tc, T, "ITR", $1.place, -1);
                    insertaCuadrupla(&tc, T, "-R", $1.place, $3.place);
                    $$.type = REAL;
                }
            }else if($1.type == REAL && $3.type == ENTERO){
                modificarTipoT(&ts, T, REAL);
                if(strcmp($2, "+") == 0){
                    insertaCuadrupla(&tc, T, "ITR", $3.place, -1);
                    insertaCuadrupla(&tc, T, "+R", $1.place, $3.place);
                    $$.type = REAL;
                }else if(strcmp($2, "-") == 0){
                    insertaCuadrupla(&tc, T, "ITR", $3.place, -1);
                    insertaCuadrupla(&tc, T, "-R", $1.place, $3.place);
                    $$.type = REAL;
                }
            }else if($1.type == REAL && $3.type == REAL){
                modificarTipoT(&ts, T, REAL);
                if(strcmp($2, "+") == 0){
                    insertaCuadrupla(&tc, T, "+R", $1.place, $3.place);
                    $$.type = REAL;
                }else if(strcmp($2, "-") == 0){
                    insertaCuadrupla(&tc, T, "-R", $1.place, $3.place);
                    $$.type = REAL;
                }
            }

        }
        | V_exp_a T_OPERADOR_PRIO_DOS V_exp_a 
        {
            int T = newTempVariable(&ts);
            $$.place = T;
            
            if(strcmp($2, "/") == 0){
                modificarTipoT(&ts, T, REAL);
                $$.type = REAL;
                if($1.type == ENTERO){
                    insertaCuadrupla(&tc, T, "ITR", $1.place, -1);
                }
                if($3.type == ENTERO){
                    insertaCuadrupla(&tc, T, "ITR", $3.place, -1);
                }
                insertaCuadrupla(&tc, T, "/", $1.place, $3.place);
            }
            else if(strcmp($2, "div") == 0){
                modificarTipoT(&ts, T, ENTERO);
                $$.type = ENTERO;
                if($1.type == REAL){
                    insertaCuadrupla(&tc, T, "RTI", $1.place, -1);
                }
                if($3.type == REAL){
                    insertaCuadrupla(&tc, T, "RTI", $3.place, -1);
                }
                insertaCuadrupla(&tc, T, "div", $1.place, $3.place);
            }
            else if($1.type == ENTERO && $3.type == ENTERO){
                modificarTipoT(&ts, T, ENTERO);
                if(strcmp($2, "*") == 0){
                    insertaCuadrupla(&tc, T, "*E", $1.place, $3.place);
                    $$.type = ENTERO;
                }else if(strcmp($2, "mod") == 0){
                    insertaCuadrupla(&tc, T, "modE", $1.place, $3.place);
                    $$.type = ENTERO;
                }
            }else if($1.type == ENTERO && $3.type == REAL){
                modificarTipoT(&ts, T, REAL);
                if(strcmp($2, "*") == 0){
                    insertaCuadrupla(&tc, T, "ITR", $1.place, -1);
                    insertaCuadrupla(&tc, T, "*R", $1.place, $3.place);
                    $$.type = REAL;
                }else if(strcmp($2, "mod") == 0){
                    insertaCuadrupla(&tc, T, "ITR", $1.place, -1);
                    insertaCuadrupla(&tc, T, "modR", $1.place, $3.place);
                    $$.type = REAL;
                }
            }else if($1.type == REAL && $3.type == ENTERO){
                modificarTipoT(&ts, T, REAL);
                if(strcmp($2, "*") == 0){
                    insertaCuadrupla(&tc, T, "ITR", $3.place, -1);
                    insertaCuadrupla(&tc, T, "*R", $1.place, $3.place);
                    $$.type = REAL;
                }else if(strcmp($2, "mod") == 0){
                    insertaCuadrupla(&tc, T, "ITR", $3.place, -1);
                    insertaCuadrupla(&tc, T, "modR", $1.place, $3.place);
                    $$.type = REAL;
                }
            }else if($1.type == REAL && $3.type == REAL){
                modificarTipoT(&ts, T, REAL);
                if(strcmp($2, "*") == 0){
                    insertaCuadrupla(&tc, T, "*R", $1.place, $3.place);
                    $$.type = REAL;
                }else if(strcmp($2, "mod") == 0){
                    insertaCuadrupla(&tc, T, "modR", $1.place, $3.place);
                    $$.type = REAL;
                }
            }
        }

        | T_PARENTESIS_APERTURA V_exp_a T_PARENTESIS_CIERRE
        {
            $$.place = $2.place;
            $$.type = $2.type;
        }
        | V_operando
        {
            $$ = $1;
        }
        | T_LITERAL_NUMERICO
        | T_OPERADOR_PRIO_TRES V_exp_a
        {
            int T = newTempVariable(&ts);
            modificarTipoT(&ts,T, $2.type);
            $$.place = T;

            if ($2.type == ENTERO) {
                insertaCuadrupla(&tc, T, "-E", $2.place, 0);
            } else if ($2.type == REAL) {
                insertaCuadrupla(&tc, T, "-R", $2.place, 0);
            }
            if ($2.type == ENTERO) {
                insertaCuadrupla(&tc, T, "+E", $2.place, 0);
            } else if ($2.type == REAL) {
                insertaCuadrupla(&tc, T, "+R", $2.place, 0);
            }
        };

V_exp_b: V_exp_b T_OPERADOR_Y V_exp_b
        | V_exp_b T_OPERADOR_O V_exp_b
        | T_OPERADOR_NO V_exp_b
        | V_operando_booleano
        | T_LITERAL_BOOLEANO
        | V_expresion T_OPERADOR_RELACIONAL V_expresion
        | T_PARENTESIS_APERTURA V_exp_b T_PARENTESIS_CIERRE;
V_operando: V_cadena_operandos
            {
                $$ = $1;
            };
V_cadena_operandos: V_operando_no_booleano V_continuacion_cadena
                    {
                        $$ = $1;
                    };
V_continuacion_cadena: T_PUNTO V_operando_no_booleano V_continuacion_cadena
                     | T_PUNTO V_operando_booleano 
                     | ;
V_operando_no_booleano: T_ID
                        {
                            $$ = buscaSimboloPorNombre(ts, $1);
                        }
          | V_operando T_CORCHETE_APERTURA V_expresion T_CORCHETE_CIERRE
          | V_operando T_REF;
V_operando_booleano: T_ID_BOOLEANO;



 // Definición de instrucciones
V_instrucciones: V_instruccion T_COMPOSICION_SECUENCIAL V_instrucciones
               | V_instruccion;
V_instruccion: T_CONTINUAR
             | V_asignacion
             | V_alternativa
             | V_iiteracion
             | V_accion_ll;
V_asignacion: V_operando T_ASIGNACION V_expresion;
V_alternativa: T_DECL_CONDICIONAL_SI V_expresion T_ENTONCES V_instrucciones V_lista_opciones T_TERM_CONDICIONAL_SI;
V_lista_opciones: T_DECL_CONDICIONAL_SINO V_expresion T_ENTONCES V_instrucciones V_lista_opciones
                | ;
V_iiteracion: V_it_cota_fija
            | V_it_cota_exp;
V_it_cota_exp: T_DECL_B_MIENTRAS V_expresion T_HACER V_instrucciones T_TERM_B_MIENTRAS;
V_it_cota_fija: T_DECL_B_PARA T_ID T_ASIGNACION V_expresion T_HASTA V_expresion T_HACER V_instrucciones T_TERM_B_PARA;


 // Definicion de acciones y funciones
V_accion_d: T_DECL_ACC V_a_cabecera V_bloque T_TERM_ACC;
V_funcion_d: T_DECL_FUNC V_f_cabecera V_bloque T_DEV V_expresion T_TERM_FUNC;
V_a_cabecera: T_ID T_PARENTESIS_APERTURA V_d_par_form T_PARENTESIS_CIERRE T_COMPOSICION_SECUENCIAL;
V_f_cabecera: T_ID T_PARENTESIS_APERTURA V_lista_d_var T_PARENTESIS_CIERRE T_DEV V_d_tipo T_COMPOSICION_SECUENCIAL;
V_d_par_form: V_d_p_form T_COMPOSICION_SECUENCIAL V_d_par_form
            | ;
V_d_p_form: T_ENTRADA V_lista_id T_OPERADOR_DEF_TIPO V_d_tipo
          | T_SALIDA V_lista_id T_OPERADOR_DEF_TIPO V_d_tipo
          | T_E_S V_lista_id T_OPERADOR_DEF_TIPO V_d_tipo;


 // Defincion de accionesll y funcionesll
V_accion_ll: T_ID T_PARENTESIS_APERTURA V_l_ll T_PARENTESIS_CIERRE;
V_funcion_ll: T_ID T_PARENTESIS_APERTURA V_l_ll T_PARENTESIS_CIERRE;
V_l_ll: V_expresion T_SEPARADOR V_l_ll    
    | V_expresion;

%%

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