#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int vetor[20];

    for(int i=0;i<20;i++)
    {
        printf("Preencha o vetor de 20 posicoes apenas com numeros positivos!!\n");

        scanf("%d", &vetor[i]);

        if(vetor[i] < 0)
        {
            printf("Valores menores que 0 sao invalidos. Tente novamente!\n");

            i--;
        }

    }

    int maior = vetor[0];
    int posicao;

    for(int i=0;i<20;i++)
    {
        if(vetor[i] > maior)
        {
            maior = vetor[i];
            posicao = i;
        }
    }

    printf("O maior numero do vetor eh: %d e esta na posicao %d.\n", maior, posicao);
    
    return 0;
}