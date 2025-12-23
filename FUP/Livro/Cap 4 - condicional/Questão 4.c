#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Digite outro numero: ");
    scanf("%d", &y);
    printf("Digite mais um numero: ");
    scanf("%d", &z);
    if(x>y && x>z)
    {
        printf("o primeiro numero e maior: %d", x);
    }
    else if(y>x && y>z)
    {
        printf("o segundo numero e maior: %d", y);
    }
    else 
    {
        printf("o terceiro numero e maior: %d", z);
    }

    return 0;
}
