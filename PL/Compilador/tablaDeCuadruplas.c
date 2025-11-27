#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tablaDeCuadruplas.h"
#include <ctype.h>


TablaDeCuadruplasT nuevaTablaDeCuadruplas() {
    TablaDeCuadruplasT tabla;
    tabla.cantidadDeCeldasLlenas = 0;
    tabla.nextquad = NULL;
    
    for (int i = 0; i < 100; i++) {
        tabla.celdas[i].operacion = SUMA;
        tabla.celdas[i].operando1 = -1;
        tabla.celdas[i].operando2 = -1; 
        tabla.celdas[i].resultado = 0;  
    }
    
    return tabla;
}

bool insertaCuadrupla(TablaDeCuadruplasT * tabla, char * operacion, int operando1, int operando2) {
    if (tabla->cantidadDeCeldasLlenas >= 100) {
        printf("La tabla de cuádruplas está llena\n");
        return false;
    }
    
    OperacionCuadruplaT op_enum;
    
    if(strcmp(operacion, "+") == 0){
        tabla->celdas[tabla->cantidadDeCeldasLlenas].operacion = SUMA;
    } else if(strcmp(operacion, "-") == 0){
        tabla->celdas[tabla->cantidadDeCeldasLlenas].operacion = RESTA;
    } else if(strcmp(operacion, "*") == 0){
        tabla->celdas[tabla->cantidadDeCeldasLlenas].operacion = MULTIPLICACION;
    } else if(strcmp(operacion, "div") == 0){
        tabla->celdas[tabla->cantidadDeCeldasLlenas].operacion = DIVISION_ENTERA;
    } else if(strcmp(operacion, "/") == 0){
        tabla->celdas[tabla->cantidadDeCeldasLlenas].operacion = DIVISION_REAL;
    } else if(strcmp(operacion, "mod") == 0){
        tabla->celdas[tabla->cantidadDeCeldasLlenas].operacion = RESTO;
    } else {
        printf("Operación desconocida: %s\n", operacion);
        return false;
    }

    printf("%d\n", op_enum);
    
    tabla->celdas[tabla->cantidadDeCeldasLlenas].operacion = op_enum;
    tabla->celdas[tabla->cantidadDeCeldasLlenas].operando1 = operando1;
    tabla->celdas[tabla->cantidadDeCeldasLlenas].operando2 = operando2;
    tabla->celdas[tabla->cantidadDeCeldasLlenas].resultado = tabla->cantidadDeCeldasLlenas;

    tabla->cantidadDeCeldasLlenas++;
    return true;
}



void imprimeTablaDeCuadruplas(TablaDeCuadruplasT tc){
    int cantidad = tc.cantidadDeCeldasLlenas;
    int i = 0;
    
    if (cantidad == 0) {
        printf("La tabla de cuadruplas está vacía\n");
        return;
    }
    
    printf("Operacion\t\tOperando1\tOperando2\tResultado\n");
    printf("------\t\t----\t\t-----\t\t---------\n");
    
    while (i < cantidad) {
        printf("%d\t\t", tc.celdas[i].operacion);
        printf("%d\t\t", tc.celdas[i].operando1);
        printf("%d\t\t", tc.celdas[i].operando2);
        printf("%d\n", tc.celdas[i].resultado);
        i++;
    }

/*
declaracion var → var lista d var fvar;
lista d var → lista id : d tipo; lista d var | ε
lista id → identificador, lista id | identificador

hacer array de cadena de caracteres
*/








}