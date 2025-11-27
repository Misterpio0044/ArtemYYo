/*
 * Modulo: colaDeStrings
 * Fichero: colaDeStrings.h
 * Creado por: Pedro Castilla Jaurrieta
 * Modificado para manejar strings en lugar de enteros
 */

#ifndef PCJ_COLA_DE_STRINGS_H
#define PCJ_COLA_DE_STRINGS_H

#include <stdbool.h>

/*
 * Estructura: celdaColaDeStrings
 * Descripcion: Elemento de la cola de strings
 * Campos:
 *   - e: el string almacenado
 *   - s: puntero al siguiente elemento
 */
typedef struct celdaColaDeStrings {
    char * e;
    struct celdaColaDeStrings *s;
} celdaColaDeStrings;

/*
 * Estructura: ColaDeStrings
 * Descripcion: Cola FIFO de strings
 * Campos:
 *   - i: puntero al inicio de la cola
 *   - f: puntero al final de la cola
 */
typedef struct ColaDeStrings {
    celdaColaDeStrings *i;
    celdaColaDeStrings *f;
} ColaDeStrings;

/*
 * Accion: nuevaColaDeStrings
 * Entrada: una cola de strings
 * Requisitos: la cola no está inicializada
 * Salida: Inicializa la cola como una cola de strings sin elementos
 */
void nuevaColaDeStrings (ColaDeStrings *c);

/*
 * Accion: pideTurnoColaDeStrings
 * Entrada: c una cola de strings y x un string
 * Modifica: Almacena x como ultimo elemento de c
 */
void pideTurnoColaDeStrings (ColaDeStrings *c, const char *x);

/*
 * Accion: avanceColaDeStrings
 * Requisitos: La cola no esta vacia
 * Modifica: Elimina el elemento mas antiguo de la cola
 */
void avanceColaDeStrings (ColaDeStrings *c);

/*
 * Accion: primeroColaDeStrings
 * Entrada: c una cola de strings
 * Requisitos: La cola no esta vacia
 * Salida: devuelve el elemento mas antiguo de la cola
 */
char* primeroColaDeStrings (ColaDeStrings c);

/*
 * Accion: esNulaColaDeStrings
 * Entrada: c una cola de strings
 * Salida: Indica si c tiene elementos
 */
bool esNulaColaDeStrings (ColaDeStrings c);
#endif //PCJ_COLA_DE_STRINGS_H
