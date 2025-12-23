#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long soma_vetor(int vetor[], int n);

int main(){
    srand(time(NULL));
    int n;

    printf("Digite abaixo o tamanho do vetor:\n");
    scanf("%d", &n);

    int *vetor = malloc(n * sizeof(int));
    if(vetor == NULL){
        printf("Falha ao alocar a memoria!\n");
    }

    for(int i=0;i<n;i++){
        vetor[i] = rand()%100;
    }

    clock_t inicio = clock();

    long soma = soma_vetor(vetor, n);

    clock_t fim = clock();

    double tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;

    printf("tempo de execucao: %f\n", tempo);
    printf("Resultado da soma: %ld\n", soma);

    free(vetor);

    return 0;
}

long soma_vetor(int vetor[], int n){
    long soma=0;
    for(int i=0;i<n;i++){
        soma += vetor[i];
    }

    return soma;
}