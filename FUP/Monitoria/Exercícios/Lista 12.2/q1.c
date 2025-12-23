#include <stdio.h>

int main()
{
    int tam;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    int v[tam], i;

    for(i=0;i<tam;i++)
    {
        printf("Digite o valor do vetor %d: ", i+1);
        scanf("%d", &v[i]);
    }

    printf("Numeros da metade ate 0:\n");
    for(i=tam/2;i>=0;i--)
    {
        printf("%d ", v[i]);
    }

    printf("\nNumeros do ultimo ate a metade:\n");
    for(i=tam-1;i>=tam/2;i--)
    {
        printf("%d ", v[i]);
    }

    return 0;
}
