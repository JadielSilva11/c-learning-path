#include <stdio.h>

int main()
{
    float x, y;
    scanf("%f %f", &x, &y);
    if((x>=1) && (y>=1))
    {
        printf("1° quadrante");
    }
    else if((x<0) && (y>=1))
    {
        printf("2° quadrante");
    }
    else if((x<0) && (y<0))
    {
        printf("3° quadrante");
    }
    else if((x>=1) && (y<0))
    {
        printf("4° quadrante");
    }
    else if((x==0) && (y==0))
    {
        printf("Origem");
    }
    else if((x==0) && (y!=0))
    {
        printf("Eixo Y");
    }
    else if((x!=0) && (y==0))
    {
        printf("Eixo X");
    }

    return 0;
}
