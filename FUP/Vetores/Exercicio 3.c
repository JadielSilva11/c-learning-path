#include <stdio.h>

int main()
{
    int num[5];
    int i=0, maior=1, menor=100;
    while(i < 5)
    {
        scanf("%d", &num[i]);
        if (num[i] > maior)
        {
            maior = num[i];
        }
        if (num[i] < menor)
        {
            menor = num[i];
        }
        i++;
    }
    printf("Maior numero digitado: %d\n", maior);
    printf("Menor numero digitado: %d", menor);
    
    return 0;
}