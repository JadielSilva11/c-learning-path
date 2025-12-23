#include <stdio.h>

int main()
{
    int i;
    float notas[10], media=0;
    for(i=0;i<10;i++)
    {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &notas[i]);
        media += notas[i];
    }
    for(i=0;i<10;i++)
    {
        printf("Aluno %d: %.1f\n", i, notas[i]);
    }
    media /= 10;
    printf("Media de todas as notas: %.1f", media);
    
    return 0;
}
