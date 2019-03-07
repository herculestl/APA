#include <stdio.h>
#include <stdlib.h>
	
	int i = 0, j = 0;		
	int MAIOR_VALOR(int *Vetor_A, int tam){
	int maior = 0;
	
	for (i =0; i < tam; i++){
		if (Vetor_A[i] > maior) 
			maior = Vetor_A[i];	
		}
		return maior;
	} 
	
void COUNTING_SORT(int *A, int *B, int tam, int k){
		int C[k]; 
		for(i = 0; i <= k; i++)
			 C[i] = 0; 
		for(j = 0; j < tam; j++) 
			C[A[j]]= C[A[j]] + 1; 
		for(i = 1; i <= k; i++) 
			C[i] = C[i] + C[i-1]; 
		for(j = tam -1 ; j >= 0; j--) { 
			int c = C[A[j]];
			B[c] = A[j];
			C[A[j]] = C[A[j]] - 1; 
		}
	} 
	
int main()	{
		
	int k = 0, tam = 0;
	
	int A[] = {2,5,3,0,2,3,0,5,3,0};
	tam = sizeof(A) / sizeof(int);
	k = MAIOR_VALOR(A,tam);
	
	printf("\nVetor A Desordenado:\n");
	
	for(i = 0; i < tam; i++) printf("%d, ", A[i]);
		int B[tam];
		COUNTING_SORT(A, B, tam, k);
		printf("\n\n\nVetor A Ordenado:\n");
	
	for(i = 1; i <= tam; i++){
		A[i] = B[i];
		printf("%d, ", A[i]);
		}
		getchar();
		return 0;
	}
