#include <stdio.h>

void area(int a, int c);
void perimetro(int a, int c);

int main()
{
    int l, c;
    printf("Digite a largura do terreno retangular: ");
    scanf("%d", &l);
    printf("Digite a comprimento do terreno retangular: ");
    scanf("%d", &c);
    area(l, c);
    perimetro(l, c);
    
    return 0;
}

void area(int l, int c)
{
    int area; 
    area = l * c;
    printf("A area do terreno e: %d\n", area);
}

void perimetro(int l, int c)
{
    int perimetro;
    perimetro = (l * 2) + (c * 2);
    printf("O perimetro do terreno e: %d", perimetro);
}