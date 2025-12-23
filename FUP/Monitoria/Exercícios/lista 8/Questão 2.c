#include <stdio.h>

int main()
{
    float soma(int x, float y);

    int n1; float n2;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &n1);
    printf("Digite um numero com virgula:\n");
    scanf("%f", &n2);
    soma(n1, n2);
    printf("A funcao soma retornou a soma de %d e %.1f: %.1f", n1, n2, soma(n1,n2));
    
    return 0;
}

float soma(int x, float y)
{
    return (x + y);
}