#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int pares(int a[]);
int impares(int a[]);

int main()
{
    int a[100], i;
    srand(time(NULL));

    printf("O computador ira sortear 100 numeros!\n");
    for(i=0;i<100;i++)
    {
        a[i] = rand()%100 + (-50);
    }
    printf("Total de numero pares sorteados: %d\n", pares(a));
    printf("Total de numero impares sorteados: %d", impares(a));
    
    return 0;
}

int pares(int a[])
{
    int i, par=0;
    for(i=0;i<100;i++)
    {
        if (a[i] % 2 == 0)
        {
            par++;
        }
    }

    return par;
}

int impares(int a[])
{
    int i, impar=0;
    for(i=0;i<100;i++)
    {
        if (a[i] % 2 != 0)
        {
            impar++;
        }
    }

    return impar;
}