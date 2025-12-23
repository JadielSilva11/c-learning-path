#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct ponto
{
    int x;
    int y;
}Ponto;

int main()
{
    Ponto ponto[2];
    for(int i=0;i<2;i++)
    {
        printf("Digite as coordenadas x e y do ponto %d: ", i+1);
        scanf("%d %d", &ponto[i].x, &ponto[i].y);
    }

    double d;
    d = sqrt(pow(ponto[1].x - ponto[0].x, 2) + pow(ponto[1].y - ponto[0].y, 2));

    printf("A distancia entre os pontos 1 e 2 eh: %.2f", d);
    
    return 0;
}