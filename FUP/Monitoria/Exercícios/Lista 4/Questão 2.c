#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int sorteio, cara, coroa;
    srand(time(NULL));
    sorteio=rand()%10+1;
    if(sorteio<=6)
    {
        printf("Cara");
    }
    else
    {
        printf("Coroa");
    }printf("%d", sorteio);
    
    return 0;
}
