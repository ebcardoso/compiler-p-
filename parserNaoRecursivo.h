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

// os tokens abaixo são usados exclusivamente pela gramática dummy 

#define LETRA_A 1 // a
#define LETRA_B 2 // b
#define LETRA_C 3 // c
#define CIFRAO 4 // $ (EOF)

// nao terminais da gramática dummy

#define NT_S -1 // non terminal S
#define NT_A -2 // non terminal A
#define NT_B -3 // non terminal B

//nao terminais com da gramática real

#define NT_PROGRAM -1
#define NT_DECLARATION -2
#define NT_VAR -3
#define NT_CONST -4
#define NT_SUBPROGRAM -5
#define NT_ID_EXP -6
#define NT_ID_EXPS -7
#define NT_EXPRESSION -8
#define NT_CONST_AUX -9
#define NT_FUNCTION -10
#define NT_PROCEDURE -11
#define NT_BLOCK -12
#define NT_PARAMETER_LIST -13 
#define NT_PARAMETER_LIST_AUX -14 
#define NT_COMMAND_AUX -15
#define NT_ACCESS_N_CALL -16
#define NT_RETURN -17
#define NT_BREAK -18
#define NT_IF -19
#define NT_SWITCH -20
#define NT_LOOP -21
#define NT_EXIT -22
#define NT_FOR -23
#define NT_COMMAND -24
#define NT_ACCESS_N_CALL_AUX -25
#define NT_ACCESS -26
#define NT_ATTRIBUTION -27
#define NT_SUBPROGRAM_CALL -28 
#define NT_L_EXP -29
#define NT_EXPRESSION_DEPRECATED -30 
#define NT_REAL_PARAMETER_LIST -31
#define NT_REAL_PARAMETER_LIST_AUX -32 
#define NT_LITERAL -33
#define NT_L_EXP_AUX -34
#define NT_RETURN_AUX -35
#define NT_ELSE -36
#define NT_CASELIST -37
#define NT_DEFAULT -38
#define NT_FOR_AUX -39
#define NT_TERM_OR -40
#define NT_TERM_OR_TAIL -41
#define NT_TERM_AND -42
#define NT_TERM_AND_TAIL -43
#define NT_TERM_BOOL_COMPARISON -44
#define NT_TERM_BOOL_COMPARISON_TAIL -45
#define NT_TERM_ARIT_COMPARISON -46
#define NT_TERM_ARIT_COMPARISON_TAIL -47
#define NT_TERM -48
#define NT_TERM_TAIL -49
#define NT_FACTOR -50
#define NT_FACTOR_TAIL -51
#define NT_NEGATION_UNSUB -52
#define NT_NEGATION_UNSUB_TAIL -53

int predict_table[1000][1000];
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

	/**** O código abaixo é para efetuar a leitura real a partir do lex */
	
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
	

	/**** O código abaixo é para colocar uns exemplos de lexema para a gramática dummy ****/
	/****
	vector<lexema> lex;
	lexema lex_aux;

	lex_aux.lex_id=LETRA_A;
	lex_aux.text=string("a");
	lex.push_back(lex_aux);

	lex_aux.lex_id=LETRA_A;
	lex_aux.text=string("a");
	lex.push_back(lex_aux);

	lex_aux.lex_id=LETRA_C;
	lex_aux.text=string("c");
	lex.push_back(lex_aux);

	lex_aux.lex_id=LETRA_B;
	lex_aux.text=string("b");
	lex.push_back(lex_aux);

	lex_aux.lex_id=LETRA_B;
	lex_aux.text=string("b");
	lex.push_back(lex_aux);

	lex_aux.lex_id=CIFRAO;
	lex_aux.text=string("$");
	lex.push_back(lex_aux);
	****/
	/**** inserir produções a serem referenciadas pela predict_table ****/

	//S -> AB | B
	//A -> aA | c
	//B -> bB | EPSILON 
	/*
	productions[0] = vector<int>(); // produção de erro
	productions[1] = vector<int>({NT_A,NT_B});
	productions[2] = vector<int>({NT_B});
	productions[3] = vector<int>({LETRA_A,NT_A});
	productions[4] = vector<int>({LETRA_C});
	productions[5] = vector<int>({LETRA_B,NT_B});
	productions[6] = vector<int>(); // epsilon
	*/
	/***
	:) 	a 	c 	b 	$
	S 	AB 	AB 	B 	error
	A 	aA 	c 	error 	error
	B 	error 	error 	bB 	EPSILON
	***/
	/*
	predict_table[-NT_S][LETRA_A]= 1;
	predict_table[-NT_S][LETRA_B]= 2; 
	predict_table[-NT_S][LETRA_C]= 1;
	predict_table[-NT_S][CIFRAO]= 0;

	predict_table[-NT_A][LETRA_A]= 3;
	predict_table[-NT_A][LETRA_B]= 0;
	predict_table[-NT_A][LETRA_C]= 4;
	predict_table[-NT_A][CIFRAO]= 0;

	predict_table[-NT_B][LETRA_A]= 0;
	predict_table[-NT_B][LETRA_B]= 5;
	predict_table[-NT_B][LETRA_C]= 0;
	predict_table[-NT_B][CIFRAO]= 6;
	*/

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
	pilha.push(NT_S);

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




