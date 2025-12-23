#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int soma(int k);

int main()
{
    int k;
    printf("Digite um numero: ");
    scanf("%d", &k);

    printf("Soma dos quadrados dos numeros de 1 a %d: %d\n", k, soma(k));

    return 0;
}

int soma(int k)
{
    int s=0;
    for(int i=1;i<=k;i++)
    {
        s += pow(i,2);
    }

    return s;
}