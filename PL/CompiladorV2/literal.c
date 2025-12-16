#include "literal.h" 
#include "nombresDeTipos.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

LiteralBooleanoT nuevoLiteralBooleano(ValorBooleanoT valor){
    LiteralBooleanoT l;
    l.valor = valor;
    return l;
}

LiteralCadenaT nuevoLiteralCadena(char * valor){
    LiteralCadenaT l;
    l.valor = valor;
    return l;
}

LiteralCaracterT nuevoLiteralCaracter(char valor){
    LiteralCaracterT l;
    l.valor = valor;
    return l;
}

LiteralT nuevoLiteralEntero(int valor){
    LiteralT l;
    l.tipoDelValor = ENTERO;
    l.valor.valorEntero = valor;
    return l;
}

LiteralT nuevoLiteralReal(float valor){
    LiteralT l;
    l.tipoDelValor = REAL;
    l.valor.valorReal = valor;
    return l;
}

void escribeLiteral(LiteralT l){
    switch (l.tipoDelValor) {
        case ENTERO: 
            printf("Entero\t\t%d\n",l.valor.valorEntero);
            break;
        case REAL: 
            printf("Real\t\t%f\n",l.valor.valorReal);
            break;
    }
}
