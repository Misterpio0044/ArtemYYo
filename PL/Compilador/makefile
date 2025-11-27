compilador: parser.tab.c lex.yy.o literal.o tablaDeSimbolos.o colaDeStrings.o tablaDeCuadruplas.o literal.h nombresDeTipos.h tablaDeSimbolos.h
	gcc parser.tab.c lex.yy.o tablaDeSimbolos.o literal.o colaDeStrings.o tablaDeCuadruplas.o -lfl -o compilador

parser.tab.c parser.tab.h: parser.y literal.h nombresDeTipos.h tablaDeSimbolos.h
	bison -d -v parser.y

lex.yy.o: scanner.l parser.tab.h literal.h nombresDeTipos.h tablaDeSimbolos.h
	flex scanner.l
	gcc -c lex.yy.c

literal.o: literal.c
	gcc -c literal.c

tablaDeSimbolos.o: tablaDeSimbolos.c
	gcc -c tablaDeSimbolos.c

colaDeStrings.o: colaDeStrings.c
	gcc -c colaDeStrings.c

tablaDeCuadruplas.o: tablaDeCuadruplas.c
	gcc -c tablaDeCuadruplas.c

scanner: scannerBeta.l
	flex scannerBeta.l
	gcc lex.yy.c -lfl
	mv a.out scanner

clean:
	rm -f *.tab.* lex.yy.c *.o parser.output compilador

.PHONY: all clean