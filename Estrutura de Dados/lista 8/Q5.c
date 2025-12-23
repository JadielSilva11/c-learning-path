#include <stdio.h>
#include <stdlib.h>

int selection_sort_cont(int v[], int n);

int main(){
	int v[] = {75, 32, 67, 3, 10};
	int n=5;

	printf("Vetor: ");
	for(int i=0;i<n;i++){
		printf("%d ", v[i]);
	}

	int cont = selection_sort_cont(v, n);

	printf("\nVetor: ");
	for(int i=0;i<n;i++){
		printf("%d ", v[i]);
	}

	printf("\nNumero de comparacoes: %d\n", cont);
	return 0;
}

int selection_sort_cont(int v[], int n){
	int menor,aux, i, cont=0;

	for(i=0;i<n-1;i++){	
		menor = i;
		for(int j=i+1;j<n;j++){
			if(v[j] < v[menor]){
				menor = j;
			}cont++;
		}

		if(menor != i){
		aux = v[i];	
		v[i] = v[menor];
		v[menor] = aux;
	}
	}

	return cont;
}