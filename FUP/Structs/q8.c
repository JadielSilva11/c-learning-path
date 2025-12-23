#include <stdio.h>
#include <stdlib.h>

typedef struct carro
{
    char marca[20];
    char modelo[20];
    int ano;
}Carro;

int main()
{
    Carro carro[4];

    for(int i=0;i<4;i++)
    {
        printf("Digite a marca do carro %d: ", i+1);
        scanf("%s", carro[i].marca);
        printf("Digite o modelo do carro %d: ", i+1);
        scanf("%s", carro[i].modelo);
        printf("Digite o ano de lancamento do carro %d: ", i+1);
        scanf("%d", &carro[i].ano);
    }

    if(carro[0].ano > carro[1].ano && carro[0].ano > carro[2].ano && carro[0].ano > carro[3].ano)
    {
        printf("O carro masis novo e o %s - %s!\n", carro[0].marca, carro[0].modelo);
    }
    else if(carro[1].ano > carro[0].ano && carro[1].ano > carro[2].ano && carro[1].ano > carro[3].ano)
    {
        printf("O carro masis novo e o %s - %s!\n", carro[1].marca, carro[1].modelo);
    }
    else if(carro[2].ano > carro[0].ano && carro[2].ano > carro[1].ano && carro[2].ano > carro[3].ano)
    {
        printf("O carro masis novo e o %s - %s!\n", carro[2].marca, carro[2].modelo);
    }
    else
    {
        printf("O carro masis novo e o %s - %s!\n", carro[3].marca, carro[3].modelo);
    }
}