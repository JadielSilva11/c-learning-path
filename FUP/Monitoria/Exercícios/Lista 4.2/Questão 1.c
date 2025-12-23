#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int user, pc, op;
    srand(time(NULL));
    do
    {
        printf("\t\tMENU\n");
        printf("1-pedra\n2-papel\n3-tesoura\n4-lagarto\n5-spock\n");
        scanf("%d", &user);
        pc=rand()%5+1;
        printf("Pc escolheu %d\n", pc);
        if(user==1)
        {
            if(pc==1)
            {
                printf("EMPATE\n");
            }
            if(pc==2)
            {
                printf("Papel embrulha pedra\n");
                printf("Pc venceu\n");
            }
            if(pc==3)
            {
                printf("Pedra quebra tesoura\n");
                printf("Voce venceu\n");
            }
            if(pc==4)
            {
                printf("Pedra esmaga lagarto\n");
                printf("Voce venceu\n");
            }
            if(pc==5)
            {
                printf("Spock vaporiza pedra\n");
                printf("Pc venceu\n");
            }
        }
        if(user==2)
        {
            if(pc==1)
            {
                printf("papel embrulha pedra\n");
                printf("Voce venceu\n");
            }
            if(pc==2)
            {
                printf("EMPATE\n");
            }
            if(pc==3)
            {
                printf("tesoura corta papel\n");
                printf("Pc venceu\n");
            }
            if(pc==4)
            {
                printf("lagarto come papel\n");
                printf("Pc venceu\n");
            }
            if(pc==5)
            {
                printf("Papel contesta Spock\n");
                printf("Voce venceu\n");
            }
        }
        if(user==3)
        {
            if(pc==1)
            {
                printf("Pedra quebra tesoura\n");
                printf("Pc venceu\n");
            }
            if(pc==2)
            {
                printf("tesoura corta papel\n");
                printf("Voce venceu\n");
            }
            if(pc==3)
            {
                printf("EMPATE\n");
            }
            if(pc==4)
            {
                printf("Tesoura decapta lagarto\n");
                printf("Voce venceu\n");
            }
            if(pc==5)
            {
                printf("Spock destroi tesoura\n");
                printf("Pc venceu\n");
            }
        }
        if(user==4)
        {
            if(pc==1)
            {
                printf("Pedra esmaga lagarto\n");
                printf("Pc venceu\n");
            }
            if(pc==2)
            {
                printf("Lagarto come papel\n");
                printf("Voce venceu\n");
            }
            if(pc==3)
            {
                printf("tesoura decapta lagarto\n");
                printf("Pc venceu\n");
            }
            if(pc==4)
            {
                printf("EMPATE\n");
            }
            if(pc==5)
            {
                printf("lagarto envenena Spock\n");
                printf("Voce venceu\n");
            }
        }
        if(user==5)
        {
            if(pc==1)
            {
                printf("Spock vaporiza pedra\n");
                printf("Voce venceu\n");
            }
            if(pc==2)
            {
                printf("papel contesta Spock\n");
                printf("Pc venceu\n");
            }
            if(pc==3)
            {
                printf("Spock destroi tesoura\n");
                printf("Voce venceu\n");
            }
            if(pc==4)
            {
                printf("lagarto envenena Spock\n");
                printf("Pc venceu\n");
            }
            if(pc==5)
            {
                printf("EMPATE\n");
            }
        }
        printf("Digite 1 para continuar\nDigite 0 para parar\n");
        scanf("%d", &op);
    }while(op==1);

    return 0;
}
