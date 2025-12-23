#include <stdio.h>

int main()
{
    long int num, num_dnv;
    float resto, x;
    int soma;
    scanf("%ld", &num);
    num_dnv=num;
    while(num>0)
    {
        num=num/10;
        x++;
    }
    if(x==11)
    {
        while(num_dnv>0)
        {
            resto=num_dnv%10;
            soma=soma+resto;
            num_dnv=num_dnv/10;
        }
        resto=soma%11;
        if(resto==0)
        {
            printf("Codigo valido");
        }
        else
        {
            printf("Codigo não valido");
        }
    }
    else 
    {
        printf("Codigo não possui 11 digitos");
    }

    return 0;
}
