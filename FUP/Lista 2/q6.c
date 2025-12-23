#include <stdio.h>

int mdc(int x, int y);

int main()
{
    int x, y;
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    printf("O mdc de %d e %d: %d", x, y, mdc(x, y));
    
    return 0;
}

int mdc(int x, int y)
{
    int maior, menor;
    if(x > y)
    {
        maior = x;
        menor = y;
    }
    else
    {
        maior = y;
        menor = x;
    }
    while(menor != 0)
    {
        int temp = menor;
        menor = maior % menor;
        maior = temp;
    }

    return maior;
}