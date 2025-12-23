#include <stdio.h>

int main()
{
    float produto;
    printf("Digite o preco do produto:\n");
    scanf("%f", &produto);
    // O produto sofreu um desconto de 10%
    produto = produto - (produto*0.1);
    printf("O novo preco do produto com desconto e: %.2f", produto);
    
    return 0;
}
