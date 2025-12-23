#include <stdio.h>
#include <stdlib.h>

void selection_sort(int v[], int n);

int main(){
	int n = 5;
	int vetor[] = {29, 15, 42, 33, 18};

	printf("Vetor: ");
	for(int i=0;i<n;i++){
		printf("%d ", vetor[i]);
	}

	selection_sort(vetor, n);
	
	return 0;
}

void selection_sort(int v[], int n){
	int menor, aux;
	for(int i=0;i<n-1;i++){
		menor = i;
		for(int j=i+1;j<n;j++){
			if(v[j] < v[menor]){
				menor = j;
			}
		}
		if(menor != i){
			aux = v[i];
			v[i] = v[menor];
			v[menor] = aux;
		}
	}
	
	printf("\nVetor ordenado: ");
	for(int i=0;i<n;i++){
		printf("%d ", v[i]);
	}

}