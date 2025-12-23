#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fibonacci_recursivo(int n);
int fibonacci_iterativo(int n);

int main(){
    int n, result;
    clock_t start, end;

    printf("Digite um indice da sequencia de fibonacci: ");
    scanf("%d", &n);

    start = clock();

    result = fibonacci_recursivo(n);
    
    end = clock();

    double time = ((double) (end - start) / CLOCKS_PER_SEC);

    printf("Funcao recursiva:\n");
    printf("O indice %d e o numero de fibonacci %d\n", n, result);
    printf("Tempo de execucao: %lf\n\n", time);

    start = clock();

    result = fibonacci_iterativo(n);

    end = clock();

    time = ((double) (end - start) / CLOCKS_PER_SEC);

    printf("Funcao iterativa:\n");
    printf("O indice %d e o numero de fibonacci %d\n", n, result);
    printf("Tempo de execucao: %lf\n\n", time);

    return 0;
}

int fibonacci_recursivo(int n){
    if(n < 0){
        printf("ERRO! Por favor, digite um numero positivo.");
    }
    else if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return fibonacci_recursivo(n-1) + fibonacci_recursivo(n-2);
    }
}

int fibonacci_iterativo(int n){
    if(n < 0){
        printf("ERRO! Por favor, digite um numero positivo.");   
    }
    else if(n == 0){
        return 0;
    }
    else{
        int a = 0;
        int b = 1;
        int r;
        for(int i=1;i<n;i++){
            r = a + b;
            a = b;
            b = r;
        }
        return r;
    }
}