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
		error();
	}
}

void error () {
	printf("\nSyntax Error\n");
	exit(1);
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
	printf("\n");
	//eat(EOF);
}

void declaration() {
	switch (lookahead) {
		case VAR:
			var(); declaration();
			break;
		case CONST:
			Const(); declaration();
			break;
		case PROCEDURE:
			break;
		case FUNCTION:
			break;
		case EOF:
			break;
		default:
			error();
	}
}

void var() {
	eat(VAR); eat(ID); ids_exp(); ids_exps();
}

void ids_exp() {
	if (lookahead == EQUAL) {
		eat(EQUAL);	expression();
	}
}

void ids_exps() {
	if (lookahead == COMMA) {
		eat(COMMA); eat(ID); ids_exp();	ids_exps();
	}
}

void Const() {
	eat(CONST); eat(ID); eat(EQUAL); expression(); const_aux();
}

void const_aux() {
	if (lookahead == COMMA) {
		eat(COMMA);	eat(ID); eat(EQUAL); expression(); const_aux();
	}
}

void attribuition() {
	access_n_call(); eat(EQUAL); expression();
}

void access_n_call() {
	eat(ID); access_n_call_aux();
}

void access_n_call_aux() {
	switch (lookahead) {
		case OPEN_PARENTHESIS:
			//subprogram_call();
			break;
		case DOT:
			access();
			break;
		case OPEN_BRACKETS:
			access();
			break;
		/*default:
			error();
			break;*/
	}
}

void access() {
	switch (lookahead) {
		case DOT:
			eat(DOT); eat(ID); access();
			break;
		case OPEN_BRACKETS:
			eat(OPEN_BRACKETS); l_exp(); eat(CLOSE_BRACKETS); access();
			break;
	}
}

void l_exp() {
	expression(); l_exp_aux();
}

void l_exp_aux() {
	if (lookahead == COMMA) {
		eat(CLOSE_BRACKETS); access();
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
	switch (lookahead) {
		case LESS_EQUAL:
			eat(LESS_EQUAL); term_arit_comparison(); term_arit_comparison_tail();
			break;
		case BIGGER_EQUAL:
			eat(BIGGER_EQUAL); term_arit_comparison(); term_arit_comparison_tail();
			break;
		case LESS_THEN:
			eat(LESS_EQUAL); term_arit_comparison(); term_arit_comparison_tail();
			break;
		case BIGGER_THEN:
			eat(BIGGER_EQUAL); term_arit_comparison(); term_arit_comparison_tail();
			break;
	}
}

void term_arit_comparison() {
	term(); term_tail();
}

void term_tail() {
	switch (lookahead) {
		case ADD:
			eat(ADD); term(); term_tail();
			break;
		case SUB:
			eat(SUB); term(); term_tail();
			break;
	}
}

void term() {
	factor(); factor_tail();
}

void factor_tail() {
	switch (lookahead) {
		case MULT:
			eat(MULT); factor(); factor_tail();
			break;
		case DIV:
			eat(DIV); factor(); factor_tail();
			break;
		case MOD:
			eat(MOD); factor(); factor_tail();
			break;
	}
}

void factor() {
	negation_unsub(); negation_unsub_tail();
}

void negation_unsub_tail() {
	if (lookahead == NEG) {
		eat(NEG); negation_unsub();
	}
}

void negation_unsub() {
	switch (lookahead) {
		case ID:
			access_n_call();
			break;
		case NUMBER_INT:
			eat(NUMBER_INT);
			break;
		case NUMBER_REAL:
			eat(NUMBER_REAL);
			break;
		case VAL_STRING:
			eat(VAL_STRING);
			break;
		case OPEN_PARENTHESIS:
			eat(OPEN_PARENTHESIS); expression(); eat(CLOSE_PARENTHESIS);
			break;
	}
}
