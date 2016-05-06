lexicAnalyzer: lexicAnalyzer.l parserBottomUp.y
	lex lexicAnalyzer.l
	yacc -d parserBottomUp.y
	cc -ly y.tab.c lex.yy.c -o parserBottomUp
	./parserBottomUp < examples/test.pas

conflicts: parserBottomUp.y
	yacc -v parserBottomUp.y

quick: lexicAnalyzer.l parserBottomUp.y
	lex lexicAnalyzer.l
	yacc -d parserBottomUp.y
	cc -ly y.tab.c lex.yy.c -o parserBottomUp
	./parserBottomUp < examples/quicksort.pas

merge: lexicAnalyzer.l parserBottomUp.y
	lex lexicAnalyzer.l
	yacc -d parserBottomUp.y
	cc -ly y.tab.c lex.yy.c -o parserBottomUp
	./parserBottomUp < examples/mergesort.pas

.PHONY: clean
clean:
	rm -f examples/*~ *~ recursiveParser a.out lex.yy.c
