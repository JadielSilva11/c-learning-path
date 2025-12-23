#include <stdio.h>

void maiormenor(int x, int y, int z);
int maior(int x, int y, int z);
int menor(int x, int y, int z);

int main()
{
    int x, y, z;
    printf("Digite 3 numeros: ");
    scanf("%d %d %d", &x, &y, &z);
    maiormenor(x, y, z);

    return 0;
}

void maiormenor(int x, int y, int z)
{
    printf("O maior numero e: %d\n", maior(x, y, z));
    printf("O menor numero e: %d", menor(x, y, z));
}

int maior(int x, int y, int z)
{
    if (x > y && x > z)
    {
        return x;
    }
    else if(y > x && y > z)
    {
        return y;
    }
    else if (z > x && z > y)
    {
        return z;
    }
}

int menor(int x, int y, int z)
{
    if (x < y && x < z)
    {
        return x;
    }
    else if(y < x && y < z)
    {
        return y;
    }
    else if (z < x && z < y)
    {
        return z;
    }
}