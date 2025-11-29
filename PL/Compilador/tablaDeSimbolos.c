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
        tabla.celdas[i].place = i;
        tabla.celdas[i].type = ENTERO; 
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
        tabla->celdas[tabla->cantidadDeCeldasLlenas].type = ENTERO;
        tabla->celdas[tabla->cantidadDeCeldasLlenas].valor.literalNumericoT.tipoDelValor = ENTERO;
    } else if(strcmp(valor, "REAL") == 0){
        tabla->celdas[tabla->cantidadDeCeldasLlenas].type = REAL;
        tabla->celdas[tabla->cantidadDeCeldasLlenas].valor.literalNumericoT.tipoDelValor = REAL;
    } else if(strcmp(valor, "BOOLEANO") == 0){
        tabla->celdas[tabla->cantidadDeCeldasLlenas].type = BOOLEANO;
    } else if(strcmp(valor, "CADENA") == 0){
        tabla->celdas[tabla->cantidadDeCeldasLlenas].type = CADENA;
    } else if(strcmp(valor, "CARACTER") == 0){
        tabla->celdas[tabla->cantidadDeCeldasLlenas].type = CARACTER;
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
    
    printf("Place\t\tNombre\t\tType\t\tValor\n");
    printf("-----\t\t------\t\t----\t\t-----\n");
    
    while (i < cantidad) {
        printf("%d\t\t", ts.celdas[i].place);
        printf("%s\t\t", ts.celdas[i].nombre);
        
        // Imprimir según el type
        switch (ts.celdas[i].type) {
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

void modificarTipoT(TablaDeSimbolosT * ts, int place, NombreDeTipoT nuevoType) {
    
    if (place < 0 || place >= ts->cantidadDeCeldasLlenas) {
        printf("Place de variable temporal inválido: %d\n", place);
        return;
    }
    
    ts->celdas[place].type = nuevoType;
    
    // Inicializar el valor según el nuevo type
    switch (nuevoType) {
        case ENTERO:
            ts->celdas[place].valor.literalNumericoT.tipoDelValor = ENTERO;
            ts->celdas[place].valor.literalNumericoT.valor.valorEntero = 0;
            break;
        case REAL:
            ts->celdas[place].valor.literalNumericoT.tipoDelValor = REAL;
            ts->celdas[place].valor.literalNumericoT.valor.valorReal = 0.0f;
            break;
        case BOOLEANO:
            ts->celdas[place].valor.literalBooleanoT.BOOLEANO = BOOLEANO;
            ts->celdas[place].valor.literalBooleanoT.valor = FALSO;
            break;
        case CADENA:
            ts->celdas[place].valor.literalCadenaT.CADENA = CADENA;
            ts->celdas[place].valor.literalCadenaT.valor = NULL;
            break;
        case CARACTER:
            ts->celdas[place].valor.literalCaracterT.CARACTER = CARACTER;
            ts->celdas[place].valor.literalCaracterT.valor = '\0';
            break;
    }
}
/*
declaracion var → var lista d var fvar;
lista d var → lista id : d tipo; lista d var | ε
lista id → identificador, lista id | identificador

hacer array de cadena de caracteres
*/



