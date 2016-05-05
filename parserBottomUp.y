%{
	#include <stdio.h>
	int yyerror (char *s);
	int yylex();
%}

%union {
	int 	iValue;
	double 	dValue; 	//
	char * 	sValue;		//
};

%start declaration

%token <sValue> IDENTIFIER STRING_LIT
%token <iValue> NUMBER_INT
%token <dValue> NUMBER_REAL
%token					

COMMENT  /* */

PROCEDURE FUNCTION 

REF VAR 

CONST INT 
REAL STRING BOOLEAN TRUE FALSE NIL 
//VAL_STRING 

END BEG  // begin
 
RETURN BREAK 
IF THEN ELSE_ 
SWITCH CASE DEFAULT 
FOR DOWNTO TO DO
LOOP EXIT WHEN 

//ID 
//NUMBER_INT 
//NUMBER_REAL

SEMICOLON // ;
COLON // :
COMMA // ,
DOT // .

OPEN_PARENTHESIS // (
CLOSE_PARENTHESIS // )
OPEN_BRACKETS // [
CLOSE_BRACKETS // ]
OPEN_BRACES // {
CLOSE_BRACES // }

ADD //+
SUB //-
MULT //*
DIV // /
MOD // %
INCREMENT //++
DECREMENT //--

EQUAL //=
NEG // !
OR // ||
AND //&&
LESS_THEN // <
BIGGER_THEN // >
EQUAL_LOGIC // ==
NOT_EQUAL // !=
LESS_EQUAL // <=
BIGGER_EQUAL // >=

%%

declaration :
	var declaration
	| const declaration
	| subprogram declaration
	|
	;

var :
	VAR {printf("var ");} IDENTIFIER {printf("%s ", $3);} id_exp ids_exps {printf("\n");}
	;

id_exp :
	EQUAL {printf("= ");} expression
	|
	;

ids_exps :
	COMMA {printf(", ");} IDENTIFIER {printf("%s ", $3);} id_exp ids_exps
	|
	;

const :
	CONST {printf("const ");} IDENTIFIER {printf("%s ", $3);} EQUAL {printf("= ");} expression const_aux {printf("\n");}
	;

const_aux :
	COMMA {printf(", ");} IDENTIFIER {printf("%s ", $3);} EQUAL {printf("= ");} expression const_aux
	|
	;

subprogram :
	procedure
	| function
	;

procedure :
	PROCEDURE {printf("procedure ");} IDENTIFIER {printf("%s", $3);} OPEN_PARENTHESIS {printf("(");} parameter_list CLOSE_PARENTHESIS {printf(")\n");}
		block
	;

function :
	FUNCTION {printf("function ");} IDENTIFIER {printf("%s", $3);} OPEN_PARENTHESIS {printf("(");} parameter_list CLOSE_PARENTHESIS {printf(")\n");}
		block
	;

parameter_list :
	IDENTIFIER {printf("%s", $1);} parameter_list_aux
	| REF {printf("ref ");} IDENTIFIER {printf("%s", $3);} parameter_list_aux
	|
	;

parameter_list_aux :
	COMMA {printf(", ");} parameter_list
	|
	;



cb :
	command
	| block
	;

command :
	access_n_call
	| return 
	| break
	| if
	| switch
	| loop
	| exit
	| for
	;

block :
	declaration BEG {printf("begin\n");} commands END {printf("end\n");}
	;

commands :
	command commands_aux
	;

commands_aux :
	SEMICOLON {printf(";\n");} commands
	|
	;



access_n_call : 
	IDENTIFIER {printf("%s ", $1);} access_n_call_aux
	;

access_n_call_aux :
	access
	| attribuition
	| subprogram_call
	;

access :
	DOT {printf(".");} IDENTIFIER {printf("%s ", $3);} access_n_call_aux
	| OPEN_BRACKETS {printf("[");} l_exp CLOSE_BRACKETS {printf("]");} access_n_call_aux
	|
	;

attribuition :
	EQUAL {printf(" = ");} expression
	;

subprogram_call :
	OPEN_PARENTHESIS {printf("(");} real_parameter_list CLOSE_PARENTHESIS
	;

