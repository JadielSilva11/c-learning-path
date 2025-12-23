#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int soma(int k);

int main()
{
    int k;
    printf("Digite um numero: ");
    scanf("%d", &k);

    printf(" = %d\n", soma(k));

    return 0;
}

int soma(int k)
{
    int s=0, aux;
    printf("A soma dos quadrados dos numeros: ");
    for(int i=1;i<=k;i++)
    {
        if(i % 2 != 0)
        {
            aux = i *(-1);
            s += pow(aux,2);
            printf("(%d) + ", aux);
        }
        else
        {
            s += pow(i,2);
            printf("(%d) + ", i);
        }
    }

    return s;
}