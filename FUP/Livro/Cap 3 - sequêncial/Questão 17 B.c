#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float r, area, pi=3;
    printf("Digite o valor do raio:\n");
    scanf("%f", &r);
    area = 2*(pi * pow(r,2));
    printf("O area da circunferencia e: %.2f cm quadrados", area);
    
    return 0;
}
