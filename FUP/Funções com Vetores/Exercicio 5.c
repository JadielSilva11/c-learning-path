#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bpares(int a[]);

int main()
{
    int a[100], i;
    srand(time(NULL));

    printf("O computador ira sortear 100 numeros!\n");
    for(i=0;i<100;i++)
    {
        a[i] = rand()%100 + (-50);
    }
    bpares(a);
    
    return 0;
}

void bpares(int a[])
{
    int i, i2=0, b[100];
    for(i=0;i<100;i++)
    {
        if (a[i] % 2 == 0)
        {
            b[i2] = a[i];
            i2++;
        }
    }
    printf("Numeros pares dentro do sorteio:\n");
    while(i2 > -1)
    {
        printf("%d\n", b[i2]);
        i2--;
    }
}