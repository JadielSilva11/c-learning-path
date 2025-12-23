#include <stdio.h>

int main()
{
    float media, n1, n2;
    printf("Digite sua primeira nota:\n");
    scanf("%f", &n1);
    printf("Digite sua segunda nota:\n");
    scanf("%f", &n2);
    media = (n1 + n2)/2;
    if(media<3)
    {
        printf("Sua media: %.1f\n", media);
        printf("Reprovado!");
    }
    else if(media>=3 && media<7)
    {
        printf("Sua media: %.1f\n", media);
        printf("Exame de recuperação!");
    }
    else if(media>=7 && media<=10)
    {
        printf("Sua media: %.1f\n", media);
        printf("Aprovado!");
    }

    
    return 0;
}
