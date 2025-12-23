#include <stdio.h>
#include <stdlib.h>

int bissexto(int ano);

int main()
{
    int ano;
    scanf("%d", &ano);

    printf("%d", bissexto(ano));
    
    return 0;
}

int bissexto(int ano)
{
    if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}