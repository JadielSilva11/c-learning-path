#include <stdio.h>

int maior(int vetor[], int tam);
int menor(int vetor[], int tam);

int main()
{
    int vetor[5], i;
    for(i=0;i<5;i++)
    {
        printf("Digite qualquer numero: ");
        scanf("%d", &vetor[i]);
    }
    printf("Maior numero digitado: %d\n", maior(vetor, 5));
    printf("Menor numero digitado: %d", menor(vetor, 5));
    
    return 0;
}

int maior(int vetor[], int tam)
{
    int i, maior=0;
    for(i=0;i<tam;i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }

    return maior;
}

int menor(int vetor[], int tam)
{
    int i, menor=100;
    for(i=0;i<tam;i++)
    {
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }

    return menor;
}