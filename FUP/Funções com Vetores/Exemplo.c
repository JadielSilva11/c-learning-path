#include <stdio.h>

int media(int vetor[], int tam);

int main()
{
    int vetor[3];
    int i;
    for(i=0;i<3;i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("media: %d", media(vetor, 3));
    
    return 0;
}

int media(int vetor[], int tam)
{
    int soma=0, i;
    for(i=0;i<tam;i++)
    {
        soma += vetor[i];
    }

    return soma/tam;
}
