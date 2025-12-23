/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int angulo;
    printf("Digite abaixo o valor do angulo em graus:\n");
    scanf("%d", &angulo);
    if ((angulo >= 1) && (angulo <=90))
    {
        printf("O angulo %d esta no 1° quadrante.", angulo);
    }
    if ((angulo > 90) && (angulo <=180))
    {
        printf("O angulo %d esta no 2° quadrante.", angulo);
    }
    if ((angulo > 180) && (angulo <= 270))
    {
        printf("O angulo %d esta no 3° quadrante.", angulo);
    }
    if ((angulo > 270) && (angulo <=360))
    {
        printf("O angulo %d esta no 4° quadrante.", angulo);
    }
    if (angulo < 0)
    {
        printf("O angulo digitado nao faz parte dos valores positivos");
    }
    return 0;
}
