#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int intrand(int x, int y);

int main()
{
    int x, y;
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Digite outro numero: ");
    scanf("%d", &y);
    printf("O computador ira sortear um numero entre os dois digitados\n");
    intrand(x, y);
    printf("Numero sorteado: %d", intrand(x, y));
    
    return 0;
}

int intrand(int x, int y)
{
    int num, menos;
    srand(time(NULL));
    if(x > y)
    {
        menos = x - y;
        num = rand()% menos + y;
    }
    else 
    {
        menos = y - x;
        num = rand()% menos + x;
    }

    return num;
}
