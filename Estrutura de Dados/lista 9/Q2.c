#include <stdio.h>

void merge_sort_votos(int v[], int esq, int dir);
void merge_votos(int v[], int esq, int meio, int dir);

int main(){
	int v[] = {15, 9, 22, 8, 17};
	int esq = 0, dir = 4;

	printf("Vetor: ");
	for(int i=0;i<=dir;i++){
		printf("%d ", v[i]);
	}

	merge_sort_votos(v, esq, dir);

	printf("\nVetor ordenado: ");
	for(int i=0;i<=dir;i++){
		printf("%d ", v[i]);
	}	

	return 0;
}

void merge_sort_votos(int v[], int esq, int dir){
	if(esq < dir){
		int meio = (esq + dir) / 2;

		merge_sort_votos(v, esq, meio);
		merge_sort_votos(v, meio+1, dir);

		merge_votos(v, esq, meio, dir);
	}
}

void merge_votos(int v[], int esq, int meio, int dir){
	int i, j, aux;

	int n1 = meio - esq + 1;
	int n2 = dir - meio;

	int vE[n1];
	int vD[n2];

	for(i=0;i<n1;i++){
		vE[i] = v[esq + i];
	}

	for(j=0;j<n2;j++){
		vD[j] = v[meio + j + 1];
	}

	i=0;
	j=0;
	aux=esq;
	while(i < n1 && j < n2){
		if(vE[i] < vD[j]){
			v[aux] = vE[i];
			i++;
		}else{
			v[aux] = vD[j];
			j++;
		}
		aux++;
	}

	while(i < n1){
		v[aux] = vE[i];
		i++;
		aux++;
	}

	while(j < n2){
		v[aux] = vD[j];
		j++;
		aux++;
	}
}