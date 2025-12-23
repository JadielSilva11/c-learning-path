#include <stdio.h>

void primo(int num);

int main()
{
    int num;
    
    do
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        primo(num);
    }
    while(num != 0);
    
    return 0;
}

void primo(int num)
{
    int i, divisor=1, divisores=0;
    for(i=0;i<=num;i++)
    {
        if(num % divisor == 0)
        {
            divisores++;
            divisor++;
        }
        else
        {
            divisor++;
        }
    }
    if(divisores == 2)
    {
        printf("O numero digitado e primo!\n");
    }
    else
    {
        printf("O numero digitado nao e primo!\n");    
    }
}