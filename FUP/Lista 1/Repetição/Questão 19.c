/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int op, sorteio, vj=0, vc=0;
    srand(time(NULL));
    while((vj<5) && (vc<5))
    {
        printf("\t\tMENU\n");
        printf("1 - pedra\n");
        printf("2 - papel\n");
        printf("3 - tesoura\n");
        printf("Escolha uma opcao:");
        scanf("%d", &op);
        sorteio=rand()%3+1;
        if(op==sorteio)
        {
            printf("Empate\n");
        }
        if((op==1) && (sorteio==2))
        {
            printf("computador venceu\n");
            vc++;
        }
        if((op==1) && (sorteio==3))
        {
            printf("Jogador venceu\n");
            vj++;
        }
        if((op==2) && (sorteio==1))
        {
            printf("Jogador venceu\n");
            vj++;
        }
        if((op==2) && (sorteio==3))
        {
            printf("Computador venceu\n");
            vc++;
        }
        if((op==3) && (sorteio==1))
        {
            printf("Computador venceu\n");
            vc++;
        }
        if((op==3) && (sorteio==2))
        {
            printf("Jogador venceu\n");
            vj++;
        }
        printf("Jogador: %d\n", vj);
        printf("Computador: %d\n", vc);
    }
    if(vj==5)
    {
        printf("\t\tPLACAR\n");
        printf("Jogador: %d\n", vj);
        printf("Computador: %d\n", vc);
        printf("VOCE VENCEU");
    }
    if(vc==5)
    {
        printf("\t\tPLACAR\n");
        printf("Jogador: %d\n", vj);
        printf("Computador: %d\n", vc);
        printf("COMPUTADOR VENCEU");
    }
    
    
    return 0;
}
