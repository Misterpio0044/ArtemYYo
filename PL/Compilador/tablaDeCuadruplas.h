#ifndef FFF_TABLA_DE_CUADRUPLAS_H
#define FFF_TABLA_DE_CUADRUPLAS_H

#include <stdbool.h>
#include "literal.h"

typedef enum operacionCuadruplaT {
    SUMA,
    RESTA,
    MULTIPLICACION,
    DIVISION_ENTERA,
    DIVISION_REAL,
    RESTO
} OperacionCuadruplaT;

typedef struct celdaCuadrupla {
	OperacionCuadruplaT operacion;
	int operando1;
    int operando2;
    int resultado;
} CeldaCuadrupla;

typedef struct tablaDeCuadruplasT {
	CeldaCuadrupla celdas[100];
	int cantidadDeCeldasLlenas;
    CeldaCuadrupla* nextquad;
} TablaDeCuadruplasT;

TablaDeCuadruplasT nuevaTablaDeCuadruplas(void);
bool insertaCuadrupla(TablaDeCuadruplasT *, char *, int, int);
void imprimeTablaDeCuadruplas(TablaDeCuadruplasT);

#endif

