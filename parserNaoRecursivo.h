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

int predict_table[100][100];
vector<int> productions[100];


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
	/****
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
	****/

	/**** O código abaixo é para colocar uns exemplos de lexema para a gramática dummy ****/

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

	/**** inserir produções a serem referenciadas pela predict_table ****/

	//S -> AB | B
	//A -> aA | c
	//B -> bB | EPSILON 

	productions[0] = vector<int>(); // produção de erro
	productions[1] = vector<int>({NT_A,NT_B});
	productions[2] = vector<int>({NT_B});
	productions[3] = vector<int>({LETRA_A,NT_A});
	productions[4] = vector<int>({LETRA_C});
	productions[5] = vector<int>({LETRA_B,NT_B});
	productions[6] = vector<int>(); // epsilon

	/***
	:) 	a 	c 	b 	$
	S 	AB 	AB 	B 	error
	A 	aA 	c 	error 	error
	B 	error 	error 	bB 	EPSILON
	***/

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
				cout<<"Erro de sintaxe"<<endl;
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




