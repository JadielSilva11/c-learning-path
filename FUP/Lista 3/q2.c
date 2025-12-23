#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sortear(int *p);

int main()
{
    srand(time(NULL));

    int v1;
    printf("Digite um numero: ");
    scanf("%d", &v1);

    sortear(&v1);

    printf("Numero sorteado: %d", v1);
    
    return 0;
}

void sortear(int *p)
{
    if(*p % 2 != 0)
    {
        *p = (rand()%20 + 1) *2 + 1;
    }
    else
    {
        *p = (rand()%20 + 1) *2;
    }
}