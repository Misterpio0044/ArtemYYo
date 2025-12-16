/*
 * Modulo: colaDeStrings
 * Fichero: colaDeStrings.c
 * Creado por: Pedro Castilla Jaurrieta
 * Modificado para manejar strings en lugar de enteros
 */
#include "colaDeStrings.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Accion: errorColaDeStrings
 * Salida: Para la ejecucion tras informar de un error
 */
void errorColaDeStrings( char s[]){
    printf("\n\n\nERROR en el modulo colas de strings:  %s\n", s);
    while (true)
        exit(-1);
}

/*
 * Accion: nuevaColaDeStrings
 * Entrada: una cola de strings
 * Requisitos: la cola no está inicializada
 * Salida: Inicializa la cola como una cola de strings sin elementos
 */
void nuevaColaDeStrings (ColaDeStrings *c){
    c->i = NULL;
    c->f = NULL;
}

/*
 * Accion: pideTurnoColaDeStrings
 * Entrada: c una cola de strings y x un string
 * Modifica: Almacena x como ultimo elemento de c
 */
void pideTurnoColaDeStrings (ColaDeStrings *c, const char *x){
    celdaColaDeStrings * q;
    if ((q = malloc(sizeof(celdaColaDeStrings))) == NULL)
        errorColaDeStrings("no hay memoria para pideTurno");
    if ((q->e = malloc(strlen(x) + 1)) == NULL)
        errorColaDeStrings("no hay memoria para almacenar el string");
    strcpy(q->e, x);
    q->s = NULL;
    if (c->f == NULL)
        c->i = q;
    else 
        c->f->s = q;
    c->f = q;
}

/*
 * Accion: avanceColaDeStrings
 * Requisitos: La cola no esta vacia
 * Modifica: Elimina el elemento mas antiguo de la cola
 */
void avanceColaDeStrings (ColaDeStrings *c){
    celdaColaDeStrings * q;
    if (esNulaColaDeStrings( *c))
        errorColaDeStrings("avanzando en cola nula");
    q = c->i;
    c->i = c->i->s;
    if (c->i == NULL)
        c->f = NULL;
    free(q->e);
    free(q);
}

/*
 * Accion: primeroColaDeStrings
 * Entrada: c una cola de strings
 * Requisitos: La cola no esta vacia
 * Salida: devuelve el elemento mas antiguo de la cola
 */
char* primeroColaDeStrings (ColaDeStrings c){
    if (esNulaColaDeStrings(c))
        errorColaDeStrings("primero en cola nula");
    return c.i->e;
}

/*
 * Accion: esNulaColaDeStrings
 * Entrada: c una cola de strings
 * Salida: Indica si c tiene elementos
 */
bool esNulaColaDeStrings (ColaDeStrings c){
    return (c.i == NULL);
}
