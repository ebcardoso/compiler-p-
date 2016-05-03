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

BEG  // begin
END 

RETURN 
BREAK 

IF 
THEN 
ELSE_ 

SWITCH 
CASE 
DEFAULT 

FOR 
DOWNTO 
TO 
DO 

LOOP 
EXIT 
WHEN 

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
	VAR IDENTIFIER id_exp ids_exps
	;

id_exp :
	EQUAL expression
	|
	;

ids_exps :
	COMMA IDENTIFIER id_exp ids_exps
	|
	;

const :
	CONST IDENTIFIER EQUAL expression const_aux
	;

const_aux :
	COMMA IDENTIFIER EQUAL expression const_aux
	|
	;

subprogram :
	procedure
	| function
	;

procedure :
	PROCEDURE IDENTIFIER OPEN_PARENTHESIS parameter_list CLOSE_PARENTHESIS
		block
	;

function :
	FUNCTION IDENTIFIER OPEN_PARENTHESIS parameter_list CLOSE_PARENTHESIS
		block
	;

parameter_list :
	IDENTIFIER parameter_list_aux
	| REF IDENTIFIER parameter_list_aux
	|
	;

parameter_list_aux :
	COMMA parameter_list
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
	declaration BEG commands END
	;

commands :
	command commands_aux
	;

commands_aux :
	SEMICOLON commands
	|
	;



access_n_call : 
	IDENTIFIER access_n_call_aux
	;

access_n_call_aux :
	access
	| attribuition
	| subprogram_call
	;

access :
	DOT IDENTIFIER access_n_call_aux
	| OPEN_BRACKETS l_exp CLOSE_BRACKETS access_n_call_aux
	|
	;

attribuition :
	EQUAL expression
	;

subprogram_call :
	OPEN_PARENTHESIS real_parameter_list CLOSE_PARENTHESIS
	;

real_parameter_list :
	REF IDENTIFIER real_parameter_list_aux
	| expression real_parameter_list_aux
	|
	; 

real_parameter_list_aux :
	COMMA real_parameter_list
	| 
	;

l_exp :
	expression l_exp_aux
	;

l_exp_aux :
	COMMA l_exp
	|
	;

return :
	RETURN return_aux
	;

return_aux :
	expression
	| 
	;

break :
	BREAK
	;

if :
	IF {printf("if ");} OPEN_PARENTHESIS {printf("(");} expression CLOSE_PARENTHESIS {printf(") ");} THEN {printf("then");}
		cb
	else
	;

else :
	ELSE_
		cb
	| 
	;

switch :
	SWITCH OPEN_PARENTHESIS access_n_call CLOSE_PARENTHESIS
		BEG
			caselist
			default
		END
	;

caselist :
	CASE expression COLON
		cb
	caselist
	| 
	;

default :
	DEFAULT COLON
		cb
	;

for :
	FOR IDENTIFIER EQUAL expression for_aux expression DO
		cb
	;

for_aux :
	TO
	| DOWNTO
	;

loop :
	LOOP
		commands
	END
	;

exit : 
	EXIT WHEN OPEN_PARENTHESIS expression CLOSE_PARENTHESIS
	;

expression :
	term_or term_or_tail
	;

term_or_tail :
	OR term_or term_or_tail
	|
	;

term_or :
	term_and term_and_tail
	;

term_and_tail :
	AND term_and term_and_tail
	|
	;

term_and :
	term_bool_comparison term_bool_comparison_tail
	;

term_bool_comparison_tail :
	EQUAL_LOGIC term_bool_comparison term_bool_comparison_tail
	| NOT_EQUAL term_bool_comparison term_bool_comparison_tail
	| 
	;

term_bool_comparison : 
	term_arit_comparison term_arit_comparison_tail
	;

term_arit_comparison_tail :
	LESS_THEN term_arit_comparison term_arit_comparison_tail
	| BIGGER_THEN term_arit_comparison term_arit_comparison_tail
	| LESS_EQUAL term_arit_comparison term_arit_comparison_tail
	| BIGGER_EQUAL term_arit_comparison term_arit_comparison_tail
	| 
	;

term_arit_comparison :
	term term_tail
	;

term_tail :
	ADD term term_tail
	| SUB term term_tail
	|
	;

term :
	factor factor_tail
	;

factor_tail :
	MULT factor factor_tail
	| DIV factor factor_tail
	| MOD factor factor_tail
	|
	;

factor :
	negation_unsub negation_unsub_tail
	;

negation_unsub_tail :
	NEG negation_unsub
	| ;

negation_unsub : 
	IDENTIFIER | arr_exp | literal | OPEN_PARENTHESIS expression CLOSE_PARENTHESIS
	;

arr_exp :
	OPEN_BRACES literal arr_exp_aux CLOSE_BRACES
	;

arr_exp_aux :
	COMMA literal arr_exp_aux
	| 
	;

literal :
	STRING_LIT | NUMBER_INT | NUMBER_REAL | TRUE | FALSE
	;


%%
