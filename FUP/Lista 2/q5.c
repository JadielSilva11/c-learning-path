#include <stdio.h>

int mmc(int x, int y);

int main()
{
    int x, y;
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    printf("O mmc de %d e %d e: %d", x, y, mmc(x, y));
    
    return 0;
}

int mmc(int x, int y)
{
    int mmc, maior, menor;
    if(x > y)
    {
        maior = x;
        menor = y;
        mmc = maior;
    }
    else
    {
        maior = y;
        menor = x;
        mmc = maior;
    }
    while(mmc % menor != 0)
    {
        mmc += maior;
    }

    return mmc;
}