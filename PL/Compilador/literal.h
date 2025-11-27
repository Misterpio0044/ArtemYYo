#ifndef LITERAL_H
#define LITERAL_H

#include "nombresDeTipos.h"

typedef enum valorBooleanoT {
	VERDADERO,
	FALSO
} ValorBooleanoT;

typedef union valorLiteralT{
	int valorEntero;
	float valorReal;
} ValorLiteralT;
	
typedef struct literalT {
	NombreDeTipoT tipoDelValor;
	ValorLiteralT valor;
} LiteralT;	

typedef struct literalCadenaT {
	NombreDeTipoT CADENA;
	char* valor;
} LiteralCadenaT;

typedef struct literalCaracterT {
	NombreDeTipoT CARACTER;
	char valor;
} LiteralCaracterT;

typedef struct literalBooleanoT {
	NombreDeTipoT BOOLEANO;
	ValorBooleanoT valor;
} LiteralBooleanoT;



	
typedef union literalSimboloT {
	LiteralT literalNumericoT;
	LiteralBooleanoT literalBooleanoT;
	LiteralCadenaT literalCadenaT;
	LiteralCaracterT literalCaracterT;
} LiteralSimboloT;




LiteralBooleanoT nuevoLiteralBooleano(ValorBooleanoT);
LiteralCadenaT nuevoLiteralCadena(char *);
LiteralCaracterT nuevoLiteralCaracter(char);
LiteralT nuevoLiteralEntero(int);
LiteralT nuevoLiteralReal(float);
void escribeLiteral(LiteralT);

#endif
