#ifndef FFF_TABLA_DE_SIMBOLOS_H
#define FFF_TABLA_DE_SIMBOLOS_H

#include <stdbool.h>
#include "literal.h"

typedef struct tablaDeCuadruplasT TablaDeCuadruplasT;

typedef struct nodo {
    int quad;
    struct nodo *sig;
} Nodo;

typedef struct {
    Nodo *primero;
} ListaEnteros;

typedef struct infoBooleanasT {
    ListaEnteros *bTrue;
    ListaEnteros *bFalse;
} InfoBooleanas;

typedef struct celda {
	char * nombre;
	int place;
	NombreDeTipoT type;
	LiteralSimboloT valor;
	InfoBooleanas info;
} Celda;

typedef struct tablaDeSimbolosT {
	Celda celdas[100];
	int cantidadDeCeldasLlenas;
} TablaDeSimbolosT;

TablaDeSimbolosT nuevaTablaDeSimbolos(void);
bool insertaSimbolos(TablaDeSimbolosT *, char *, char *);
void imprimeTablaDeSimbolos(TablaDeSimbolosT);
Celda buscaSimboloPorNombre(TablaDeSimbolosT, char *);
int newTempVariable(TablaDeSimbolosT * ts);
void modificarTipoT(TablaDeSimbolosT * ts, int place, NombreDeTipoT nuevoType);

// Funciones para backpatching de expresiones booleanas
ListaEnteros* makelist(int quad);
ListaEnteros* merge(ListaEnteros* l1, ListaEnteros* l2);
void backpatch(ListaEnteros* list, int target, TablaDeCuadruplasT * tc);

#endif
