#include <stdio.h>

void primos(int a, int b);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    primos(a, b);
    
    return 0;
}

void primos(int a, int b)
{
    int n, div;
    if(a > b)
    {
        printf("Os numeros primos entre %d e %d sao:\n", a, b);
        for(int i=b;i<=a;i++)
        {
            n = i;
            div=0;
            for(int x=1;x<=n/2;x++)
            {
                if(n % x == 0)
                {
                    div++;
                }
            }
            if(div == 1)
            {
                printf("%d ", n);
            }
        }
    }
    else
    {
        printf("Os numeros primos entre %d e %d sao:\n", b, a);
        for(int i=a;i<=b;i++)
        {
            n = i;
            div=0;
            for(int x=1;x<=n/2;x++)
            {
                if(n % x == 0)
                {
                    div++;
                }
            }
            if(div == 1)
            {
                printf("%d ", n);
            }
        }
    }
}