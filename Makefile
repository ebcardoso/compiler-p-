lexicAnalyzer: lexicAnalyzer.l
	clear
	lex lexicAnalyzer.l
	g++ -std=c++11 main.c parserNaoRecursivo.h parserEmitter.h parserTokens.h lex.yy.c -ll -o recursiveParser -Wno-write-strings

test: lexicAnalyzer
	./recursiveParser examples/test.ppp

quick: lexicAnalyzer
	./recursiveParser examples/quicksort.ppp

merge: lexicAnalyzer
	./recursiveParser examples/mergesort.ppp

.PHONY: clean
clean:
	rm -f examples/*~ *~ recursiveParser a.out lex.yy.c
