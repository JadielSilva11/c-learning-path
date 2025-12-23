#include <stdio.h>
#include <stdlib.h>

void zerar_e_liberar(int **p);

int main()
{
    int *num = malloc(sizeof(int));

    if(num==NULL)
    {
        printf("Falha ao alocar memoria dinamicamente!\n");
    }
    else
    {
        printf("Sucesso ao alocar memoria dinamicamente!\n");
    }

    *num = 5;

    printf("Valor de num antes de liberar: %d\n", *num);

    zerar_e_liberar(&num);

    if(num == NULL)
    {
        printf("Sucesso ao liberar memoria. Num agora e NULL!\n");
    }
    else
    {
        printf("Erro ao liberar memoria. Num nao e NULL\n");
    }
    
    return 0;
}

void zerar_e_liberar(int **p)
{
    if(p != NULL && *p != NULL)
    {
        **p = 0;
        free(*p);
        *p = NULL;
    }
}