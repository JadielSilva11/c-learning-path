#include <stdio.h>

int main()
{
    float vetor[10];
    float media;
    int i;
    for(i=0;i<10;i++)
    {
        printf("Digite o valor da nota %d: ", i);
        scanf("%f", &vetor[i]);
        media += vetor[i];
    }
    media /= 10;
    printf("A media das notas digitadas: %.1f", media);    

    return 0;
}
