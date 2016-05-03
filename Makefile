parserBottomUp: lexicAnalyzer.l parserBottomUp.y
	lex lexicAnalyzer.l
	yacc -y parserBottomUp.y
	cc -ly y.tab.c lex.yy.c -o parserBottomUp
	./parserBottomUp < examples/test.pas

conflicts: parserBottomUp.y
	yacc -v parserBottomUp.y

lexicAnalyzer: lexicAnalyzer.l
	clear
	lex lexicAnalyzer.l
	cc main.c parserRecursivo.h parserEmitter.h parserTokens.h lex.yy.c -ll -o recursiveParser

test: lexicAnalyzer
	./recursiveParser examples/test.pas

quick: lexicAnalyzer
	./recursiveParser examples/quicksort.pas

merge: lexicAnalyzer
	./recursiveParser examples/mergesort.pas

.PHONY: clean
clean:
	rm -f examples/*~ *~ recursiveParser a.out lex.yy.c
