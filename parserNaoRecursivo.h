#include <stdio.h>
#include <iostream>
#include "parserTokens.h"
#include "parserEmitter.h"
#include <vector>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

int lookahead;

#define CIFRAO 900 // $ (EOF)

#define NT_PROGRAM -1
#define NT_DECLARATION -2
#define NT_VAR -3
#define NT_ID_EXP -4
#define NT_IDS_EXPS -5
#define NT_CONST -6
#define NT_CONST_AUX -7
#define NT_BLOCK -8
#define NT_PROCEDURE -9
#define NT_FUNCTION -10
#define NT_PARAMETER_LIST -11
#define NT_PARAMETER_LIST_AUX -12
#define NT_COMMAND -13
#define NT_COMMAND_AUX -14
#define NT_ACCESS_N_CALL -15
#define NT_ACCESS -16
#define NT_ATTRIBUITION -17
#define NT_SUBPROGRAM_CALL -18
#define NT_REAL_PARAMETER_LIST -19
#define NT_REAL_PARAMETER_LIST_AUX -20
#define NT_L_EXP_AUX -21
#define NT_RETURN -22
#define NT_RETURN_AUX -23
#define NT_BREAK -24
#define NT_IF -25
#define NT_ELSE -26
#define NT_SWITCH -27
#define NT_CASELIST -28
#define NT_DEFAULT -29
#define NT_FOR -30
#define NT_FOR_AUX -31
#define NT_LOOP -32
#define NT_EXIT -33
#define NT_TERM_OR_TAIL -34
#define NT_TERM_AND_TAIL -35
#define NT_TERM_BOOL_COMPARISON_TAIL -36
#define NT_TERM_ARIT_COMPARISON_TAIL -37
#define NT_TERM_TAIL -38
#define NT_FACTOR_TAIL -39
#define NT_NEGATION_UNSUB_TAIL -40
#define NT_NEGATION_UNSUB -41
#define NT_SUBPROGRAM -42
#define NT_ACCESS_N_CALL_AUX -43
#define NT_FACTOR -44
#define NT_TERM -45
#define NT_TERM_ARIT_COMPARISON -46
#define NT_TERM_BOOL_COMPARISON -47
#define NT_TERM_AND -48
#define NT_TERM_OR -49
#define NT_EXPRESSION -50
#define NT_L_EXP -51
#define NT_ARR_EXP -52
#define NT_ARR_EXP_AUX -53
#define NT_LITERAL -54


int predict_table[100][1000];
vector<int> productions[120];


struct lexema{
	int lex_id;
	string text;
};

void eat(int t) {
	emitter(t, yytext);
	if (lookahead == t)
		lookahead = yylex();
	else {
		printf("\n---------------------\n");
		printf("RECEBIDO: %d  ESPERADO: %d\n", lookahead, t);
		printf ("syntax error in match");
		exit(0);
	}
}

