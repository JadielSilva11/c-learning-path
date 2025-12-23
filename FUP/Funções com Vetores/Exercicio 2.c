#include <stdio.h>

float media(float notas[], int pesos[]);

int main()
{
    float notas[5];
    int pesos[5], i;

    for(i=0;i<5;i++)
    {
        printf("Digite a nota %d: ", i);
        scanf("%f", &notas[i]);
        printf("Digite o peso da nota %d: ", i);
        scanf("%d", &pesos[i]);
    }
    printf("Media ponderada: %.1f", media(notas, pesos));
    
    return 0;
}

float media(float notas[], int pesos[])
{
    int i, soma_p;
    float soma_n;
    for(i=0;i<5;i++)
    {
        soma_n += notas[i] * pesos[i];
    }
    for(i=0;i<5;i++)
    {
        soma_p += pesos[i]; 
    }

    return soma_n/soma_p;
}
