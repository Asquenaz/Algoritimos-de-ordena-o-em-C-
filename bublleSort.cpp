/* 
	Guilherme Fernandes Lima
*/ 

#include<string.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define TAM 200			 	
/*

void BublleSort (int v[], int n); // Fun��o para gerar n�meros aleatorior (colocar no vetor) e ordenalos;  
	int main (void){
	int v [TAM];

		int i, n = TAM;
		for (i = 0; i < TAM; i++){ 
			v [i] = rand() % 99;
			printf ("Vetor [%d] - %d", i, v[i]);
			printf ("\n");	
		}
	
		printf("\n");
		printf("Vetor Ordenado");
		
		printf("\n");
		for (i = 0; i < TAM; i++){
			BublleSort(v[], TAM);
			printf ("Vetor [%d] - %d", i, v[i]);
			printf ("\n");	
		}
		return 0;	
	}
*/

void BublleSort (int v[],int n); //Define numeros dentro do vetor de forma manual e ordena

	int main (void){          //Colocando números de forma manual dentro de um Vetor 
		int i, n = TAM, v [TAM] = {5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,7,19,32,33,1,34,55,66,77,44,4,43,34,45,46,65,45,34,33,31,32,199,122,223,23,23,23,454,5,44,33,44,55,66,77,188,18888,2212,232,343,54,565,676,44,55,22,456,56,65,678,4344,545,56,76,23,56,23,56,76,34,65,65,87,3,2,
		5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,7,19,32,33,1,34,55,66,77,44,4,43,34,45,46,65,45,34,33,31,32,199,122,223,23,23,23,454,5,44,33,44,55,66,77,188,18888,2212,232,343,54,565,676,44,55,22,456,56,65,678,4344,545,56,76,23,56,23,56,76,34,65,65,87,3,2};
		for (i = 0; i < n; i++){
			printf ("Vetor [%d] - %d", i, v[i]);
			BublleSort(v,n);
			printf ("\n");	
		}
		printf("\n");
		
		
		printf("Vetor Ordenado");
		
		
		printf("\n");
		for (i = 0; i < n; i++){ 
			printf ("Vet [%d] - %d", i, v[i]);
			printf ("\n");	
		}
		return 0;
		
	}
		
void  BublleSort (int v[], int n){
	int aux, i, j;
	for(i = 0; i < n; i++){
		for (j = 0; j < n-1; j++){
			if	(v [j]> v [j+1]){
				aux = v [j];
				v[j] = v[j+1];
				v [j+1]= aux;
			}
			i++;
		}
	}
}
	

	
	
