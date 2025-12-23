#include <stdio.h>
#include <stdlib.h>

void Bubble_sort(int v[], int n);

int main(){
	int vetor[] = {25, 20, 40, 18, 31};
	int n = 5;

	printf("Vetor: ");
		for(int i=0;i<n;i++){
			printf("%d ", vetor[i]);
		}

	Bubble_sort(vetor, n);

	return 0;
}

void Bubble_sort(int v[], int n){
	int aux;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(v[j] > v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
		}
	}

	printf("\nVetor ordenado: ");
	for(int i=0;i<n;i++){
		printf("%d ", v[i]);
	}
}