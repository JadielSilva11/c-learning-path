#include <stdio.h>

int main()
{
    int cf, dis, im;
    printf("digite o custo de fabrica do carro: ");
    scanf("%d", &cf);
    if (cf <= 12000)
    {
        dis = cf * 0.05;
        cf = cf + dis;
        printf("O valor total do carro e: %d", cf);
    }
    else if (cf > 12000 && cf <= 25000)
    {
        dis = cf * 0.1;
        im = cf * 0.15;
        cf = cf + dis + im + 1;
        printf("O valor total do carro e: %d", cf);
    }
    else 
    {
        dis = cf * 0.15;
        im = cf * 0.2;
        cf = cf + dis + im + 1;
        printf("O valor total do carro e: %d", cf);
    }

    return 0;
}
