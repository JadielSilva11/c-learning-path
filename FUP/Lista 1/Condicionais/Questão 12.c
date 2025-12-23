/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float preco_a, qtd_vendas, preco_n;
    printf("Informe abaixo o preco do produto e a quantidade de vendas dele:\n");
    scanf("%f%f", &preco_a, &qtd_vendas);
    printf("\t--Tabela de vendas--\n");
    printf("VENDAS MENSAL ------------ ACRESCIMO/DECRESCIMO\n");
    printf("Menor que 500              -10 por cento\n");
    printf("De 500 a 1200              +5 por cento\n");
    printf("Acima de 1200              +20 por cento\n");
    if(qtd_vendas < 500)
    {
        preco_n = preco_a - (preco_a*10/100);
        printf("O novo preco do produto e:%.2f reais", preco_n);
    }
    if((qtd_vendas >= 500) && (qtd_vendas <= 1200))
    {
        preco_n = preco_a + (preco_a*5/100);
        printf("O novo preco do produto e:%.2f reais", preco_n);
    }
    if(qtd_vendas > 1200)
    {
        preco_n = preco_a + (preco_a*20/100);
        printf("O novo preco do produto e:%.2f reais", preco_n);
    }

    return 0;
}
