#include <stdio.h>

void primo(int x);

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    primo(num);
    
    return 0;
}

void primo(int x)
{
    int d=0, cont;
    for (cont=1;cont<=x;cont++)
    {
        if (x % cont == 0)
        {
            d++;
        }
    }
    if (d == 2)
    {
        printf(" 1 ");
    }
    else
    {
        printf(" 0 ");
    }
}
