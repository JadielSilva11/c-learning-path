#include <stdio.h>

int main()
{
    float salario, vendas, comissao;
    printf("Digite aqui seu salario:\n");
    scanf("%f", &salario);
    printf("Digite aqui qual o valor total de suas vendas:\n");
    scanf("%f", &vendas);
    // a comissão é 4% das vendas
    comissao = (vendas * 0.04);
    salario = salario + comissao;
    printf("Seu novo salario com a comissao e: %.2f reais", salario);
    
    return 0;
}
