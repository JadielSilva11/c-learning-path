#include <stdio.h>

void divisores(int x);

int main()
{
    int op;
    do
    {
        printf("Digite um numero: ");
        scanf("%d", &op);
        divisores(op);
    }
    while(op != 0);
    return 0;
}

void divisores(int x)
{
    int cont;
    printf("Todos os divisores de %d:\n", x);
    for(cont=1;cont<=x;cont++)
    {
        if (x % cont == 0)
        {
            printf("%d\n", cont);
        }
    }
}