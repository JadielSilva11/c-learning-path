#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int user, pc, op;
    srand(time(NULL));
    do
    {
        printf("\t\tMENU\n");
        printf("1-pedra\n2-papel\n3-tesoura\n");
        scanf("%d", &user);
        pc=rand()%3+1;
        if((user==1) && (pc==2))
        {
            printf("PC venceu\n");
        }
        else if((user==2) && (pc==3))
        {
            printf("PC venceu\n");
        }
        else if((user==3) && (pc==1))
        {
            printf("PC venceu\n");
        }
        else
        {
            printf("VOCE venceu\n");
        }
        printf("Digite 1 para continuar:\n");
        scanf("%d", &op);
    }while(op==1);
    
    return 0;
}
