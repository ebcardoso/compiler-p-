%Start IN_COMMENT
%{
/*
	Analizador Lexico da Linguagem P++
	Equipe: Breno Cardoso, Lucas Simonetti, Renato Higor, Sidemar Fideles
*/

	#include "parserBottomUp.tab.h"
	//#include "symbolTable.h"
	int nchar, nline, nword;
	#define ACCOUNTABLE nword++;nchar+=yyleng;

%}

LETTER				[a-zA-Z]
DIGIT				[0-9]
NUMBER_INT			{DIGIT}+
NUMBER_REAL 			{NUMBER_INT}"."{NUMBER_INT}(e{NUMBER_INT})?
IDENTIFIER	 			({LETTER}|_)({LETTER}|{DIGIT}|_)*


%%

"/*"("*"|\n|[^"*/"])*"*/" { return COMMENT; ACCOUNTABLE } //Checar a quantidade de linhas

"/*"("*"|\n|[^"*/"])* { printf("%s: unmatched comment error\n", yytext); ACCOUNTABLE }

("*"|\n|[^"*/"])*"*/" { printf("%s: unmatched comment error", yytext); ACCOUNTABLE }

\n		{nline++;nchar++;}

"//".* { return COMMENT; ACCOUNTABLE } 

\"(\\.|[^\\"])*\" { return STRING_LIT; ACCOUNTABLE } 

\"(\\.|[^\\"])* { printf("%s: unmatched string error\n", yytext); ACCOUNTABLE }

procedure { return PROCEDURE; ACCOUNTABLE }
function { return FUNCTION; ACCOUNTABLE }

ref { return REF; ACCOUNTABLE }
var {
	return VAR;
	//canInsert = 1;
	ACCOUNTABLE
}
const { return CONST; ACCOUNTABLE }
int { return INT; ACCOUNTABLE }
real { return REAL; ACCOUNTABLE }
string { return STRING; ACCOUNTABLE }
boolean { return BOOLEAN; ACCOUNTABLE }

true { return TRUE; ACCOUNTABLE }
false { return FALSE; ACCOUNTABLE }

null {return NIL ; ACCOUNTABLE }
 
begin { return BEG; ACCOUNTABLE }
end { return END; ACCOUNTABLE }

return { return RETURN; ACCOUNTABLE }
break { return BREAK; ACCOUNTABLE }
if { return IF; ACCOUNTABLE }
then { return THEN; ACCOUNTABLE }
else { return ELSE_; ACCOUNTABLE }
switch { return SWITCH; ACCOUNTABLE }
case { return CASE; ACCOUNTABLE }
default { return DEFAULT; ACCOUNTABLE }
for { return FOR; ACCOUNTABLE }
downto { return DOWNTO; ACCOUNTABLE }
to { return TO; ACCOUNTABLE }
do { return DO; ACCOUNTABLE }
loop { return LOOP; ACCOUNTABLE }
exit { return EXIT; ACCOUNTABLE }
when { return WHEN; ACCOUNTABLE }

{IDENTIFIER} {
	yylval.sValue = strdup(yytext);
	return IDENTIFIER ;
	/*char *p = (char*)malloc(  (strlen(yytext) + 1) * sizeof(char));
	strcpy(p,yytext);
	printf("%s: ppptoken ID \n", p);
	if (canInsert)
		push(p, "", 0, 0, head);*/ //consertar essa pate
	ACCOUNTABLE
}
{NUMBER_INT} { 
	yylval.iValue = atoi(yytext);
	return NUMBER_INT ; ACCOUNTABLE
}
{NUMBER_REAL} {
	yylval.dValue = atof(yytext);
	return NUMBER_REAL ; ACCOUNTABLE
}

";" {
	return SEMICOLON;
	//canInsert = 0;
	ACCOUNTABLE
}
":" { return COLON ; ACCOUNTABLE }		
"," { return COMMA ; ACCOUNTABLE }		
"."	{ return DOT; ACCOUNTABLE }		
"(" { return OPEN_PARENTHESIS; ACCOUNTABLE }
")"	{ return CLOSE_PARENTHESIS; ACCOUNTABLE }
"[" { return OPEN_BRACKETS; ACCOUNTABLE }
"]" { return CLOSE_BRACKETS; ACCOUNTABLE }
"{" { return OPEN_BRACES; ACCOUNTABLE }
"}" { return CLOSE_BRACES; ACCOUNTABLE }


"+" { return ADD; ACCOUNTABLE }
"-" { return SUB; ACCOUNTABLE }
"*" { return MULT; ACCOUNTABLE }	
"/" { return DIV; ACCOUNTABLE  }
"=" { return EQUAL; ACCOUNTABLE }
"%" { return MOD; ACCOUNTABLE }
"!" { return NEG; ACCOUNTABLE }
"||" { return OR; ACCOUNTABLE }
"&&" { return AND; ACCOUNTABLE }
"<" { return LESS_THEN; ACCOUNTABLE }
">" { return BIGGER_THEN; ACCOUNTABLE }
"==" { return EQUAL_LOGIC; ACCOUNTABLE }
"!=" { return NOT_EQUAL; ACCOUNTABLE }
"<=" { return LESS_EQUAL; ACCOUNTABLE }
">=" { return BIGGER_EQUAL; ACCOUNTABLE }
"++" { return INCREMENT; ACCOUNTABLE }
"--" { return DECREMENT; ACCOUNTABLE }

<<EOF>> { return EOF; ACCOUNTABLE }

.		{nchar++;}

%%

/*int main(argc,argv)
int argc;
char **argv;
{
	//inicialização da pilha
	head = (Tabela*) malloc(sizeof(Tabela));
	canInsert = 0;

	if (argc > 1) {
		FILE *file;

		file = fopen(argv[1], "r");
		if (!file) {
			fprintf(stderr,"could not open %s\n",argv[1]);
			exit(1);
		}
		yyin = file;
	}

	yylex();

	printf("\ncaracteres %d; linhas: %d; palavras: %d;\n",nchar, nline, nword);

	printf("\n   Nome    |    Tipo    | Desloc | Nivel\n");
	printf("------------------------------------------\n");
	printSymbolTable(head);
	removeAllSymbolTable(head);
	
	return 0;
}*/

int yywrap() {
	return(1);
}

 void yyerror (char const *s) {
   fprintf (stderr, "%s\n", s);
 }
