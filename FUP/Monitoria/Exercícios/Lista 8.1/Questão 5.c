#include <stdio.h>

void triangulo(int x, int y, int z);

int main()
{
    int  x, y, z;
    printf("Vamos saber se com os lados que vc tem podemos formar um triangulo\n");
    printf("Digite o valor do primeiro lado: ");
    scanf("%d", &x);
    printf("Digite o valor do segundo lado: ");
    scanf("%d", &y);
    printf("Digite o valor do terceiro lado: ");
    scanf("%d", &z);
    triangulo(x, y, z);

    return 0;
}

void triangulo(int x, int y, int z)
{
    if (x < y+z && y < x+z && z < x+y)
    {
        printf("Com esses lados nos temos um triangulo\n");
        if (x == z && x == y)
        {
            printf("Um triangulo equilatero.");
        }
        else if (x == z || x == y || y == z)
        {
            printf("Um triangulo isoceles.");
        }
        else 
        {
            printf("Um triangulo escaleno");
        }
    }
}
