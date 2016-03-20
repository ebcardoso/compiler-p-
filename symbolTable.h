//Arquivo que implementa as funções da tabela de símbolos
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tab {
	char *nome;
	char *tipo;
	int nivel;
	int deslocamento;
	struct tab *prox;
} Tabela;

Tabela *head;

//para dizer quando uma variável pode ou não ser inserida na tabela
int canInsert;

//função que insere elementos na tabela, servirá para que duas variáveis não sejam declaradas com mesmo nome em um mesmo escopo
void push(char *nome, char *tipo, int nivel, int desloc, Tabela *p) {
	//declara nova célula e add seus valores
	Tabela *nova = (Tabela *) malloc(sizeof (Tabela));
		nova->nome = nome;
		nova->tipo = tipo;
		nova->nivel = nivel;
		nova->deslocamento = desloc;
	
	//liga o novo elemento à pilha
	nova->prox = p->prox;
	p->prox = nova;
}

//remover o topo da tabela
void pop(Tabela *t) {
	Tabela *p;

	if (t->prox != NULL) {
		p = t->prox;
		t->prox = p->prox;
		free(p);
	} else {
		printf("Pilha vazia!\n");
	};
}

//procurar um símbolo que está em certo nível
int findRepeatedSymbol(char *nome, int nivel, Tabela *t) {
	if (t->prox == NULL) {
		return(0);
	} else if (strcmp(nome, t->prox->nome) == 0) {
		if (nivel == t->prox->nivel) {
			return(1);		
		} else {
			return(0);
		}
	} else {
		return(findRepeatedSymbol(nome, nivel, t->prox));
	}
}

//procurar qualquer símbolo na tabela de simbolos
int findSymbol(char *nome, Tabela *t) {
	if (t->prox == NULL) {
		return(0);
	} else if (strcmp(nome, t->prox->nome) == 0) {
		return(1);
	} else {
		return(findSymbol(nome, t->prox));
	}
}

void printSymbolTable(Tabela *t) {
	if (t->prox != NULL) {
		printf("%-10s | %-10s | %-6i | %i\n", t->prox->nome, t->prox->tipo, t->prox->nivel, t->prox->deslocamento);
		printSymbolTable(t->prox);
	}
}

void removeAllSymbolTable(Tabela *t) {
	if (t->prox == NULL)
		free(t);
	else 
		removeAllSymbolTable(t->prox);
}
