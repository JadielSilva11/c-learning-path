#include <stdio.h>

int main()
{
    int v[5], soma=0;
    for(int i=0;i<5;i++)
    {
        printf("Digite o %d: numero ", i+1);
        scanf("%d", &v[i]);
        soma += v[i];
    }
    printf("Os numeros digitados foram:");
    for(int i=0;i<5;i++)
    {
        printf(" %d +", v[i]);
    }
    printf(" = %d", soma);
    
    return 0;
}
