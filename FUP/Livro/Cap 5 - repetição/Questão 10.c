#include <stdio.h>

int main()
{
    int num, div=0, cont, cont2; 
    int par=0, primo=0;

    for(cont=1;cont<=5;cont++)
    {
        printf("Digite um numero par ou primo: ");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            par = par + num;
        }
        div = 0;
        for(cont2=1;cont2<=num;cont2++)
        {
            if (num % cont2 == 0)
            {
                div++;
            }
        }
        if (div == 2)
        {
            primo = primo + num;
        }
    } 
    printf("A soma de todos os numeros pares: %d\n", par);
    printf("A soma de todos os numeros primos: %d", primo);

    return 0;
}
