#include <stdio.h>	
#include <stdio.h>
#include <stdlib.h>   
#include <conio.h>

#define MAX 3
#define FALSE 0
#define TRUE 1


int vazia(int ultima)   {
       return ultima == NULL || ultima == 0;
}
int cheia(int ultima){
       return ultima == MAX;
   }
   
   
int adicioar (int dado, int *ultima, int lista[]){
	if (cheia(*ultima)){
		return FALSE;
	}else{
		lista[++ (*ultima)] = dado;
		return TRUE;
	}
}
	void mensagem (){
   	printf("A pilha está cheia");
 
}
   void menu (){
   	int opcao;
    printf("0 - Sair \n");
    printf("1 - Adicionar\n");
    printf("2 - Remover\n");
    printf("3 - Listar\n");
    printf("Voce pode emplihar %d valores\n", MAX);
    printf("Escolha: ");
   }
   
  int main(void){
       int opcao, lista[MAX], ultima = 0, dado;
      do{
      	menu();
      	scanf("%d", &opcao);
           switch (opcao) {
           case 1:
               printf("Informe o dado: ");
               scanf("%d", &dado);
               if (adicionar(dado, &ultima, lista))
                   printf("Dado incluido\n\n");
               else
			    mensagem();
            break;
		/*	
           case 2:
               if (desempilhar(&dado, &topo, pilha)){
                   printf("Dado %d removido\n\n", dado);
               }else{
               	mensagem();
               break;
			   } 
			   */
           case 3:
               if (listar(topo, pilha)){
               }else{
               	mensagem();		   
                break;
			   } 
           }
       } while (opcao != 0);
       system ("PAUSE");
       return 0;
   }
	
}


