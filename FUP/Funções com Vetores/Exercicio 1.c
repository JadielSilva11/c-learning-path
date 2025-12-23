#include <stdio.h>

float media(int vetor[], float tam);

int main()
{
    int notas[10];
    int i;

    for(i=0;i<10;i++)
    {
        printf("Digite a nota %d: ", i);
        scanf("%d", &notas[i]);
    }
    printf("Media das 10 notas: %.1f", media(notas, 10));
    
    return 0;
}

float media(int vetor[], float tam)
{
    int i;
    float soma=0;
    for(i=0;i<10;i++)
    {
        soma += vetor[i];
    }

    return soma/tam;
}