#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fatorial_recursivo(int n);
int fatorial_iterativo(int n);

int main(){
    int n;
    clock_t start, end;

    printf("Digite o numero para saber o fatorial: ");
    scanf("%d", &n);

    start = clock();

    fatorial_recursivo(n);

    end = clock();

    double time = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Funcao Recursiva:\n");
    printf("O fatorial de %d e %d!\n", n, fatorial_recursivo(n));
    printf("Tempo de execucao: %lf\n\n", time);

    start = clock();

    fatorial_iterativo(n);

    end = clock();

    time = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Funcao iterativa:\n");
    printf("O fatorial de %d e %d!\n", n, fatorial_iterativo(n));
    printf("Tempo de execucao: %lf", time);

    return 0;
}

int fatorial_recursivo(int n){
    if(n < 0){
        printf("ERRO! Digite um valor positivo.\n");
    }
    else if(n == 0 || n == 1){
        return 1;
    }
    else{
        return n * fatorial_recursivo(n-1);
    }
}

int fatorial_iterativo(int n){
    if(n < 0){
        printf("ERRO! Digite um valor positivo.\n");
    }
    else if(n == 0 || n == 1){
        return 1;
    }
    else{
        int fatorial = 1;

        for(int i=1;i<=n;i++){
            fatorial *= i;
        }

        return fatorial;
    }
}