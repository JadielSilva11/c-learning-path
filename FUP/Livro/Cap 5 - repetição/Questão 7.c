#include <stdio.h>

int main()
{
    int id, al, pe;
    int alt=0, num=0, qtdd=0, cont;
    float por=0, media;

    for(cont=1;cont<=5;cont++)
    {
        printf("Digite sua idade: ");
        scanf("%d", &id);
        printf("Digite sua altura:");
        scanf("%d", &al);
        printf("Digite seu peso: ");
        scanf("%d", &pe);
        if (id > 50)
        {
            qtdd++;
        }
        if (pe < 40)
        {
            por++;
        }
        if (id >= 10 && id <= 20)
        {
            num++;
            alt = alt + al;
        }
    }
    media = alt / num;
    por = (por / 5) * 100;
    printf("Quantidade de pessoas com mais de 50 anos: %d\n", qtdd);
    printf("A media das alturas das pessoa de 10 a 20 anos: %.1f\n", media);
    printf("A porcentagem de pessoas com menos de 40kg: %.2f por cento", por);
    
    return 0;
}
