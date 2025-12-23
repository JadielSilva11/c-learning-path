#include <stdio.h>

void calculos(int *c, int *l);

int main()
{
    int l, c;
    printf("Digite o comprimento do terreno retangular: ");
    scanf("%d", &c);
    printf("Agora digite a largura: ");
    scanf("%d", &l);
    calculos(&c, &l);

    return 0;
}

void calculos(int *c, int *l)
{
    int p, a;
    p = (*c * 2) + (*l * 2);
    printf("O perimetro desse terreno: %d\n", p);
    a = *c * *l;
    printf("A area desse terreno: %d", a);
}