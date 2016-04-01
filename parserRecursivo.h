#include <stdio.h>
#include "parserTokens.h"
#include "parserEmitter.h"

int lookahead;

void eat(int t) {
	emitter(t, yytext);
	if (lookahead == t)
		lookahead = yylex();
	else {
		printf("\n---------------------\n");
		printf("RECEBIDO: %d  ESPERADO: %d\n", lookahead, t);
		error ("syntax error in match");
	}
}

void error () {

}

void parse(char *src) {  /*  parses and translates expression list  */
	FILE *file = fopen(src, "r");
	if (!file) {
		fprintf(stderr,"could not open %s\n",src);
		exit(1);
	}

	printf("\n---------------------\n");

	yyin = file;
	lookahead = yylex();

	program(); //início da compilação
}

void program() {
	declaration();
	eat(EOF);
}

void declaration() {
	access();
}

void attribuition() {
	access();
	if (lookahead == EQUAL) {
		eat(EQUAL);
		//expression();
	} else {
		error();
	}
}

void access() {
	if (lookahead == ID) {
		eat(ID);
		access_aux();
	} else {
		error();
	}
}

void access_aux() {
	switch (lookahead) {
		case DOT:
			eat(DOT);
			if (lookahead == ID) {
				eat(ID);
				access_aux();
			} else {
				error();
			}
			break;
		case OPEN_BRACKETS:
			eat(OPEN_BRACKETS);
			//l_exp();
			if (lookahead == CLOSE_BRACKETS) {
				eat(CLOSE_BRACKETS);
				access_aux();
			} else {
				error();
			}
			break;
	}
}
