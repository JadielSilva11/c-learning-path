#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void substituir(int vetor[]);

int main()
{
    srand(time(NULL));

    int vetor[100];
    for(int i=0;i<100;i++)
    {
        vetor[i] = rand()%100 + (-50);
    }
    substituir(vetor);
    
    return 0;
}

void substituir(int vetor[])
{
    int num=0;
    printf("Numeros substituidos:\n");
    for(int i=0;i<100;i++)
    {
        if(vetor[i] < 0)
        {
            printf("%d > ", vetor[i]);
            vetor[i] = 0;
            printf("%d\n", vetor[i]);
            num++;
        }
    }
    printf("Quantidade de numeros substituidos: %d", num);
}