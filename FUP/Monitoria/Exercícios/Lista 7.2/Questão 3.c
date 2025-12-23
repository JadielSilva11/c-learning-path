#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int *pc = malloc(sizeof(int));
    int *user = malloc(sizeof(int));
    int tentativas = 5;
    if ((pc) && (user))
    {
        printf("Memoria alocada com sucesso!!!!\n");
    }
    srand(time(NULL));
    *pc = rand()%100 + 1;
    do 
    {
        printf("Voce consegue advinhar o numero sorteado pelo computador ??\n");
        scanf("%d", &*user);
        if(*user > *pc)
        {
            printf("Errou! O numero sorteado e menor.\n");
            tentativas--;
            printf("%d tentativas restantes\n", tentativas);
        }
        else if(*user < *pc)
        {
            printf("Errou! O numero sorteado e maior.\n");
            tentativas--;
            printf("%d tentativas restantes\n", tentativas);
        }
    }while(tentativas > 0 && *user != *pc);
    if(tentativas == 0)
    {
        printf("Tentativas esgotadas :(\n");
        printf("O numero sorteado foi %d", *pc);
    }
    else if(*user == *pc)
    {
        printf("Parabens! Voce acertou.");
    }
    free(user);
    free(pc);

    return 0;
}