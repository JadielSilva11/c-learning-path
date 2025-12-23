#include <stdio.h>

int main()
{
    char nomes[3];
    float media[3];
    int i, maior=0;
    for(i=0;i<3;i++)
    {
        printf("Digite a inicial do seu nome: ");
        scanf(" %c", &nomes[i]);
        printf("Digite sua media final: ");
        scanf("%f", &media[i]);
    }
    printf("nomes   |  media\n");
    for(i=0;i<3;i++)
    {
        printf("%c\t   ", nomes[i]);
        printf("%.2f", media[i]);
        if(media[i] < 7)
        {
            printf(" Tera que fazer exame de recuperacao!");
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        if(media[i] > maior)
        {
            printf("Aluno com maior nota: %c\n", nomes[i]);
            maior = media[i];
        }
    }

    return 0;
}