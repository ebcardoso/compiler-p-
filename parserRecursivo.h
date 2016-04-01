#include <stdio.h>
#include "parserTokens.h"
#include "parserEmitter.h"

int lookahead;

void eat(int t) {
	emitter(t, yytext);
	if (lookahead == t) {
		lookahead = yylex();
	} else {
		printf("\n---------------------\n");
		printf("RECEBIDO: %d  ESPERADO: %d\n", lookahead, t);
		error ();//"syntax error in match");
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
		eat(EQUAL);	expression();
	} else {
		error();
	}
}

void access() {
	if (lookahead == ID) {
		eat(ID); access_aux();
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
			l_exp();
			if (lookahead == CLOSE_BRACKETS) {
				eat(CLOSE_BRACKETS);
				access_aux();
			} else {
				error();
			}
			break;
	}
}

void l_exp() {
	expression(); l_exp_aux();
}

void l_exp_aux() {
	if (lookahead == COMMA) {
		eat(CLOSE_BRACKETS); access_aux();
	}
}

void term_or_tail() {
	if (lookahead == OR) {
		eat(OR); term_or();	term_or_tail();
	}
}
void expression() {
	term_or(); term_or_tail();
}

void term_or() {
	term_and();	term_and_tail();
}

void term_and_tail() {
	if (lookahead == AND) {
		eat(AND); term_and(); term_and_tail();
	}
}

void term_and() {
	term_bool_comparison();	term_bool_comparison_tail();
}

void term_bool_comparison_tail() {
	switch (lookahead) {
		case EQUAL_LOGIC:
			eat(EQUAL_LOGIC); term_bool_comparison(); term_bool_comparison_tail();
			break;
		case OPEN_BRACKETS:
			eat(NOT_EQUAL);	term_bool_comparison(); term_bool_comparison_tail();
			break;
	}
}

void term_bool_comparison() {
	term_arit_comparison(); term_arit_comparison_tail();
}

void term_arit_comparison_tail() {

}

void term_arit_comparison() {

}
