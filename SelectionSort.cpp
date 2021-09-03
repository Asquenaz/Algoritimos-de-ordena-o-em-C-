/* 
	Guilherme Fernandes Lima
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#define TAM 200

using namespace std;

void SelectionSort (int vet [], int n){	
	int pos_minima, aux, i,j;
	for	(i = 0; i < n -1; i++){
		pos_minima = i;
		for (j = i; j < n; j++ ){
			if (vet [j] < vet [pos_minima]){
				pos_minima = j;
			}
		}
		if (pos_minima != i){
			aux = vet [i];
			vet [i] = vet[pos_minima];
			vet [pos_minima] = aux;
		}
	}
} 

int main (void){ 
		int i, n = TAM, v [TAM] = {5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,7,19,32,33,1,34,55,66,77,44,4,43,34,45,46,65,45,34,33,31,32,199,122,223,23,23,23,454,5,44,33,44,55,66,77,188,18888,2212,232,343,54,565,676,44,55,22,456,56,65,678,4344,545,56,76,23,56,23,56,76,34,65,65,87,3,2,
		5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,5,4,3,2,1,7,19,32,33,1,34,55,66,77,44,4,43,34,45,46,65,45,34,33,31,32,199,122,223,23,23,23,454,5,44,33,44,55,66,77,188,18888,2212,232,343,54,565,676,44,55,22,456,56,65,678,4344,545,56,76,23,56,23,56,76,34,65,65,87,3,2};
		
		for (i = 0; i < n - 1; i++){
			printf ("Vetor [%d] - %d \n", i, v[i]);
			SelectionSort(v,n);
		}
	}
	
	
