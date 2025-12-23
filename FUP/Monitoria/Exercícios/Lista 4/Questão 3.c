#include <stdio.h>

int main()
{
    int num, positivo, negativo, par, impar;
    do
    {
        scanf("%d", &num);
        if(num>0)
        {
            positivo++;
            if(num%2==0)
            {
                par++;
            }
            else
            {
                impar++;
            }
        }
        else if(num<0)
        {
            negativo++;
            if(num%2==0)
            {
                par++;
            }
            else
            {
                impar++;
            }
        }
    }while(num!=0);
    printf("positivos: %d\n", positivo);
    printf("negativos: %d\n", negativo);
    printf("pares: %d\n", par);
    printf("impares: %d\n", impar);
    
    return 0;
}
