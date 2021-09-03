#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 

#define max 10
#define TRUE 1
#define FALSE 0

int op;

typedef struct Lista;
struct Lista {
	 int dados[max];
	 int ultimo;
};

void iniciar (Lista l){
	l.ultimo == NULL;
}

bool vazia (Lista l){
	if (l.ultimo == NULL){
		return TRUE;
	}else{
		return FALSE;
	}
}
bool cheia (Lista l){
	if (l.ultimo != NULL){
		return FALSE;
	}else{
		return TRUE;
	}
}
void adiciona (float dado, Lista l){
	if (cheia(l)){
		printf  ("Lista cheia");
		system (0);
	}else{
		l.ultimo += 1;
		l.dados [l.ultimo] = dado;
		printf ("%i %i",  l.ultimo, l.dados);
	}
}
	void remove (Lista l, float valor){
	int posi;
		if (vazia(l)){
		printf ("Lista vazia");
		system (0);
		}else {
			l.ultimo <- l.ultimo -1;
			valor <- l.dados[0];
			posi <- 0;
			while (posi < l.ultimo){
				l.dados[posi] <- l.dados [posi + 1];
				posi <- posi +1;
			} 
			printf ("%d", valor);
		}
	}
 void menu(){
	printf ("1 - Inserir\n");
	printf ("2 - Remover\n");
	printf ("3 - Listar\n");
	printf ("0 - Sair\n");
	printf("Escolha: ");
}

int main (void){
	float valor; int op; 
	Lista l;
do {
	menu ();
	scanf ("%i ", &op);
	switch (op){
		case 1: 
		printf ("Informe o valor");
		scanf ("%d", &valor);
	//	if (adiciona(valor,)){
			printf("Dado incluido");
	//	} else {
			printf("Lista cheia");
		//}
		break;
	
		case 2:
		printf("Digite o valor que deve ser removido ");
		scanf("%d", &valor);
		remove(l, valor);
		break;
	
		case 3:
			printf("Listar");
		break;		
	printf("PAUSE");			
}
	}while (op != 0);
}
