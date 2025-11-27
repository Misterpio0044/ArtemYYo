#ifndef FFF_TABLA_DE_CUADRUPLAS_H
#define FFF_TABLA_DE_CUADRUPLAS_H

#include <stdbool.h>
#include "literal.h"

typedef enum operacionCuadruplaT {
    SUMA_INT,
    SUMA_REAL,
    RESTA_INT,
    RESTA_REAL,
    MULTIPLICACION_INT,
    MULTIPLICACION_REAL,
    DIVISION_INT,
    DIVISION_REAL,
    RESTO_INT,
    RESTO_REAL
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

