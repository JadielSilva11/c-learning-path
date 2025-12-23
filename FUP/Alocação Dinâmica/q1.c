#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int *p = malloc(5 * sizeof(int));

    if(p == NULL)
    {
        printf("Falha ao alocar memoria!\n");
    }

    for(int i=0;i<5;i++)
    {
        p[i] = rand()% 6+1;

        printf("%d\n", p[i]);
    }

    free(p);
    p = NULL;

    if(p == NULL)
    {
        printf("Memoria liberada e ponteiro livre!\n");
    }
    
    return 0;
}