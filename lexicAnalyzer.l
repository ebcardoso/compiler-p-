%{
/*
	Analizador Lexico da Linguagem P++
	Equipe: Breno Cardoso, Lucas Simonetti, Renato Higor, Sidemar Fideles

	--Para compilar e executar
	lex lexicAnalizer.l
	cc lex.yy.c -ll -o lexicAnalizer
	./lexicAnalizer
*/
%}

LETTER				[a-zA-Z]
DIGIT				[0-9]
NUMBER_INT			{DIGIT}+
NUMBER_REAL 		{NUMBER_INT}"."{DIGIT}+
NUMBER 				{NUMBER_REAL}|{NUMBER_INT}

ID	 				({LETTER}|_)({LETTER}|{DIGIT}|_)*

%%
[\t ]+ /* ignorar espaços em branco */;

procedure { printf("%s: token PROCEDURE\n", yytext); }
function { printf("%s: token FUNCTION\n", yytext); }

ref { printf("%s: token REF\n", yytext); }
var { printf("%s: token VAR\n", yytext); }
const { printf("%s: token CONST\n", yytext); }
int { printf("%s: token INT\n", yytext); }
real { printf("%s: token REAL\n", yytext); }
string { printf("%s: token STRING\n", yytext); }

true { printf("%s: token TRUE\n", yytext); }
false { printf("%s: token FALSE\n", yytext); }

null {printf("%s: token NULL \n", yytext); }

begin { printf("%s: token BEGIN\n", yytext); }
end { printf("%s: token END\n", yytext); }

return { printf("%s: token RETURN\n", yytext); }
break { printf("%s: token BREAK\n", yytext); }
if { printf("%s: token IF\n", yytext); }
then { printf("%s: token THEN\n", yytext); }
else { printf("%s: token ELSE\n", yytext); }
switch { printf("%s: token SWITCH\n", yytext); }
case { printf("%s: token CASE\n", yytext); }
default { printf("%s: token DEFAULT\n", yytext); }
for { printf("%s: token FOR\n", yytext); }
downto { printf("%s: token DOWNTO\n", yytext); }
to { printf("%s: token TO\n", yytext); }
do { printf("%s: token DO\n", yytext); }
loop { printf("%s: token LOOP\n", yytext); }
exit { printf("%s: token EXIT\n", yytext); }
when { printf("%s: token WHEN\n", yytext); }

{ID} { printf("%s: token ID \n", yytext);}
{NUMBER_INT} { printf("%s: token NUMBER_INT \n", yytext); }
{NUMBER_REAL} { printf("%s: token NUMBER_REAL \n", yytext); }


.|\n {ECHO; }
%%

main() {
	yylex();
}
