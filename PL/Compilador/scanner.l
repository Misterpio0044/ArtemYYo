%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <strings.h>

	#include "nombresDeTipos.h"
	#include "literal.h"
	#include "colaDeStrings.h"
    #include "tablaDeSimbolos.h"
	#include "parser.tab.h"
	
	void errorEnScanner(char*, char*);
%}

ER_prec \{(?i:Prec)\:(\/\}|[^\}])*\}
ER_post \{(?i:Post)\:(\/\}|[^\}])*\}
ER_comentario \{(\/\}|[^\}])*\}
ER_literal_cadena \'(\/\'|[^\'])*\'
ER_literal_caracter \".\"
ER_espacios [ \t\n]+ 

ER_decl_algoritmo (?i:algoritmo)
ER_term_algoritmo (?i:falgoritmo)
ER_decl_acc (?i:accion)
ER_term_acc (?i:faccion)
ER_decl_func (?i:funcion)
ER_term_func (?i:ffuncion)
ER_nombre_tipo (?i:booleano|caracter|cadena|entero|real)
ER_decl_var (?i:var)
ER_term_var (?i:fvar)
ER_decl_const (?i:const)
ER_term_const (?i:fconst)
ER_def_tipo (?i:tipo)
ER_term_tipo (?i:ftipo)
ER_decl_tabla (?i:tabla)
ER_decl_tupla (?i:tupla)
ER_term_tupla (?i:ftupla)
ER_decl_condicional_si (?i:si)
ER_decl_condicional_sino \[\]
ER_term_condicional_si (?i:fsi)
ER_decl_b_para (?i:para)
ER_term_b_para (?i:fpara)
ER_decl_b_mientras (?i:mientras)
ER_term_b_mientras (?i:fmientras)
ER_dev (?i:dev)
ER_entrada (?i:ent)
ER_salida (?i:sal)
ER_e_s (?i:e\/s)
ER_continuar (?i:continuar)
ER_de (?i:de)
ER_hasta (?i:hasta)
ER_ref (?i:ref)
ER_hacer (?i:hacer)

ER_literal_booleano (?i:verdadero|falso)
ER_asignacion \:\=
ER_entonces\-\>
ER_punto \.
ER_subrango_tabla \.\.
ER_operador_prio_dos (?i:div|\/|\*|mod)
ER_operador_prio_tres \+|\-
ER_igual \=
ER_composicion_secuencial \;
ER_separador \,
ER_operador_def_tipo \:
ER_operador_o (?i:o)
ER_operador_y (?i:y)
ER_operador_no (?i:no)
ER_operador_relacional \<=|\>=|\!=|\>|\<
ER_parentesis_aperura \(
ER_parentesis_cierre \)
ER_corchete_apertura \[
ER_corchete_cierre \]
ER_letra [a-zA-Z]
ER_cifra [0-9]
ER_id {ER_letra}({ER_letra}|{ER_cifra})*
ER_literal_entero {ER_cifra}{ER_cifra}*((\+)?(e|E){ER_cifra}{ER_cifra}*)?
ER_literal_real {ER_cifra}{ER_cifra}*\.{ER_cifra}{ER_cifra}*((e|E)(\+|-)?{ER_cifra}{ER_cifra}*)?|{ER_literal_entero}(r|R)

%%

