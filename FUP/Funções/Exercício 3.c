#include <stdio.h>
#include <math.h>

int distancia(int x1, int x2, int y1, int y2);

int main()
{
    int x1, x2, y1, y2;
    printf("Digite a coordenada do primeiro ponto (x e y): ");
    scanf("%d %d", &x1, &y1);
    printf("Digite a coordenada do segundo ponto (x e y): ");
    scanf("%d %d", &x2, &y2);
    distancia(x1, x2, y1, y2);
    printf("A distancia dos dois pontos e aproximadamente: %d", distancia(x1, x2, y1, y2));
    
    return 0;
}

int distancia(int x1, int x2, int y1, int y2)
{
    int d;
    d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    return d;
}
