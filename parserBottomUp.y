%{
	#include <stdio.h>
	#include "symbolTable.h"
	int yyerror (char *s);
	int yylex();
%}

%union {
	int 	iValue;
	double 	dValue; 	//
	char * 	sValue;		//
};

%start program


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

INIT FINAL
 
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
DIV // /final
MOD // %
INCREMENT //++
DECREMENT //--

EQUAL //
NEGATION // !
OR // ||
AND //&&
LESS_THEN // <
BIGGER_THEN // >
EQUAL_LOGIC // ==
NOT_EQUAL // !=
LESS_EQUAL // <=
BIGGER_EQUAL // >=

%left AND OR
%nonassoc EQUAL_LOGIC NOT_EQUAL
%nonassoc LESS_THEN BIGGER_THEN LESS_EQUAL BIGGER_EQUAL
%left ADD SUB
%left MULT DIV MOD
%right UMINUS NEGATION

%%

program:
	{ head = (Tabela*) malloc(sizeof(Tabela)); }
	declaration
	;


declaration :
	var SEMICOLON {printf(";\n");} declaration
	| const SEMICOLON {printf(";\n");} declaration
	| subprogram declaration
	|
	;

var :
	VAR {printf("var ");} IDENTIFIER {printf("%s ", $3); push($3, "int", 0, 0, head);} id_exp ids_exps {printf("\n");}
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

block :
	declaration INIT {printf("begin\n");} commands FINAL {printf("end\n");}
	;

command :
	| return 
	| break
	| if
	| switch
	| loop
	| exit
	| for
	| attribuition
	| subprogram_call
	;

commands :
	command commands_aux
	;

commands_aux :
	SEMICOLON {printf(";\n");} commands
	|
	;

access_id :
	IDENTIFIER {printf("%s ", $1);}
	| access_id DOT {printf(".");} IDENTIFIER {printf("%s ", $4);}
	| access_id OPEN_BRACKETS {printf("[");} l_exp CLOSE_BRACKETS {printf("]");}
	;

attribuition :
	access_id EQUAL {printf(" = ");} expression
	;

subprogram_call :
	IDENTIFIER {printf("%s", $1);} OPEN_PARENTHESIS {printf("(");} real_parameter_list CLOSE_PARENTHESIS {printf(")");}
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
	IF {printf("if ");} OPEN_PARENTHESIS {printf("(");} expression CLOSE_PARENTHESIS {printf(") ");} THEN {printf("then\n");}
		cb
	else
	;

else :
	ELSE_ {printf("else\n");}
		cb
	| 
	;

switch :
	SWITCH {printf("switch ");} OPEN_PARENTHESIS {printf("(");} access_id CLOSE_PARENTHESIS {printf(")\n");}
		INIT {printf("begin");}
			caselist
			default
		FINAL {printf("end\n");}
	;

caselist :
	CASE {printf("case ");} expression COLON {printf(":\n");}
		commands
	caselist
	| 
	;

default :
	DEFAULT {printf("default");} COLON {printf(":");}
		commands
	|
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
	FINAL {printf("end\n");}
	;

exit : 
	EXIT {printf("exit ");} WHEN {printf("when ");} OPEN_PARENTHESIS {printf("(");} expression CLOSE_PARENTHESIS {printf(")");}
	;

expression :
	expression OR {printf("||");} expression
	| expression AND {printf("&&");} expression
	| expression EQUAL_LOGIC {printf("==");} expression
	| expression NOT_EQUAL {printf("!=");}  expression
	| expression LESS_THEN {printf("<");} expression
	| expression BIGGER_THEN {printf(">");} expression
	| expression LESS_EQUAL {printf("<=");} expression
	| expression BIGGER_EQUAL {printf(">=");} expression
	| expression ADD {printf(" + ");} expression
	| expression SUB {printf(" - ");} expression
	| expression MULT {printf("*");} expression
	| expression DIV {printf("/");} expression
	| expression MOD {printf("\\");}expression
	| '-' %prec UMINUS {printf("-");} expression
	| NEGATION {printf("!");} expression
	| OPEN_PARENTHESIS {printf("(");} expression CLOSE_PARENTHESIS {printf(")");}
	| access_id
	| arr_exp
	| literal
	| subprogram_call
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