{ER_asignacion}             { return T_ASIGNACION; }
{ER_post}                   { return T_POST; }
{ER_prec}                   { return T_PREC; }
{ER_comentario}             { /* Ignoramos comentarios */ }
{ER_composicion_secuencial} { return T_COMPOSICION_SECUENCIAL; }
{ER_continuar}              { return T_CONTINUAR; }
{ER_corchete_apertura}      { return T_CORCHETE_APERTURA; }
{ER_corchete_cierre}        { return T_CORCHETE_CIERRE; }
{ER_de}                     { return T_DE; }
{ER_decl_acc}               { return T_DECL_ACC; }
{ER_decl_algoritmo}         { return T_DECL_ALGORITMO; }
{ER_decl_b_mientras}        { return T_DECL_B_MIENTRAS; }
{ER_decl_b_para}            { return T_DECL_B_PARA; }
{ER_decl_condicional_si}    { return T_DECL_CONDICIONAL_SI; }
{ER_decl_condicional_sino}  { return T_DECL_CONDICIONAL_SINO; }
{ER_decl_const}             { return T_DECL_CONST; }
{ER_decl_func}              { return T_DECL_FUNC; }
{ER_decl_tabla}             { return T_DECL_TABLA; }
{ER_decl_tupla}             { return T_DECL_TUPLA; }
{ER_decl_var}               { return T_DECL_VAR; }
{ER_def_tipo}               { return T_DEF_TIPO; }
{ER_dev}                    { return T_DEV; }
{ER_e_s}                    { return T_E_S; }
{ER_entrada}                { return T_ENTRADA; }
{ER_entonces}               { return T_ENTONCES; }
{ER_espacios}               { /* ignorar espacios, tabuladores y saltos de linea */ }
{ER_hacer}                  { return T_HACER; }
{ER_hasta}                  { return T_HASTA; }
{ER_igual}                  { return T_IGUAL; }
{ER_nombre_tipo}            { 
                                yylval.cadena = strdup(yytext);
                                return T_NOMBRE_TIPO; 
                            }
{ER_operador_def_tipo}      { return T_OPERADOR_DEF_TIPO; }
{ER_operador_no}            { return T_OPERADOR_NO; }
{ER_operador_o}             { return T_OPERADOR_O; }
{ER_operador_prio_dos}      { 
                              yylval.cadena = strdup(yytext);                              
                              return T_OPERADOR_PRIO_DOS; 
                            }
{ER_operador_prio_tres}     { 
                              yylval.cadena = strdup(yytext);
                              return T_OPERADOR_PRIO_TRES; 
                            }
{ER_operador_relacional}    { return T_OPERADOR_RELACIONAL; }
{ER_operador_y}             { return T_OPERADOR_Y; }
{ER_parentesis_aperura}     { return T_PARENTESIS_APERTURA; }
{ER_parentesis_cierre}      { return T_PARENTESIS_CIERRE; }
{ER_punto}                  { return T_PUNTO; }
{ER_ref}                    { return T_REF; }
{ER_salida}                 { return T_SALIDA; }
{ER_separador}              { return T_SEPARADOR; }
{ER_subrango_tabla}         { return T_SUBRANGO_TABLA; }
{ER_term_acc}               { return T_TERM_ACC; }
{ER_term_algoritmo}         { return T_TERM_ALGORITMO; }
{ER_term_b_mientras}        { return T_TERM_B_MIENTRAS; }
{ER_term_b_para}            { return T_TERM_B_PARA; }
{ER_term_condicional_si}    { return T_TERM_CONDICIONAL_SI; }
{ER_term_const}             { return T_TERM_CONST; }
{ER_term_func}              { return T_TERM_FUNC; }
{ER_term_tipo}              { return T_TERM_TIPO; }
{ER_term_tupla}             { return T_TERM_TUPLA; }
{ER_term_var}               { return T_TERM_VAR; }

{ER_literal_booleano}       { 
                                if (strcasecmp(yytext, "verdadero") == 0) {
                                    yylval.literal_booleano.valor = VERDADERO;
                                } else {
                                    yylval.literal_booleano.valor = FALSO;
                                }
                                return T_LITERAL_BOOLEANO;
                            }
{ER_literal_cadena}         { 
                                yylval.literal_cadena.valor = (char *)malloc(strlen(strdup(yytext)));
                                strcpy(yylval.literal_cadena.valor,strdup(yytext));
                                return T_LITERAL_CADENA;
                            }
{ER_literal_caracter}       { 
                                yylval.literal_caracter.valor = strdup(yytext)[0];
                                return T_LITERAL_CARACTER;
                            }
{ER_literal_entero}         { 
                                yylval.literal_numerico.tipoDelValor = ENTERO;
                                yylval.literal_numerico.valor.valorEntero = atoi(yytext);
                                return T_LITERAL_NUMERICO;
                            }
{ER_literal_real}           { 
                                yylval.literal_numerico.tipoDelValor = REAL;
                                yylval.literal_numerico.valor.valorReal = atof(yytext);
                                return T_LITERAL_NUMERICO;
                            }

{ER_id}                     { 
                                yylval.cadena = strdup(yytext);
                                return T_ID;
                            }

.                           { return T_ERROR; }




%%

void errorEnScanner(char* definicionDelError, char * variable){
	printf("\n\n\n\t%s %s \n", definicionDelError, variable);
	exit(EXIT_FAILURE);
}

int yywrap(){
	return(1);
}