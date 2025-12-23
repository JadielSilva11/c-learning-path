#include <stdio.h>

int invertido(int num);

int main()
{
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("O numero %d invertido e %d", x, invertido(x));
    
    return 0;
}

int invertido(int num)
{
    int resto=0;
    while(num > 0)
    {
        resto = resto * 10 + num % 10;
        num /= 10;
    }

    return resto;
}