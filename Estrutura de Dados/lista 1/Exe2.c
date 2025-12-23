#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int conta_ocorrencias(int vetor1[], int vetor2[], int n);

int main(){
    srand(time(NULL));
    int n;

    printf("Digite abaixo o tamanho do vetor:\n");
    scanf("%d", &n);

    int *v1 = malloc(n * sizeof(int));
    int *v2 = malloc(n * sizeof(int));

    if(v1 == NULL || v2 == NULL){
        printf("Falha ao alocar memoria!");
    }else{
        for(int i=0;i<n;i++){
            v1[i] = rand()%100000;
            v2[i] = rand()%100000;
        }
    }

    clock_t inicio = clock();

    int total = conta_ocorrencias(v1, v2, n);

    clock_t fim = clock();

    double tempo = ((double)(fim - inicio)) / CLOCKS_PER_SEC;

    printf("Tempo de execucao: %f segundos\n", tempo);
    printf("Total de aparicoes de numeros do vetor 1 no vetor 2: %d\n", total);

    free(v1);
    free(v2);

    return 0;
}

int conta_ocorrencias(int vetor1[], int vetor2[], int n){
    int cont_total=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(vetor1[i] == vetor2[j]){
                cont_total++;
            }
        }
    }

    return cont_total;
}