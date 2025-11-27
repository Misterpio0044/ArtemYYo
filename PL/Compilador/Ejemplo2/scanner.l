 //Archivo: scanner.l
 // Ejemplo de archivo .l para combinar con un .y (bison). Este fichero, junto con
 // parser.y permiten crear un compilador que, a apartir de un fichero correcto crea
 // una tabla de constantes. Al final saca por pantalla el contenido de la tabla.
 //Autor: Federico Fariña
 //Fecha: 7/9/23
 //Version: 0.0.1
 //Copyright: Este ejemplo se hace para que lo puedan analizar los alumnos de 
 // la asignatura de procesadores de lenguaje de la UPNA. El autor prohibe 
 // expresamente la copia/uso de este fichero salvo para los alumnos de la 
 // asignatura. Estos pueden usarlo como muestra para desarrollar la practica,
 // pero para ningún otro tipo de uso.
 // AVISO: el codigo puede contener errores (por despiste o cometidos queriendo). Nunca
 // debe creerse al 100% el material que no haya testeado

 // El alumno puede observar los cambios de la version beta que permiten combinar
 // el escaner con el parser

%{
	// Headers standard necesarios
	#include <stdio.h> //Para poder escribir en el terminal
	#include <stdlib.h> //Para trabajar con NULL y usar exit()
	#include <strings.h> //Para trabajar con cadenas de caracteres

	// Headers creados para este ejemplo
	#include "nombresDeTipos.h" // Para saber los nombres de los tipos
	#include "literal.h" //Para poder usar el tipo Literal
	#include "parser.tab.h" // Lo crea automaticamente bison con la opcion -v
	
	void errorEnScanner(char*, char*); //prototipo necesario para compilar
%}

falsoDR	(?i:falso)
fconstDR (?i:fconst)
literalCaracterDR	\".\"
literalEnteroDR	[+-]?[0-9]+
literalRealDR	{literalEnteroDR}[rR]
puntoYComaDR	;
verdaderoDR	(?i:verdadero)

%%
 //Se ha cambiado el codigo a ejecutar tras ver un patron porque ahora hay que
 //devolverselo al parser en los formatos que el parser define
(?:const)	{
	return constTK;
}
{falsoDR}	{
	//Para programar de modo mas claro el parser, se ha optado por unir todos
	//los tokens de literales en un token unico. Hace necesario el modulo cuyo
	//header es literal.h
	//Esta eleccion permite ejemplificar el uso del %union y los union de C
	yylval.literal.tipoDelValor = BOOLEANO;
	yylval.literal.valor.valorBooleano = FALSO;
	return literalTK;
}
{fconstDR}	{
	return fconstTK;
}
=	{
	return igualTK;
}
'([^']|\/')*'	{
	yylval.literal.tipoDelValor = CADENA;
	//Es necesario reservar memoria para la cadena. No puedo usar la de yytext.
	//En partes posteriores se tendra en cuenta que esta cadena tiene memoria
	//propia. Para usar strdup es necesario importar etring.h
	if ((yylval.literal.valor.valorCadena = strdup(yytext)) == NULL )
		errorEnScanner("No hay memoria para strdup() al leer %s\n", yytext);
	else
		return literalTK;
}
{literalCaracterDR}	{
	yylval.literal.tipoDelValor = CARACTER;
	yylval.literal.valor.valorCaracter = yytext[1];
	return literalTK;
}
{literalEnteroDR}	{
	yylval.literal.tipoDelValor = ENTERO;
	yylval.literal.valor.valorEntero = atoi(yytext);
	return literalTK;
}
[+-]?[0-9]*(\.[0-9]+)?([eE][+-]?[0-9]+)?	{
	yylval.literal.tipoDelValor = REAL;
	yylval.literal.valor.valorReal = atof(yytext);
	return literalTK;
}
{literalRealDR}	{
	char * cadena;
	yylval.literal.tipoDelValor = REAL;
	if ((cadena = strndup(yytext, strlen(yytext)-1)) == NULL) 
		errorEnScanner("No hay memoria para strndup() al leer\n", yytext);
	else {
		yylval.literal.valor.valorReal = atof(cadena);
		free(cadena);
	}
	return literalTK;
}
[A-Z][A-Z_]*	{
	yylval.cadena = strdup(yytext);
	return nombreCteTK;
}
{puntoYComaDR}	{
	return puntoYComaTK;
}
{verdaderoDR}	{
	yylval.literal.tipoDelValor = BOOLEANO;
	yylval.literal.valor.valorBooleano = VERDADERO;
	return literalTK;
}
[ \t\n] {//El resto de caracteres son realmente errores
}

%%

 //PARTE 3: COFDIGO ADICIONAL
 //En la parte anterior se ha hecho uso de funciones que el compilador debe conocer. 
 //Aquí se programan esas funciones. Su prototipo debe aparecer en la parte de arriba
 //(salvo el main, en el caso que exista)

void errorEnScanner(char* definicionDelError, char * variable){
	printf("\n\n\n\t%s %s \n", definicionDelError, variable);
	exit(EXIT_FAILURE);
}

int yywrap(){
	return(1);
}

