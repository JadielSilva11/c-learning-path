#include <stdio.h>

int invertido(int num);

int main()
{
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("%d", invertido(x));
    
    return 0;
}

int invertido(int num)
{
    int resto=0, invertido=num;
    while(num > 0)
    {
        resto = resto * 10 + num % 10;
        num /= 10;
    }
    if(resto == invertido)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}