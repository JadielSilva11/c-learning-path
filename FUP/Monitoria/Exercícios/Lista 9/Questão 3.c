#include <stdio.h>

int combinacao(int x, int y);
int fatorial(int x);

int main()
{
    int n, k;
    printf("Digite dois numeros: ");
    scanf("%d %d", &n, &k);

    printf("A combinacao desses dois numeros e: %d", combinacao(n, k));
    
    return 0;
}

int combinacao(int x, int y)
{
    int c, n, k, n_k;
    n = fatorial(x);
    k = fatorial(y);
    n_k = fatorial(x - y);
    c = n / (k * n_k);

    return c;
}

int fatorial(int x)
{
    int fat=1;
    while ( x > 0)
    {
        fat = fat * x;
        x--;
    }

    return fat;
}
