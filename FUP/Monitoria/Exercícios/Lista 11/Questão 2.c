#include <stdio.h>

void bissexto(int ano);

int main()
{
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);
    bissexto(ano);

    return 0;
}

void bissexto(int ano)
{
    if(ano % 4 == 0 && ano % 100 != 0)
    {
        printf("O ano digitado e um ano bissexto!");
    }
    else if(ano % 400 == 0)
    {
        printf("O ano digitado e um ano bissexto!");
    }
    else 
    {
        printf("O ano digitado nao e um ano bissexto!");
    }
}