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
    printf("%d\n", x); //exibir o endereço que atribuimos a variável
    while(x!=0)
    {
        printf("%d", x%10); //agora vamos imprimir esse numero ao contrário  
        x/=10;
    }
    free(p);

    return 0;
}