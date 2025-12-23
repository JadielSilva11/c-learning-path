#include <stdio.h>

int main()
{
    int tam, maior=0, menor=100;
    printf("Quantos numeros voce deseja guardar: ");
    scanf("%d", &tam);
    int num[tam];
    printf("Digite os numero que deseja guardar!\n");
    for(int i=0;i<tam;i++)
    {
        scanf("%d", &num[i]);
        if(num[i] > maior)
        {
            maior = num[i];
        }
        if(num[i] < menor)
        {
            menor = num[i];
        }
    }
    printf("Maior numero digitado: %d\n", maior);
    printf("Menor numero digitado: %d\n", menor);
    
    return 0;
}
