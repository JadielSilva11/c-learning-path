#include <stdio.h>

int main()
{
    int peso, opcao, p;
    printf("Digite seu peso:\n");
    scanf("%d", &peso);
    printf("1-ENGORDOU\n2-EMAGRECEU\n");
    scanf("%d", &opcao);
    if(opcao==1)
    {
        printf("Digite qual a porcentagem que voce engordou:\n");
        scanf("%d", &p);
        peso = peso + (peso*p)/100;
        printf("Seu novo peso e: %d", peso);
    }
    else if(opcao==2)
    {
        printf("Digite qual a porcentagem que voce emagreceu:\n");
        scanf("%d", &p);
        peso = peso - (peso*p)/100;
        printf("Seu novo peso e: %d", peso);
    }

    return 0;
}
