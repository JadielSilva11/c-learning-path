#include <stdio.h>

int main()
{
    int x, y;
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Digite outro numero: ");
    scanf("%d", &y);
    if(x>y)
    {
        printf("o primeiro numero e maior: %d", x);
    }
    else 
    {
        printf("o segundo numero e maior: %d", y);
    }
    return 0;
}
