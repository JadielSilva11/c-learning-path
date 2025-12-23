/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float preco_produto, novo_preco, porcentagem;
    int opcao;
    printf("Digite abaixo o preco do produto escolhido:\n");
    scanf("%f", &preco_produto);
    printf("\tESCOLHA UMA OPCAO\n");
    printf("1)Aumentar o preco do produto.\n");
    printf("2)Diminuir preco do produto.\n");
    scanf("%d", &opcao);
    if (opcao==1)
    {
        printf("Digite abaixo qual a porcentagem de aumento:\n");
        scanf("%f", &porcentagem);
        novo_preco = preco_produto + (preco_produto*porcentagem/100);
        printf("O novo preco do produto e:%.1f reais.", novo_preco);
    }
    if (opcao==2)
    {
        printf("Digite abaixo qual a porcentagem que deseja diminuir:\n");
        scanf("%f", &porcentagem);
        novo_preco = preco_produto - (preco_produto*porcentagem/100);
        printf("O novo preco do produto e:%.1f reais.", novo_preco);
    }
    
    

    return 0;
}
