#include <stdio.h>
#include <math.h>

float distancia(int x1, int x2, int y1, int y2);

int main()
{
    int x1, y1, x2, y2;

    printf("Digite as coordenadas do primeiro ponto (x e y): ");
    scanf("%d %d", &x1, &y1);
    printf("Digite as coordenadas do segundo ponto (x e y): ");
    scanf("%d %d", &x2, &y2);
    distancia(x1, x2, y1, y2);
    printf("A distancia entre os dois pontos e: %.2f", distancia(x1, x2, y1, y2));
    
    return 0;
}

float distancia(int x1, int x2, int y1, int y2)
{
    float result;
    result = sqrt(pow((x1 - x2), 2) + pow((y1 - y2),2));
    return result;
}
