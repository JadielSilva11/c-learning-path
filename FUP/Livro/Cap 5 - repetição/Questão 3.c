#include <stdio.h>

int main()
{
    float por, f1=0, f2=0, f3=0, f4=0, f5=0;
    int cont, idade;
    for(cont=1;cont<=8;cont++)
    {
        scanf("%d", &idade);
        if(idade <= 15)
        {
            f1++;
        }
        else if(idade >= 16 && idade <= 30)
        {
            f2++;
        }
        else if(idade >= 31 && idade <= 45)
        {
            f3++;
        }
        else if(idade >= 46 && idade <= 60)
        {
            f4++;
        }
        else
        {
            f5++;
        }
    }
    por = (f1/8) * 100;
    printf("A porcentagem de pessoas com 15 anos ou menos e: %.0f por cento\n", por);
    por = (f5/8) * 100;
    printf("A porcentagem de pessoas com mais de 60 anos e: %.0f por cento", por);
    
    return 0;
}
