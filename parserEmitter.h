#include <stdio.h>
#include "parserTokens.h"

void emitter(int t, char* tval)  {
	switch(t) {
		case COMMENT:
			printf("%s \n", tval); break;

		case PROCEDURE:
			printf("\nprocedure "); break;
		case FUNCTION:
			printf("\nfunction "); break;

		case REF:
			printf("ref "); break;
		case VAR:
			printf("\nvar "); break;

		case CONST:
			printf("\nconst "); break;
		case INT:
			printf("int "); break; 
		case REAL:
			printf("real "); break;
		case STRING:
			printf("string "); break;
		case BOOLEAN:
			printf("boolean "); break;

		case TRUE:
			printf("true "); break; 
		case FALSE:
			printf("false "); break;
		case NIL:
			printf("nil "); break;
		case VAL_STRING:
			printf("%s ", tval); break;

		case BEG:
			printf("\nbegin "); break;
		case END:
			printf("\nend "); break;

		case RETURN:
			printf("\nreturn "); break;
		case BREAK:
			printf("\nbreak "); break;

		case IF:
			printf("if "); break;
		case THEN:
			printf("then "); break;
		case ELSE:
			printf("\nelse "); break; 

		case SWITCH:
			printf("\nswitch "); break;
		case CASE:
			printf("\ncase "); break;
		case DEFAULT:
			printf("\ndefault "); break;

		case FOR:
			printf("\nfor "); break;
		case DOWNTO:
			printf("downto "); break;
		case TO:
			printf("to "); break;
		case DO:
			printf("do "); break;

		case LOOP:
			printf("\nloop "); break;
		case EXIT:
			printf("\nexit "); break;
		case WHEN:
			printf("when "); break;

		case ID:
			printf("%s ", tval); break; 
		case NUMBER_INT:
			printf("%s", tval); break;
		case NUMBER_REAL:
			printf("%s", tval); break;

		case SEMICOLON:
			printf(";\n"); break;      
		case COLON:
			printf(":\n"); break;      
		case COMMA:
			printf(", "); break;
		case DOT:
			printf("."); break;
        
		case OPEN_PARENTHESIS:
			printf("( "); break;
		case CLOSE_PARENTHESIS:
			printf(" )"); break;
		case OPEN_BRACKETS:
			printf("[ "); break;
		case CLOSE_BRACKETS:
			printf(" ]"); break;
		case OPEN_BRACES:
			printf("{ "); break;
		case CLOSE_BRACES:
			printf(" }"); break;

		case ADD:
			printf("+ "); break;
		case SUB:
			printf("- "); break;
		case MULT:
			printf("* "); break;
		case DIV:
			printf("/ "); break;
		case MOD:
			printf("%% "); break;
		case INCREMENT:
			printf("++ "); break;
		case DECREMENT:
			printf("-- "); break;

		case EQUAL:
			printf("= "); break;
		case NEG:
			printf("! "); break;  
		case OR:
			printf("|| "); break;  
		case AND:
			printf("&& "); break;    
		case LESS_THEN:
			printf("< "); break;
		case BIGGER_THEN:
			printf("> "); break;
		case EQUAL_LOGIC:
			printf("== "); break;
		case NOT_EQUAL:
			printf("!= "); break;
		case LESS_EQUAL:
			printf("<= "); break;
		case BIGGER_EQUAL:
			printf(">= "); break;

		default:     
			printf("\ntoken %d, tokenval %s\n", t, tval);
	}
}
