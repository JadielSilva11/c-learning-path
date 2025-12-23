#include <stdio.h>

int inteiros(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printf("O numero %d possui %d divisores.", n, inteiros(n));
    
    return 0;
}

int inteiros(int n)
{
    int div=0;
    printf("Divisores de %d: ", n);
    for(int i=1;i<=n;i++)
    {
        if(n % i == 0)
        {
            div++;
        }
    }

    return div;
}
