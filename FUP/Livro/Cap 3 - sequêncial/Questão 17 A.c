#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r, com, pi=3;
    printf("Digite o valor do raio:\n");
    scanf("%f", &r);
    com = 2*(pi * r);
    printf("O comprimento da circunferencia e: %.2f cm", com);
    
    return 0;
}
