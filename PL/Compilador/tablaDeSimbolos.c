#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tablaDeSimbolos.h"
#include <ctype.h>


TablaDeSimbolosT nuevaTablaDeSimbolos() {
    TablaDeSimbolosT tabla;
    tabla.cantidadDeCeldasLlenas = 0;
    
    for (int i = 0; i < 100; i++) {
        tabla.celdas[i].nombre = NULL;
        tabla.celdas[i].id = i;
        tabla.celdas[i].tipo = ENTERO; 
    }
    
    return tabla;
}

bool insertaSimbolos(TablaDeSimbolosT * tabla, char * nombre, char* valor) {
    if (tabla->cantidadDeCeldasLlenas >= 100) {
        printf("La tabla de símbolos está llena\n");
        return false;
    }
    for (char *p = valor; *p; ++p) {
        *p = (char) toupper((unsigned char)*p);
    }
    if(strcmp(valor, "ENTERO") == 0){
        tabla->celdas[tabla->cantidadDeCeldasLlenas].tipo = ENTERO;
        tabla->celdas[tabla->cantidadDeCeldasLlenas].valor.literalNumericoT.tipoDelValor = ENTERO;
    } else if(strcmp(valor, "REAL") == 0){
        tabla->celdas[tabla->cantidadDeCeldasLlenas].tipo = REAL;
        tabla->celdas[tabla->cantidadDeCeldasLlenas].valor.literalNumericoT.tipoDelValor = REAL;
    } else if(strcmp(valor, "BOOLEANO") == 0){
        tabla->celdas[tabla->cantidadDeCeldasLlenas].tipo = BOOLEANO;
    } else if(strcmp(valor, "CADENA") == 0){
        tabla->celdas[tabla->cantidadDeCeldasLlenas].tipo = CADENA;
    } else if(strcmp(valor, "CARACTER") == 0){
        tabla->celdas[tabla->cantidadDeCeldasLlenas].tipo = CARACTER;
    } else {
        printf("Tipo desconocido: %s\n", valor);
        return false;
    }
    tabla->celdas[tabla->cantidadDeCeldasLlenas].nombre = strdup(nombre);
    tabla->cantidadDeCeldasLlenas++;
    return true;
}


void imprimeTablaDeSimbolos(TablaDeSimbolosT ts){
    int cantidad = ts.cantidadDeCeldasLlenas;
    int i = 0;
    
    if (cantidad == 0) {
        printf("La tabla de símbolos está vacía\n");
        return;
    }
    
    printf("ID\t\tNombre\t\tTipo\t\tValor\n");
    printf("--\t\t------\t\t----\t\t-----\n");
    
    while (i < cantidad) {
        printf("%d\t\t", ts.celdas[i].id);
        printf("%s\t\t", ts.celdas[i].nombre);
        
        // Imprimir según el tipo
        switch (ts.celdas[i].tipo) {
            case ENTERO:
                printf("ENTERO\t\t%d\n", ts.celdas[i].valor.literalNumericoT.valor.valorEntero);
                break;
            case REAL:
                printf("REAL\t\t%f\n", ts.celdas[i].valor.literalNumericoT.valor.valorReal);
                break;
            case BOOLEANO:
                printf("BOOLEANO\t%s\n", 
                    ts.celdas[i].valor.literalBooleanoT.valor == VERDADERO ? "VERDADERO" : "FALSO");
                break;
            case CADENA:
                printf("CADENA\t\t%s\n", ts.celdas[i].valor.literalCadenaT.valor);
                break;
            case CARACTER:
                printf("CARACTER\t%c\n", ts.celdas[i].valor.literalCaracterT.valor);
                break;
        }
        i++;
    }

}

Celda buscaSimboloPorNombre(TablaDeSimbolosT ts, char * nombre) {
    for (int i = 0; i < ts.cantidadDeCeldasLlenas; i++) {
        if (strcmp(ts.celdas[i].nombre, nombre) == 0) {
            return ts.celdas[i]; 
        }
    }
    Celda vacio;
    vacio.nombre = NULL;
    return vacio;
}

int newTempVariable(TablaDeSimbolosT * ts) {
    if (ts->cantidadDeCeldasLlenas >= 100) {
        printf("La tabla de símbolos está llena, no se puede crear una nueva variable temporal\n");
        return -1; 
    }
    
    int tempId = ts->cantidadDeCeldasLlenas;
    
    ts->cantidadDeCeldasLlenas++;
    return tempId;
}

void modificarTipoT(TablaDeSimbolosT * ts, int id, NombreDeTipoT nuevoTipo) {
    
    extern TablaDeSimbolosT ts;
    
    if (id < 0 || id >= ts->cantidadDeCeldasLlenas) {
        printf("ID de variable temporal inválido: %d\n", id);
        return;
    }
    
    ts->celdas[id].tipo = nuevoTipo;
    
    // Inicializar el valor según el nuevo tipo
    switch (nuevoTipo) {
        case ENTERO:
            ts->celdas[id].valor.literalNumericoT.tipoDelValor = ENTERO;
            ts->celdas[id].valor.literalNumericoT.valor.valorEntero = 0;
            break;
        case REAL:
            ts->celdas[id].valor.literalNumericoT.tipoDelValor = REAL;
            ts->celdas[id].valor.literalNumericoT.valor.valorReal = 0.0f;
            break;
        case BOOLEANO:
            ts->celdas[id].valor.literalBooleanoT.BOOLEANO = BOOLEANO;
            ts->celdas[id].valor.literalBooleanoT.valor = FALSO;
            break;
        case CADENA:
            ts->celdas[id].valor.literalCadenaT.CADENA = CADENA;
            ts->celdas[id].valor.literalCadenaT.valor = NULL;
            break;
        case CARACTER:
            ts->celdas[id].valor.literalCaracterT.CARACTER = CARACTER;
            ts->celdas[id].valor.literalCaracterT.valor = '\0';
            break;
    }
}
/*
declaracion var → var lista d var fvar;
lista d var → lista id : d tipo; lista d var | ε
lista id → identificador, lista id | identificador

hacer array de cadena de caracteres
*/



