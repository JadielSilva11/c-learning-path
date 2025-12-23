#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int v[], int n);

int main(){
	int vetor[] = {34, 22, 45, 17, 28};
	int n=5;
	
	printf("Vetor: ");
	for(int i=0;i<n;i++){
		printf("%d ", vetor[i]);
	}

	insertion_sort(vetor, n);

	return 0;
}

void insertion_sort(int v[], int n){
	int chave, j;
	for(int i=1;i<n;i++){
		chave = v[i];
		j = i-1;

		while(j >=0 && v[j] > chave){
			v[j+1] = v[j];
			j--;
		}

		v[j+1] = chave;
	}
	
	printf("\nVetor ordenado: ");
	for(int i=0;i<n;i++){
		printf("%d ", v[i]);
	}
}