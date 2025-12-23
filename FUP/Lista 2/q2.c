#include <stdio.h>

void inteiros(int x);

int main()
{
    int n;
    scanf("%d", &n);
    inteiros(n);
    
    return 0;
}

void inteiros(int n)
{
    printf("Divisores de %d: ", n);
    for(int i=1;i<=n;i++)
    {
        if(n % i == 0)
        {
            printf("%d ", i);
            if(i < n - 1)
            {
                printf(",");
            }
        }
    }
}