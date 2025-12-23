#include <stdio.h>

int main()
{
    int vendas[10], comissao[10];
    char nomes[10];
    int i, total_v;
    for(i=0;i<10;i++)
    {
        printf("Digite a primeira letra do seu nome: ");
        scanf(" %c", &nomes[i]);
        printf("Digite o valor total de suas vendas: ");
        scanf("%d", &vendas[i]);
        printf("Digite o valor da sua comissao: ");
        scanf("%d", &comissao[i]);

        total_v += vendas[i];
    }
    printf("Nome  |vendas |comissao\n");
    for(i=0;i<10;i++)
    {
        printf("%c\t", nomes[i]);
        printf("%d\t", vendas[i]);
        printf("%d\n", comissao[i]);
    }
    printf("Total de vendas: %d\n", total_v);

    return 0;
}
