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
    int jogadores, cont, dados, venc, maior;
    srand(time(NULL));
    printf("Quantos jogadores vaâo participar:\n");
    scanf("%d", &jogadores);
    for(cont=1;cont<=jogadores;cont++)
    {
        dados=rand()%11+2;
        printf("jogador %d tirou %d nos dados\n", cont, dados);
        if(cont==1)
        {
            maior = dados;
            venc = 1;
        }
        else if(dados>maior)
        {
            maior = dados;
            venc = cont;
        }
        else if(dados==maior)  //se der empate
        {
            if(rand()%2==0)
            {
                venc = cont;
            }
            printf("EMPATE. jogador %d venceu no cara ou coroa\n", venc);
        }
    }
    printf("jogador %d venceu com %d\n", venc, maior);
    printf("jogador %d começa a partida", venc);

    return 0;
}