void parse(char *src) {  /*  parses and translates expression list  */
	FILE *file = fopen(src, "r");
	if (!file) {
		fprintf(stderr,"could not open %s\n",src);
		exit(1);
	}

	cout<<"\n---------------------\n";

	yyin=file;

	vector<lexema> lex;
	lexema lex_aux;

	while(true)
	{
		lookahead=yylex();

		lex_aux.lex_id=lookahead;
		lex_aux.text=string(yytext);

		lex.push_back(lex_aux);

		if(lookahead==EOF) break;
	}

	// reservada para erro
	productions[0] = vector<int>(); 
	
	// <program> -> <declaration> 
	productions[1] = vector<int>({NT_DECLARATION});

	// <program> -> EPSILON 
	productions[2] = vector<int>();

	// <declaration> -> <var> <declaration> 
	productions[3] = vector<int>({NT_VAR,NT_DECLARATION});

	// <declaration> -> <const> <declaration> 
	productions[4] = vector<int>({NT_CONST,NT_DECLARATION});

	// <declaration> -> <subprogram> <declaration> 
	productions[5] = vector<int>({NT_SUBPROGRAM,NT_DECLARATION});

	// <declaration> -> EPSILON 
	productions[6] = vector<int>();

	// <var> -> var id <id_exp> <ids_exps> 
	productions[7] = vector<int>({VAR,ID,NT_ID_EXP,NT_IDS_EXPS});

	// <id_exp> -> = <expression> 
	productions[8] = vector<int>({EQUAL,NT_EXPRESSION});

	// <id_exp> -> EPSILON 
	productions[9] = vector<int>();

	// <ids_exps> -> , id <id_exp> <ids_exps> 
	productions[10] = vector<int>({COMMA,ID,NT_ID_EXP,NT_IDS_EXPS});

	// <ids_exps> -> EPSILON 
	productions[11] = vector<int>();

	// <const> -> const id = <expression> <const_aux> 
	productions[12] = vector<int>({CONST,ID,EQUAL,NT_EXPRESSION,NT_CONST_AUX});

	// <const_aux> -> , id = <expression> <const_aux> 
	productions[13] = vector<int>({COMMA,ID,EQUAL,NT_EXPRESSION,NT_CONST_AUX});

	// <const_aux> -> EPSILON 
	productions[14] = vector<int>();

	// <subprogram> -> <function> 
	productions[15] = vector<int>({NT_FUNCTION});

	// <subprogram> -> <procedure> 
	productions[16] = vector<int>({NT_PROCEDURE});

	// <block> -> <declaration> begin <command> end 
	productions[17] = vector<int>({NT_DECLARATION,BEG,NT_COMMAND,END});

	// <procedure> -> procedure id '(' <parameter_list> ')' <block> 
	productions[18] = vector<int>({NT_PROCEDURE,ID,OPEN_PARENTHESIS,NT_PARAMETER_LIST,CLOSE_PARENTHESIS,NT_BLOCK});

	// <function> -> function id '(' <parameter_list> ')' <block> 
	productions[19] = vector<int>({NT_FUNCTION,ID,OPEN_PARENTHESIS,NT_PARAMETER_LIST,CLOSE_PARENTHESIS,NT_BLOCK});

	// <parameter_list> -> id <parameter_list_aux> 
	productions[20] = vector<int>({ID,NT_PARAMETER_LIST_AUX});

	// <parameter_list> -> ref id <parameter_list_aux> 
	productions[21] = vector<int>({REF,ID,NT_PARAMETER_LIST_AUX});

	// <parameter_list> -> EPSILON 
	productions[22] = vector<int>();

	// <parameter_list_aux> -> , <parameter_list> 
	productions[23] = vector<int>({COMMA,NT_PARAMETER_LIST});

	// <parameter_list_aux> -> EPSILON 
	productions[24] = vector<int>();

	// <command> -> <block> <command_aux> 
	productions[25] = vector<int>({NT_BLOCK,NT_COMMAND_AUX});

	// <command> -> <access_n_call> <command_aux> 
	productions[26] = vector<int>({NT_ACCESS_N_CALL,NT_COMMAND_AUX});

	// <command> -> <return> <command_aux> 
	productions[27] = vector<int>({NT_RETURN,NT_COMMAND_AUX});

	// <command> -> <break> <command_aux> 
	productions[28] = vector<int>({NT_BREAK,NT_COMMAND_AUX});

	// <command> -> <if> <command_aux> 
	productions[29] = vector<int>({NT_IF,NT_COMMAND_AUX});

	// <command> -> <switch> <command_aux> 
	productions[30] = vector<int>({SWITCH, NT_COMMAND_AUX});

	// <command> -> <loop> <command_aux> 
	productions[41] = vector<int>({NT_LOOP, NT_COMMAND_AUX});

	// <command> -> <exit> <command_aux> 
	productions[42] = vector<int>({NT_EXIT, NT_COMMAND_AUX});

	// <command> -> <for> <command_aux> 
	productions[43] = vector<int>({NT_FOR, NT_COMMAND_AUX});

	// <command> -> EPSILON 
	productions[44] = vector<int>();

	// <command_aux> -> ; <command> 
	productions[45] = vector<int>({SEMICOLON, NT_COMMAND});

	// <access_n_call> -> id <access_n_call_aux> 
	productions[46] = vector<int>({ID, NT_ACCESS_N_CALL_AUX});

	// <access_n_call_aux> -> <access> 
	productions[47] = vector<int>({NT_ACCESS});

	// <access_n_call_aux> -> <attribuition> 
	productions[48] = vector<int>({NT_ATTRIBUITION});

	// <access_n_call_aux> -> <subprogram_call> 
	productions[49] = vector<int>({NT_SUBPROGRAM_CALL});

	// <access> -> . id <access_n_call_aux> 
	productions[50] = vector<int>({DOT,ID,NT_ACCESS_N_CALL_AUX});

	// <access> -> "[" <l_exp> "]" <access_n_call_aux> 
	productions[51] = vector<int>({OPEN_BRACKETS, NT_L_EXP, CLOSE_BRACKETS, NT_ACCESS_N_CALL_AUX});

	// <access> -> EPSILON 
	productions[52] = vector<int>();

	// <attribuition> -> = <expression> 
	productions[53] = vector<int>({NT_EXPRESSION});

	// <subprogram_call> -> '(' <real_parameter_list> ')' 
	productions[54] = vector<int>({OPEN_PARENTHESIS, NT_REAL_PARAMETER_LIST, CLOSE_PARENTHESIS});

	// <real_parameter_list> -> ref id <real_parameter_list_aux> 
	productions[55] = vector<int>({REF, ID, NT_REAL_PARAMETER_LIST_AUX});

	// <real_parameter_list> -> <expression> <real_parameter_list_aux> 
	productions[56] = vector<int>({NT_EXPRESSION, NT_REAL_PARAMETER_LIST_AUX});

	// <real_parameter_list> -> EPSILON 
	productions[57] = vector<int>();

	// <real_parameter_list_aux> -> , <real_parameter_list> 
	productions[58] = vector<int>({COMMA, NT_REAL_PARAMETER_LIST});

	// <real_parameter_list_aux> -> EPSILON 
	productions[59] = vector<int>();

	// <l_exp> -> <expression> <l_exp_aux> 
	productions[60] = vector<int>({NT_EXPRESSION, NT_L_EXP_AUX});

	// <l_exp_aux> -> , <l_exp> 
	productions[61] = vector<int>({COMMA, NT_L_EXP});

	// <l_exp_aux> -> EPSILON 
	productions[62] = vector<int>();

	// <return> -> return <return_aux> 
	productions[63] = vector<int>({RETURN, NT_RETURN_AUX});

	// <return_aux> -> <expression> 
	productions[64] = vector<int>({NT_EXPRESSION});

	// <return_aux> -> EPSILON 
	productions[65] = vector<int>();

	// <break> -> break 
	productions[66] = vector<int>({BREAK});

	// <if> -> if (<expression>) then <command> <else> 
	productions[67] = vector<int>({IF, OPEN_PARENTHESIS, NT_EXPRESSION, CLOSE_PARENTHESIS, THEN, NT_COMMAND, NT_ELSE});

	// <else> -> else <command> 
	productions[68] = vector<int>({ELSE, NT_COMMAND});

	// <else> -> EPSILON 
	productions[69] = vector<int>();

	// <switch> -> switch '(' <access_n_call> ')' begin <caselist> <default> end 
	productions[70] = vector<int>({SWITCH, OPEN_PARENTHESIS, NT_ACCESS_N_CALL, CLOSE_PARENTHESIS, BEG, NT_CASELIST, NT_DEFAULT, END});

	// <caselist> -> case lit : <command> <caselist> 
	productions[71] = vector<int>({CASE, NT_LITERAL, COLON, NT_COMMAND, NT_CASELIST});

	// <caselist> -> EPSILON 
	productions[72] = vector<int>();

	// <default> -> default : <command> 
	productions[73] = vector<int>({DEFAULT, COLON, NT_COMMAND});

	// <default> -> EPSILON 
	productions[74] = vector<int>();

	// <for> -> for id = <expression> <for_aux> <expression> do 
	productions[75] = vector<int>({FOR, ID, EQUAL, NT_EXPRESSION, NT_FOR_AUX, NT_EXPRESSION, DO});

	// <for_aux> -> to 
	productions[76] = vector<int>({TO});

	// <for_aux> -> downto 
	productions[77] = vector<int>({DOWNTO});

	// <loop> -> loop <command> end 
	productions[78] = vector<int>({LOOP, NT_COMMAND, END});

	// <exit> -> exit when '(' <expression> ')' 
	productions[79] = vector<int>({EXIT, WHEN, OPEN_PARENTHESIS, NT_EXPRESSION, CLOSE_PARENTHESIS});

	// <expression> -> <term_or> <term_or_tail> 
	productions[80] = vector<int>({NT_TERM_OR, NT_TERM_OR_TAIL});

	// <term_or_tail> -> || <term_or> <term_or_tail> 
	productions[81] = vector<int>({OR, NT_TERM_OR, NT_TERM_OR_TAIL});

	// <term_or_tail> -> EPSILON 
	productions[82] = vector<int>();

	// <term_or> -> <term_and> <term_and_tail> 
	productions[83] = vector<int>({NT_TERM_AND, NT_TERM_AND_TAIL});

	// <term_and_tail> -> && <term_and> <term_and_tail> 
	productions[84] = vector<int>({AND, NT_TERM_AND, NT_TERM_AND_TAIL});

	// <term_and_tail> -> EPSILON 
	productions[85] = vector<int>();

	// <term_and> -> <term_bool_comparison> <term_bool_comparison_tail> 
	productions[86] = vector<int>({NT_TERM_BOOL_COMPARISON, NT_TERM_BOOL_COMPARISON_TAIL});

	// <term_bool_comparison_tail> -> == <term_bool_comparison> 
	productions[87] = vector<int>({EQUAL_LOGIC, NT_TERM_BOOL_COMPARISON});

	// <term_bool_comparison> -> <term_arit_comparison> <term_arit_comparison_tail> 
	productions[88] = vector<int>({NT_TERM_ARIT_COMPARISON, NT_TERM_ARIT_COMPARISON_TAIL});

	// <term_arit_comparison_tail> -> <= <term_arit_comparison> <term_arit_comparison_tail><=
	productions[89] = vector<int>({LESS_EQUAL, NT_TERM_ARIT_COMPARISON, NT_TERM_ARIT_COMPARISON_TAIL});

	// <term_arit_comparison_tail> -> >= <term_arit_comparison> <term_arit_comparison_tail> 
	productions[90] = vector<int>({BIGGER_EQUAL, NT_TERM_ARIT_COMPARISON, NT_TERM_ARIT_COMPARISON_TAIL});

	// <term_arit_comparison_tail> -> < <term_arit_comparison> <term_arit_comparison_tail><
	productions[91] = vector<int>({LESS_THEN, NT_TERM_ARIT_COMPARISON, NT_TERM_ARIT_COMPARISON_TAIL});

	// <term_arit_comparison_tail> -> > <term_arit_comparison> <term_arit_comparison_tail> 
	productions[92] = vector<int>({BIGGER_THEN, NT_TERM_ARIT_COMPARISON, NT_TERM_ARIT_COMPARISON_TAIL});

	// <term_arit_comparison_tail> -> EPSILON 
	productions[93] = vector<int>();

	// <term_arit_comparison> -> <term> <term_tail> 
	productions[94] = vector<int>({NT_TERM, NT_TERM_TAIL});

	// <term_tail> -> + <term> <term_tail> 
	productions[95] = vector<int>({ADD, NT_TERM, NT_TERM_TAIL});

	// <term_tail> -> - <term> <term_tail> 
	productions[96] = vector<int>({NT_TERM, NT_TERM_TAIL});

	// <term_tail> -> EPSILON
	productions[97] = vector<int>();

	// <term> -> <factor> <factor_tail> 
	productions[98] = vector<int>({NT_FACTOR, NT_FACTOR_TAIL});

	// <factor_tail> -> * <factor> <factor_tail> 
	productions[99] = vector<int>({MULT, NT_FACTOR ,NT_FACTOR_TAIL});

	// <factor_tail> -> / <factor> <factor_tail> 
	productions[100] = vector<int>({DIV, NT_FACTOR ,NT_FACTOR_TAIL});

	// <factor_tail> -> EPSILON 
	productions[101] = vector<int>();

	// <factor> -> <negation_unsub> <negation_unsub_tail>
	productions[102] = vector<int>({NT_NEGATION_UNSUB, NT_NEGATION_UNSUB_TAIL}); 

	// <negation_unsub_tail> -> ! <negation_unsub> 
	productions[103] = vector<int>({NEG, NT_NEGATION_UNSUB});

	// <negation_unsub_tail> -> EPSILON 
	productions[104] = vector<int>();

	// <negation_unsub> -> <literal> 
	productions[105] = vector<int>({NT_LITERAL});

	// <negation_unsub> -> '(' <expression> ')'
	productions[106] = vector<int>({OPEN_PARENTHESIS, NT_EXPRESSION, CLOSE_PARENTHESIS});

	// <negation_unsub> -> <arr-exp>
	productions[107] = vector<int>({NT_ARR_EXP});

	// <arr-exp> -> literal <arr-exp-aux>
	productions[108] = vector<int>({NT_LITERAL, NT_ARR_EXP_AUX});

	// <arr-exp-aux> -> ',' literal <arr-exp-aux>
	productions[109] = vector<int>({COMMA, NT_LITERAL, NT_ARR_EXP_AUX});

	// <arr-exp-aux> -> EPSILON
	productions[110] = vector<int>();

	for(int k=0;k<100;k++)
		for(int j=0;j<1000;j++)
			predict_table[k][j]=0;


	predict_table[-NT_PROGRAM][VAR] =  1;
	predict_table[-NT_PROGRAM][CONST] =  1;
	predict_table[-NT_PROGRAM][FUNCTION] =  1;
	predict_table[-NT_PROGRAM][PROCEDURE] =  1;

	predict_table[-NT_DECLARATION][VAR] = 3;
	predict_table[-NT_DECLARATION][CONST] = 4;
	predict_table[-NT_DECLARATION][FUNCTION] = 5;
	predict_table[-NT_DECLARATION][PROCEDURE] = 5;
	predict_table[-NT_DECLARATION][BEG] = 6;

	predict_table[-NT_VAR][VAR] = 7;

	predict_table[-NT_ID_EXP][EQUAL] =  8;
	predict_table[-NT_ID_EXP][COMMA] =  9;
	predict_table[-NT_ID_EXP][VAR] =  9;
	predict_table[-NT_ID_EXP][CONST] =  9;
	predict_table[-NT_ID_EXP][FUNCTION] =  9;
	predict_table[-NT_ID_EXP][PROCEDURE] =  9;
	predict_table[-NT_ID_EXP][BEG] =  9;


	/***
	pseudocodigo

	enquanto pilha nao for vazia
		se atual for terminal
			tenta consumir
		senao
			escolhe producao e empilha de tras pra frente
	***/

	int dbg = 0; //debug

	int posicao = 0;
	stack<int> pilha;

	pilha.push(CIFRAO);
	pilha.push(NT_PROGRAM);

	while(!pilha.empty())
	{
		int lhs = pilha.top();
		pilha.pop();

		if(lhs > 0) //terminal
		{
			if(dbg) cout<<"Terminal "<<lhs<<" tentando match com "<<lex[posicao].text<<endl;
			if(lhs==lex[posicao].lex_id)
			{
				cout<<"Matched: "<<lex[posicao].text<<endl;
				posicao++;
			}
			else
			{
				cout<<"Erro de sincronismo"<<endl;
				exit(1);
			}

		}
		else
		{
			if(dbg) cout<<"Nao terminal "<<lhs<<" produzindo com "<<lex[posicao].lex_id<<endl;
			if(dbg) cout<<"Regra n. "<<predict_table[-lhs][lex[posicao].lex_id]<<" escolhida"<<endl;
			if(predict_table[-lhs][lex[posicao].lex_id]==0)
			{
				cout<<"Erro de sintaxe at "<<lex[posicao].text<<endl;
				exit(1);
			}
 			cout<<"Regra n. "<<predict_table[-lhs][lex[posicao].lex_id]<<" escolhida"<<endl;
			vector<int> producao = productions[ predict_table[-lhs][lex[posicao].lex_id] ];
			reverse(producao.begin(),producao.end());
			if(dbg) cout<<"A empilhar ";
			if(dbg) for(int l:producao) cout<<l<<" ";
			if(dbg) cout<<endl;
			for(int l:producao)
				pilha.push(l);
		}
	}




}




