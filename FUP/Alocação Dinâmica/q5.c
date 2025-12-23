#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = malloc(sizeof(int));
    int i=0;

    if(p == NULL)
    {
        printf("Falha ao alocar memoria!\n");
        return 1;
    }

    while(1)
    {
        int *aux = realloc(p, (i+1) * sizeof(int));

        if(aux == NULL)
        {
            printf("Memoria esgotada, nao e possivel alocar mais numeros!\n");
            free(p);
            p = NULL;
            return 1;
        }
        p = aux;

        scanf("%d", &p[i]);
        if(p[i] == -1)
        {
            break;
        }
        i++;
    }

    printf("Numeros digitados antes do '-1'.\n");

    for(int cont=0;cont<i;cont++)
    {
        printf("%d\n", p[cont]);
    }

    free(p);
    p = NULL;
    
    return 0;
}