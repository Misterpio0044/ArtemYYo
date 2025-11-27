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
        tabla.celdas[i].operacion = SUMA_INT;
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
    
    if(strcmp(operacion, "+E") == 0){
        tabla->celdas[tabla->cantidadDeCeldasLlenas].operacion = SUMA_INT;
    }else if(strcmp(operacion, "+R") == 0){
        tabla->celdas[tabla->cantidadDeCeldasLlenas].operacion = SUMA_REAL; 
    } else if(strcmp(operacion, "-E") == 0){
        tabla->celdas[tabla->cantidadDeCeldasLlenas].operacion = RESTA_INT;
    } else if(strcmp(operacion, "-R") == 0){
        tabla->celdas[tabla->cantidadDeCeldasLlenas].operacion = RESTA_REAL;
    } else if(strcmp(operacion, "*E") == 0){
        tabla->celdas[tabla->cantidadDeCeldasLlenas].operacion = MULTIPLICACION_INT;
    } else if(strcmp(operacion, "*R") == 0){
        tabla->celdas[tabla->cantidadDeCeldasLlenas].operacion = MULTIPLICACION_REAL;
    } else if(strcmp(operacion, "div") == 0){
        tabla->celdas[tabla->cantidadDeCeldasLlenas].operacion = DIVISION_INT;
    } else if(strcmp(operacion, "/") == 0){
        tabla->celdas[tabla->cantidadDeCeldasLlenas].operacion = DIVISION_REAL;
    } else if(strcmp(operacion, "modE") == 0){
        tabla->celdas[tabla->cantidadDeCeldasLlenas].operacion = RESTO_INT;
    } else if(strcmp(operacion, "modR") == 0){
        tabla->celdas[tabla->cantidadDeCeldasLlenas].operacion = RESTO_REAL;
    } else {
        printf("Operación desconocida: %s\n", operacion);
        return false;
    }

    tabla->celdas[tabla->cantidadDeCeldasLlenas].operando1 = operando1;
    tabla->celdas[tabla->cantidadDeCeldasLlenas].operando2 = operando2;
    tabla->celdas[tabla->cantidadDeCeldasLlenas].resultado = 0;

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
    printf("------\t\t\t----\t\t-----\t\t---------\n");
    
    while (i < cantidad) {
        char* operador;
        switch(tc.celdas[i].operacion) {
            case SUMA_INT:
                operador = "+E";
                break;
            case SUMA_REAL:
                operador = "+R";
                break;
            case RESTA_INT:
                operador = "-E";
                break;
            case RESTA_REAL:
                operador = "-R";
                break;
            case MULTIPLICACION_INT:
                operador = "*E";
                break;
            case MULTIPLICACION_REAL:
                operador = "*R";
                break;
            case DIVISION_INT:
                operador = "div";
                break;
            case DIVISION_REAL:
                operador = "/";
                break;
            case RESTO_INT:
                operador = "modE";
                break;
            case RESTO_REAL:
                operador = "modR";
                break;
            default:
                operador = "?";
        }
        printf("%s\t\t\t", operador);
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