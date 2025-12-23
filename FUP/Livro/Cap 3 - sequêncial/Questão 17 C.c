#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float r, volume, pi=3;
    printf("Digite o valor do raio:\n");
    scanf("%f", &r);
    volume = (pi * pow(r,3))* 4/3;
    printf("O volume da circunferencia e: %.2f cm cubicos", volume);
    
    return 0;
}
