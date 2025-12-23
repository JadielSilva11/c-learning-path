#include <stdio.h>

int main()
{
    int vetor[10];

    for(int i=0;i<10;i++)
    {
        printf("Digite o valor do vetor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("Valores positivos digitados:\n");
    for(int i=0;i<10;i++)
    {
        if(vetor[i] > 0)
        {
            printf("vetor %d: %d\n", i+1, vetor[i]);
        }
    }
    
    return 0;
}
