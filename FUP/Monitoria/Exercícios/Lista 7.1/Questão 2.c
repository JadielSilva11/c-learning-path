#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p=malloc(sizeof(int));
    int *p2=malloc(sizeof(int));
    if((*p) && (*p2))
    {
        printf("Memoria alocada com sucesso!\n");
        printf("%d\n", *p);
        printf("%d\n", *p2);
        *p=10;
        *p2=5;
        printf("%d\n", *p);
        printf("%d\n", *p2);
    }
    else
    {
        printf("Nao foi possivel alocar a memoria!\n");
    }
    free(p2);
    free(p);
    printf("%d\n", *p);
    printf("%d\n", *p2);
    
    return 0;
}