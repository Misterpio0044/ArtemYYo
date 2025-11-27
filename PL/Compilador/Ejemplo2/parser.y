 //Archivo: Ejemplo de de archivo .y para la gramatica que indica la practica
 // Autor: Federico Fari�a
 // Fecha: 7/9/23
 // Version: 0.0.1
 // Copyright: Este ejemplo se hace para que lo puedan analizar los alumnos de 
 // la asignatura de procesadores de lenguaje de la UPNA. El autor prohibe 
 // expresamente la copia/uso de este fichero salvo para los alumnos de la 
 // asignatura. Estos pueden usarlo como muestra para desarrollar la practica,
 // pero para ning�n otro tipo de uso.

 //  1: ZONA DE DECLARACIONES
 // PARTE 1.2: Cosas que necesitamos que esten en el .c
%{
	#include <stdio.h>
	#include "nombresDeTipos.h"
	#include "literal.h"
	#include "tablaDeConstantes.h"
	int yylex(); // Usamos la funcion que se crea gracias a flex
	void yyerror(char *); // Prototipo de una funcion necesaria
	extern FILE* yyin; // Usamos la varible de Flex en la que viene la entrada
	TablaDeConstantes tc; //Es donde guardaremos las constantes
	#define YYDEBUG 1 //Permite activar el modo Debugg de Bison
%}

 //PARTE 2.2: Declaracion de los tokens del lenguaje y declaracion de los tipos del
 // union en los que flex nos enviara el valor asociado a los tokens multivaluados

%token constTK
%token <literal> literalTK
%token fconstTK
%token igualTK
%token <cadena> nombreCteTK
%token puntoYComaTK

 //PARTE 2.3: Definiciones (algunas innecearias) de prioridades

%nonassoc constTK //hago no asociativo y de baja prioridad a constTK
%right fconstTK //hago fcosntTK es mas prioritario que constTK y asociativo a derecha
%left puntoYComaTK //Hago muy prioritario y asociativo a izquierdas al ;

 //PARTE 2.3: Creamos el union necesario para valores de flex y traducciones de bison

%union{
	char* cadena;
	LiteralT literal;
	int entero;
}

 //PARTE 2.4: Asignacion de traducciones a las variables

%type <entero> listaDeclConstantesV  //para contar las que se definen

%%


declaracionConstantesV: constTK listaDeclConstantesV fconstTK{
			printf("COMPILADOR: Se ha creado la tabla de constantes con %d constantes\n", $2);
			}
	;
listaDeclConstantesV :  declaracionDeConstanteV {
			$$= 1;
		}
	| listaDeclConstantesV puntoYComaTK listaDeclConstantesV {
			$$= $1 + $3;
		}
	;
declaracionDeConstanteV : nombreCteTK igualTK literalTK {
			insertaConstante(&tc, $1, $3);
		}
	;

%%
int main(int argc, char **argv){
	#if defined YYDEBUG
	yydebug=1;
	#endif
	++argv, --argc;
	if (argc > 0)
		yyin = fopen(argv[0], "r");
	else
		yyin = stdin;
	tc = nuevaTablaDeConstantes();
	yyparse();
	imprimeTablaDeConstantes(tc);
}


void yyerror(char * s){
	printf("\tBISON: ERROR, %s\n", s);
}

