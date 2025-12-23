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

    int repetidos = 0;
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            if(p[i] == p[j])
            {
                repetidos++;
                break;
            }
        }
    }

    printf("Total de %d numeros repetidos.\n", repetidos);

    free(p);
    p = NULL;

    if(p == NULL)
    {
        printf("Memoria liberada e ponteiro livre!\n");
    }
    
    return 0;
}