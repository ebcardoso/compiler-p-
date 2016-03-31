lexicAnalyzer: lexicAnalyzer.l
	clear
	lex lexicAnalyzer.l
	cc main.c parserRecursivo.h parserEmitter.h parserTokens.h lex.yy.c -ll -o recursiveParser

test: lexicAnalyzer
	./recursiveParser examples/test.ppp

quick: lexicAnalyzer
	./recursiveParser examples/quicksort.ppp

merge: lexicAnalyzer
	./recursiveParser examples/mergesort.ppp

.PHONY: clean
clean:
	rm -f examples/*~ *~ recursiveParser a.out lex.yy.c
