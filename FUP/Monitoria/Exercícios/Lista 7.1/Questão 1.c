#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p=malloc(sizeof(int));
    if(*p)
    {
        printf("Memoria alocada com sucesso!\n");
        printf("%d\n", *p);
        *p=10;
        printf("%d\n", *p);
    }
    else
    {
        printf("Nao foi possivel alocar a memoria!\n");
    }
    free(p);
    printf("%d\n", *p);
    
    return 0;
}
