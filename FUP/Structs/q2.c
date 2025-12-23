#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto_p
{
    int x;
    int y;
};
typedef struct ponto_p P;

struct ponto_q
{
    int x;
    int y;
};
typedef struct ponto_q Q;

int distancia(P *p, Q *q);

int main()
{
    P pontop;
    Q pontoq;
    printf("Vamos calcular a distancia entre dois pontos P e Q\n");
    printf("Digite as coordenadas x e y do ponto P: ");
    scanf("%d %d", &pontop.x, &pontop.y);
    printf("Agora digite as coordenadas x e y do ponto Q: ");
    scanf("%d %d", &pontoq.x, &pontoq.y);

    printf("A distancia entre os pontos P e Q eh: %d", distancia(&pontop, &pontoq));

    return 0;
}

int distancia(P *p, Q *q)
{
    int d;
    d = sqrt(pow(q->x - p->x, 2) + pow(q->y - p->y, 2));

    return d;
}