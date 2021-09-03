#include <stdio.h>	
#include <stdio.h>
#include <stdlib.h>   
#include <conio.h>
#define MAX 3
#define FALSE 0
#define TRUE 1

   int vazia(int topo)   {
       return topo == NULL || topo == 0;
   }
   
   int cheia(int topo){
       return topo == MAX;
   }   
   
   int empilhar(int dado, int *topo, int pilha[]) {
       if (cheia(*topo)){
       	 return FALSE;
	   }else{
           pilha[(*topo)++] = dado;
           return TRUE;
   		}
    }
   int desempilhar(int *dado, int *topo, int pilha[]){
      if (vazia(*topo)){
	   return FALSE;
	  }else{
           *dado = pilha[--(*topo)];
           return TRUE;
       }
        printf ("\n\n ");
   }
   
   void listar(int topo, int pilha[]){
       if (vazia(topo)) 
	   return FALSE;
       else{
           while (topo > 0){
              topo--;
               printf("%d [%d]\n", topo, pilha[topo]);
          }
           printf ("\n\n ");
           return TRUE;
       }
       
   }
   void mensagem (){
   	printf("A pilha está cheia");
   }
   
   void menu (){
    printf("0 - Sair \n");
    printf("1 - Adicionar\n");
    printf("2 - Remover\n");
    printf("3 - Listar\n");
    printf("Voce pode emplihar %d valores\n", MAX);
    printf("Escolha: ");
   }
   
  int main(void){
       int opcao, pilha[MAX], topo = 0, dado;
      do{
      	menu();
      	scanf("%d", &opcao);
      	
           switch (opcao) {
           case 1:
               printf("Informe o dado: ");
               scanf("%d", &dado);
               if (empilhar(dado, &topo, pilha))
                   printf("Dado incluido\n\n");
               else
			    mensagem();
            break;
			
           case 2:
               if (desempilhar(&dado, &topo, pilha)){
                   printf("Dado %d removido\n\n", dado);
               }else{
               	mensagem();
               break;
			   } 
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
