#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int mdc_recursivo(int a, int b);
int mdc_iterativo(int a, int b);

int main(){
    int a, b, rec, ite;
    time_t start, end;

    printf("Digite dois numeros para calcular o mdc: ");
    scanf("%d %d", &a, &b);

    start = clock();

    rec = mdc_recursivo(a, b);

    end = clock();

    double time = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Funcao Recursiva:\n");
    printf("O mdc de %d e %d eh %d.\n", a, b, rec);
    printf("Tempo de execucao: %lf\n\n", time);

    start = clock();

    ite = mdc_iterativo(a, b);

    end = clock();

    time = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Funcao Iterativa:\n");
    printf("O mdc de %d e %d eh %d.\n", a, b, ite);
    printf("Tempo de execucao: %lf\n\n", time);

    return 0;
}

int mdc_recursivo(int a, int b){
    if(a < 0 || b < 0){
        return -1;
    }
    else if(b == 0){
        return a;
    }
    else{
        return mdc_recursivo(b, a % b);
    }
}

int mdc_iterativo(int a, int b){
    int mdc = 0;
    if(a < 0 || b < 0){
        return -1;
    }
    else if(b == 0){
        return a;
    }else{
        for(int i=1;i<=(a/2);i++){
            if(a % i == 0 && b % i == 0){
                mdc = i;
            }
        } 
        return mdc;
    }
}