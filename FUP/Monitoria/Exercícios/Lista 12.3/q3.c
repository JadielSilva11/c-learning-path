#include <stdio.h>

int soma(int vetor[], int t);

int main()
{
    int t;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &t);

    int vetor[t];
    for(int i=0;i<t;i++)
    {
        printf("Digite o valor do vetor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("A soma dos valores de todos os vetores e: %d", soma(vetor, t));
    
    return 0;
}

int soma(int vetor[], int t)
{
    int soma=0;
    for(int i=0;i<t;i++)
    {
        soma += vetor[i];
    }
    
    return soma;
}