#include <stdio.h>

void palindromo(int num);

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    palindromo(num);
    
    return 0;
}

void palindromo(int num)
{
    int num2=num, palindromo=0;
    do
    {
        palindromo *= 10;
        palindromo += num % 10;
        num /= 10;

    } while (num > 0);
    if (palindromo == num2)
    {
        printf("O numero digitado e um palindromo!\n");
    }
    else
    {
        printf("O numero digitado nao e um palindromo!\n");
    }
}