#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int tam, maiores=0, menores=0;
    printf("DIgite o tamanho do vetor: ");
    scanf("%d", &tam);
    int n[tam], i;

    for(i=0;i<tam;i++)
    {
        n[i] = rand()% 40 + (-20);
        if(n[i] < tam)
        {
            menores++;
        }
        else
        {
            maiores++;
        }
    }
    printf("Numeros maiores que %d: %d\n", tam, maiores);
    printf("Numeros menores que %d: %d\n", tam, menores);

    return 0;
}
