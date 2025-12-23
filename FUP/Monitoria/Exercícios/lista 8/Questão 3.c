#include <stdio.h>

int main()
{
    void imprimir(int x, int y);

    int n, m;
    printf("Digite dois numero (o primeiro deve ser menor do que o segundo)\n");
    scanf("%d %d", &n, &m);
    imprimir(n, m);
    
    return 0;
}

void imprimir(int x, int y)
{
    for(int i = x;i <= y;i++)
    {
        printf("%d ", i);
    }
}
