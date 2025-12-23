#include <stdio.h>

int main()
{
    int num1, num2, maior, menor, mmc;
    printf("Digite dois numeros para tirar o mmc:\n");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
    {
        maior = num1;
        menor = num2;
        mmc = maior;
    }
    else
    {
        maior = num2;
        menor = num1;
        mmc = maior;
    }
    while (mmc%menor!=0)
    {
        mmc = mmc + maior;
    }
    printf("O mmc de %d e %d = %d", num1, num2, mmc);
    
    return 0;
}
