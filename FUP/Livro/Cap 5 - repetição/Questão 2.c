#include <stdio.h>

int main()
{
    int lucro, despesas=200, vendas=120;
    float ing=4.5;

    while (ing > 1)
    {
        vendas = vendas + 26;
        lucro = (vendas * ing) - despesas;
        printf("valor do ingresso: %.2f | total de vendas: %d | valor das despesas: %d | lucro: %d |\n", ing, vendas, despesas, lucro);
        ing = ing - 0.5;
    }
    
    return 0;
}
