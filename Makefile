lexicAnalyzer: lexicAnalyzer.l
	lex lexicAnalyzer.l
	cc lex.yy.c -ll -o lexicAnalyzer

test: lexicAnalyzer
	./lexicAnalyzer examples/test.ppp

quick: lexicAnalyzer
	./lexicAnalyzer examples/quicksort.ppp

merge: lexicAnalyzer
	./lexicAnalyzer examples/mergesort.ppp

.PHONY: clean
clean:
	rm -f examples/*~ *~ lexicAnalyzer a.out lex.yy.c