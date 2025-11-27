#ifndef FFF_TABLA_DE_SIMBOLOS_H
#define FFF_TABLA_DE_SIMBOLOS_H

#include <stdbool.h>
#include "literal.h"

typedef struct celda {
	char * nombre;
	int id;
	NombreDeTipoT tipo;
	LiteralSimboloT valor;
} Celda;

typedef struct tablaDeSimbolosT {
	Celda celdas[100];
	int cantidadDeCeldasLlenas;
} TablaDeSimbolosT;

TablaDeSimbolosT nuevaTablaDeSimbolos(void);
bool insertaSimbolos(TablaDeSimbolosT *, char *, char *);
void imprimeTablaDeSimbolos(TablaDeSimbolosT);
Celda buscaSimboloPorNombre(TablaDeSimbolosT, char *);

#endif
