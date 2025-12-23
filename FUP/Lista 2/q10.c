#include <stdio.h>
#include <math.h>

void primoMersenne(int num);

int main()
{
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    primoMersenne(x);
    
    return 0;
}

void primoMersenne(int n)
{
    int d=0, primo;
    for(int i=1;i<=n;i++)
    {
        if(n % i == 0)
        {
            d++;
        }
    }
    if(d == 2)
    {
        primo = pow(2, n) -1;
        printf("A partir do numero primo %d e possivel encontrar o numero primo de Mersenne %d", n, primo);
    }
    else
    {
        printf("Nao e possivel obter um numero primo de Mersenne com %d", n);
    }

}