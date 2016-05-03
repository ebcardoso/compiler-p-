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

	declaration();
	printf("\n");
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
			procedure(); declaration();
			break;
		case FUNCTION:
			function(); declaration();
			break;
		case EOF:
			break;
		case BEG:
			break;
		default:
			printf("\n---------------------\n");
			printf("RECEBIDO: %d  ESPERADO: {VAR, CONST, PROCEDURE ou BEGIN}", lookahead);
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

void block() {
	declaration();
	eat(BEG);
		command();
	eat(END);
}

void procedure () {
	eat(PROCEDURE); eat(ID); eat(OPEN_PARENTHESIS); parameter_list(); eat(CLOSE_PARENTHESIS);
		block();
}

void function () {
	eat(FUNCTION); eat(ID); eat(OPEN_PARENTHESIS); parameter_list(); eat(CLOSE_PARENTHESIS);
		block();
}

void parameter_list() {
	switch (lookahead) {
		case ID:
			eat(ID); parameter_list_aux();
			break;
		case REF:
			eat(REF); eat(ID); parameter_list_aux();
			break;
	}
}

void parameter_list_aux() {
	if (lookahead == COMMA) {
		eat(COMMA); parameter_list();
	}
}

void command() {
	switch (lookahead) {
		case BEG:
			block(); command_aux();
			break;
		case VAR:
			block(); command_aux();
			break;
		case CONST:
			block(); command_aux();
			break;
		case PROCEDURE:
			block(); command_aux();
			break;
		case FUNCTION:
			block(); command_aux();
			break;
		case ID:
			printf("\n");
			access_n_call(); command_aux();
			break;
		case BREAK:
			break_(); command_aux();
			break;
		case RETURN:
			return_(); command_aux();
			break;
		case IF:
			if_(); command_aux();
			break;
		case SWITCH:
			switch_(); command_aux();
			break;
		case LOOP:
			loop(); command_aux();
			break;
		case EXIT:
			exit_(); command_aux();
			break;
		case FOR:
			for_(); command_aux();
			break;
			
	}
}

void command_aux() {
	if (lookahead == SEMICOLON) {
		eat(SEMICOLON); command();
	}
}

void access_n_call() {
	eat(ID); access_n_call_aux();
}

void access_n_call_aux() {
	switch (lookahead) {
		case EQUAL:
			attribuition();
			break;
		case OPEN_PARENTHESIS:
			subprogram_call();
			break;
		case OPEN_BRACKETS:
			access();
			break;
		case DOT:
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
			eat(DOT); eat(ID); access_n_call_aux();
			break;
		case OPEN_BRACKETS:
			eat(OPEN_BRACKETS); l_exp(); eat(CLOSE_BRACKETS); access_n_call_aux();
			break;
	}
}

void attribuition() {
	eat(EQUAL); expression();
}

void subprogram_call() {
	eat(OPEN_PARENTHESIS); real_parameter_list(); eat(CLOSE_PARENTHESIS);
}

void real_parameter_list() {
	switch (lookahead) {
		case REF:
			eat(REF); eat(ID); real_parameter_list_aux();
			break;
		case ID:
			expression(); real_parameter_list_aux();
			break;
		case NUMBER_INT:
			expression(); real_parameter_list_aux();
			break;
		case NUMBER_REAL:
			expression(); real_parameter_list_aux();
			break;
		case VAL_STRING:
			expression(); real_parameter_list_aux();
			break;
		case OPEN_PARENTHESIS:
			expression(); real_parameter_list_aux();
			break;
	}
}

void real_parameter_list_aux() {
	if (lookahead == COMMA) {
		eat(COMMA); real_parameter_list();
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

void break_() {
	eat(BREAK);
}

void return_() {
	eat(RETURN); expression();
}

void if_() {
	eat(IF); eat(OPEN_PARENTHESIS); expression(); eat(CLOSE_PARENTHESIS); eat(THEN);
		command();
	else_();
}

void else_() {
	if (lookahead == ELSE) {
		eat(ELSE);
			command();
	}
}

void switch_() {
	eat(SWITCH); eat(OPEN_PARENTHESIS); access_n_call(); eat(CLOSE_PARENTHESIS);
	eat(BEG);
		caselist();
		default_();
	eat(END);	
}

void caselist() {
	if (lookahead == CASE) {
		eat(CASE);
		switch (lookahead) {
			case NUMBER_INT:
				eat(NUMBER_INT);
				break;
			case NUMBER_REAL:
				eat(NUMBER_REAL);
				break;
			case VAL_STRING:
				eat(VAL_STRING);
				break;
			default:
				printf("\n---------------------\n");
				printf("RECEBIDO: %d  ESPERADO: {NUMBER ou STRING}\n", lookahead);
				error();
		}
		eat(COLON);
		command();
		caselist();
	}
}

void default_() {
	if (lookahead == DEFAULT) {
		eat(DEFAULT); eat(COLON);
			command();
	}
}

void loop() {
	eat(LOOP);
		command();
	eat(END);
}

void exit_() {
	eat(EXIT); eat(WHEN); expression();
}

void for_() {
	eat(FOR); /*access_n_call();*/ eat(ID); eat(EQUAL); expression(); for_aux(); expression(); eat(DO);
		command();
}

void for_aux() {
	switch (lookahead) {
		case TO:
			eat(TO);
			break;
		case DOWNTO:
			eat(DOWNTO);
			break;
		default:
			printf("\n---------------------\n");
			printf("RECEBIDO: %d  ESPERADO: {TO ou DOWNTO}\n", lookahead);
			error();
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
			eat(LESS_THEN); term_arit_comparison(); term_arit_comparison_tail();
			break;
		case BIGGER_THEN:
			eat(BIGGER_THEN); term_arit_comparison(); term_arit_comparison_tail();
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
