#include <stdio.h>

void primo(int n);

int main()
{
    int n;
    scanf("%d", &n);
    primo(n);
    
    return 0;
}

void primo(int n)
{
    int div=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n % i == 0)
        {
            div++;
        }
    }
    if(div == 1)
    {
        printf("O numero %d e primo.", n);
    }
    else
    {
        printf("O numero %d nao e primo.", n);
    }
}