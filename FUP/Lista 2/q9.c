#include <stdio.h>

int potencia(int x, int y);

int main()
{
    int x, y;
    printf("Digite dois numeros positivos: ");
    scanf("%d %d", &x, &y);
    printf("O valor de %d elevado a %d e: %d", x, y, potencia(x, y));
    return 0;
}

int potencia(int x, int y)
{
    int result=1;
    while(y > 0)
    {
        result *= x;
        y--;
    }

    return result;
}