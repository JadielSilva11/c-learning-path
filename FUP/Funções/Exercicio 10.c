#include <stdio.h>

int soma(int x, int y);

int main()
{
    int x, y;
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);
    printf("A soma dos numeros primos entre %d e %d e: %d", x, y, soma(x, y));
    return 0;
}

int soma(int x, int y)
{
    int div=0, soma, cont, num;
    if (x > y)
    {
        while (y < x)
        {
            num=y;
            div=0;
            for(cont=1;cont<=num;cont++)
            {
                if(num % cont == 0)
                {
                    div++;
                }
            }
            if(div == 2)
            {
                soma = soma + num;
            } 
            y++;
        }
    }
    else
    {
        while (x < y)
        {
            num=x;
            div=0;
            for(cont=1;cont<=num;cont++)
            {
                if(num % cont == 0)
                {
                    div++;
                }
            }
            if(div == 2)
            {
                soma = soma + num;
            } 
            x++;
        }
    }

    return soma;
}