real_parameter_list :
	REF {printf("ref ");} IDENTIFIER {printf("%s ", $3);} real_parameter_list_aux
	| expression real_parameter_list_aux
	|
	; 

real_parameter_list_aux :
	COMMA {printf(", ");} real_parameter_list
	| 
	;

l_exp :
	expression l_exp_aux
	;

l_exp_aux :
	COMMA {printf(", ");} l_exp
	|
	;

return :
	RETURN {printf("return ");} return_aux {printf("\n");}
	;

return_aux :
	expression
	| 
	;

break :
	BREAK {printf("break\n");}
	;

if :
	IF {printf("if ");} OPEN_PARENTHESIS {printf("(");} expression CLOSE_PARENTHESIS {printf(") ");} THEN {printf("then");}
		cb
	else
	;

else :
	ELSE_ {printf("else\n");}
		cb
	| 
	;

switch :
	SWITCH {printf("switch ");} OPEN_PARENTHESIS {printf("(");} access_n_call CLOSE_PARENTHESIS {printf(")\n");}
		BEG {printf("begin");}
			caselist
			default
		END {printf("end");}
	;

caselist :
	CASE {printf("case ");} expression COLON {printf(":\n");}
		cb
	caselist
	| 
	;

default :
	DEFAULT {printf("default");} COLON {printf(":");}
		cb
	;

for :
	FOR {printf("for ");} IDENTIFIER {printf("%s", $3);} EQUAL {printf(" = ");} expression for_aux expression DO {printf(" do\n");}
		cb
	;

for_aux :
	TO {printf(" to ");}
	| DOWNTO {printf(" downto ");}
	;

loop :
	LOOP {printf("loop\n");}
		commands
	END {printf("end\n");}
	;

exit : 
	EXIT {printf("exit ");} WHEN {printf("when ");} OPEN_PARENTHESIS {printf("(");} expression CLOSE_PARENTHESIS {printf(")");}
	;

expression :
	term_or term_or_tail
	;

term_or_tail :
	OR {printf("||");} term_or term_or_tail
	|
	;

term_or :
	term_and term_and_tail
	;

term_and_tail :
	AND {printf("&&");} term_and term_and_tail
	|
	;

term_and :
	term_bool_comparison term_bool_comparison_tail
	;

term_bool_comparison_tail :
	EQUAL_LOGIC {printf("==");} term_bool_comparison term_bool_comparison_tail
	| NOT_EQUAL {printf("!=");} term_bool_comparison term_bool_comparison_tail
	| 
	;

term_bool_comparison : 
	term_arit_comparison term_arit_comparison_tail
	;

term_arit_comparison_tail :
	LESS_THEN {printf("<");} term_arit_comparison term_arit_comparison_tail
	| BIGGER_THEN {printf(">");} term_arit_comparison term_arit_comparison_tail
	| LESS_EQUAL {printf("<=");} term_arit_comparison term_arit_comparison_tail
	| BIGGER_EQUAL {printf(">=");} term_arit_comparison term_arit_comparison_tail
	| 
	;

term_arit_comparison :
	term term_tail
	;

term_tail :
	ADD {printf(" - ");} term term_tail
	| SUB {printf(" + ");} term term_tail
	|
	;

term :
	factor factor_tail
	;

factor_tail :
	MULT {printf("*");} factor factor_tail
	| DIV {printf("/");} factor factor_tail
	| MOD {printf("%");} factor factor_tail
	|
	;

factor :
	negation_unsub negation_unsub_tail
	;

negation_unsub_tail :
	NEG {printf("!");} negation_unsub
	| ;

negation_unsub : 
	IDENTIFIER {printf("%s", $1);}
	| arr_exp
	| literal
	| OPEN_PARENTHESIS {printf("(");} expression CLOSE_PARENTHESIS {printf(")");}
	;

arr_exp :
	OPEN_BRACES {printf("[");} literal arr_exp_aux CLOSE_BRACES {printf("]");}
	;

arr_exp_aux :
	COMMA {printf(",");} literal arr_exp_aux
	| 
	;

literal :
	STRING_LIT {printf("%s", $1);}
	| NUMBER_INT {printf("%i", $1);}
	| NUMBER_REAL {printf("%f", $1);}
	| TRUE {printf("true");}
	| FALSE {printf("false");}
	;


%%
