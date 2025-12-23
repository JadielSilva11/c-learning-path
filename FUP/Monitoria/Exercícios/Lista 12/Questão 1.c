#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, vetor[5];
    srand(time(NULL));
    for(i=0;i<5;i++)
    {
        vetor[i] = rand()%10 + 1;
    }
    
    for(i=0;i<5;i++)
    {
        printf("Vetor %d: %d\n", i, vetor[i]);
    }
    
    return 0;
}
