#include <stdio.h>
#include <stdlib.h>

int insertion_sort_cont(int v[], int n);

int main(){
	int v[] = {3, 5, 8, 34, 99, 75, 68};
	int n = 7;

	printf("Vetor:");
	for(int i=0;i<n;i++){
		printf("%d ", v[i]);
	}
	
	int cont = insertion_sort_cont(v, n);
	
	printf("\nVetor:");
	for(int i=0;i<n;i++){
		printf("%d ", v[i]);
	}

	printf("\nTotal de deslocamentos: %d", cont);

	return 0;
}

int insertion_sort_cont(int v[], int n){
	int j, chave, cont=0;

	for(int i=1;i<n;i++){
		chave = v[i];
		j = i-1;
	
		while(j >= 0 && v[j] > chave){
			v[j+1] = v[j];
			j--;
			cont++;
		}

		v[j+1] = chave;
	}

	return cont;
}