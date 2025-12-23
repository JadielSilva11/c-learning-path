#include <stdio.h>

int main()
{
    int p, np, a;
    printf("Digite o preco do produto: ");
    scanf("%d", &p);
    if (p <= 50)
    {
        a = p * 0.05;
        np = p + a;
        printf("O novo preco do produto e: %d ", np);
    }
    else if (p > 50 && p <= 100)
    {
        a = p * 0.1;
        np = p + a;
        printf("O novo preco do produto e: %d ", np);
    }
    else
    {
        a = p * 0.15;
        np = p + a;
        printf("O novo preco do produto e: %d ", np);
    }
    if (np <= 80)
    {
        printf("(produto barato)");
    }
    else if (np > 80 && np <= 120)
    {
        printf("(produto normal)");
    }
    else if (np > 120 && np <= 200)
    {
        printf("(produto caro)");
    }
    else 
    {
        printf("(produto muito caro)");
    }

    
    return 0;
}
