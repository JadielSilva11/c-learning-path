#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = malloc(sizeof(int));
    int x = p; //atribuindo o endereço do ponteiro a uma variavel para fazer operações com esse valor
    if (p)
    {
        printf("Memoria alocada com sucesso!!!!\n");
    }
    printf("%d\n", p); //imprimindo o endereço do ponteiro
    do
    {
        scanf("%d", &*p); 
    }
    while(*p % x!=0); //recebe um valor do usuario até ele ser divisivel pelo endereço dele mesmo
    printf("O valor digitado e divisivel pelo endereco que guarda ele: %d", p);
    free(p);
    
    return 0;
}
