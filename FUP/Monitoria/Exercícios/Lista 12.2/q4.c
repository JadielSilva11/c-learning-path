#include <stdio.h>

int main()
{
    int tam, menor=1000;
    printf("digit o tamanho do vetor: ");
    scanf("%d", &tam);
    int n[tam], i;
    for(i=0;i<tam;i++)
    {
        printf("Digite o valor do vetor %d: ", i+1);
        scanf("%d", &n[i]);
        if(n[i] % 3 == 0)
        {
            if(n[i] < menor)
            {
                menor = n[i];
            }
        }
    }
    printf("O menor numero digitado divisivel por 3 e: %d", menor);
    
    return 0;
}
