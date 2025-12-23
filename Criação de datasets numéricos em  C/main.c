#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 50000

int cmp(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

void gerar_aleatorio(FILE *f, int n);
void gerar_ordenado(FILE *f, int n);
void gerar_quase_ordenado(FILE *f, int n);

int main(){
    srand(time(NULL));

    FILE *f1 = fopen("dados_aleatorio.txt", "w");
    FILE *f2 = fopen("dados_ordenado.txt", "w");
    FILE *f3 = fopen("dados_quase_ordenado.txt", "w");

    gerar_aleatorio(f1, N);
    gerar_ordenado(f2, N);
    gerar_quase_ordenado(f3, N);

    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}

void gerar_aleatorio(FILE *f, int n){
    for(int i = 0; i < N; i++){
        int x = rand() % 1000000000 + 1;
        fprintf(f, "%d\n", x);
    }
}

void gerar_ordenado(FILE *f, int n){
    int *v = malloc(N * sizeof(int));

    for(int i = 0; i < N; i++)
        v[i] = rand() % 1000000000 + 1;

    qsort(v, N, sizeof(int), cmp);

    for(int i = 0; i < N; i++)
        fprintf(f, "%d\n", v[i]);

    free(v);
}

void gerar_quase_ordenado(FILE *f, int n){
    int *v = malloc(N * sizeof(int));

    // gera
    for(int i = 0; i < N; i++)
        v[i] = rand() % 1000000000 + 1;

    // ordena
    qsort(v, N, sizeof(int), cmp);

    // embaralha 10%
    int qtd = N * 0.10;

    for(int i = 0; i < qtd; i++){
        int a = rand() % N;
        int b = rand() % N;

        int tmp = v[a];
        v[a] = v[b];
        v[b] = tmp;
    }

    // grava
    for(int i = 0; i < N; i++)
        fprintf(f, "%d\n", v[i]);

    free(v);
}