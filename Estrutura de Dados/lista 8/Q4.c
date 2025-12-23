#include <stdio.h>
#include <stdlib.h>

int bubble_sort_cont(int v[], int n);

int main(){
	int v[] = {23, 17, 80, 34, 5};
	int n=5;
	
	printf("Vetor: ");
	for(int i=0;i<n;i++){
		printf("%d ", v[i]);
	}

	int cont = bubble_sort_cont(v, n);

	printf("\nVetor: ");
	for(int i=0;i<n;i++){
		printf("%d ", v[i]);
	}

	printf("\nQuantidade de trocas: %d\n", cont);

	return 0;
}

int bubble_sort_cont(int v[], int n){
	int cont=0, aux;

	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(v[j] > v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
				cont++;
			}
		}
	}
	
	return cont;
}