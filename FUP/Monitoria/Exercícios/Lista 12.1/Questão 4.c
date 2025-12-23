#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int v[20], i, tam=1, tamf=1;
    for(i=0;i<20;i++)
    {
        v[i] = rand()%100 + 1;
        printf(" %d ", v[i]);
    }
    printf("\n");
    for(i=0;i<19;i++)
    {
        if(v[i+1] > v[i])
        {
            tam++;
        }
        else
        {
            if(tam > tamf)
            {
                tamf = tam;
            }
            tam = 1;
        }
    }
    if(tam > tamf)
    {
        tamf = tam;
    }

    printf("Tamanho da maior subsequencia crescente continua presente no vetor: %d", tamf);
    
    return 0;
}
