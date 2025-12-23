#include <stdio.h>

int main()
{
    int vetor[15];
    int i;
    for(i=0;i<15;i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("Nas posicoes ");
    for(i=0;i<15;i++)
    {
        if(vetor[i] == 30)
        {
            printf("%d ", i);
        }
    }
    printf("existem o valor 30.");
    
    return 0;
}
