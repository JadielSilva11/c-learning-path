#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float floatrand(int x, int y);

int main()
{
    int x, y;

    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Digite outro numero: ");
    scanf("%d", &y);
    floatrand(x, y);
    printf("O computador sorteou um numero entre os dois digitados!\n");
    printf("Numero sorteado %.2f", floatrand(x, y));
    
    return 0;
}

float floatrand(int x, int y)
{
    float num;  int menos;
    srand(time(NULL));
    if(x > y)
    {
        menos = x - y;
        num = rand()%menos + y;
    }
    else
    {
        menos = y - x;
        num = rand()%menos + x;  
    }

    return num;
}