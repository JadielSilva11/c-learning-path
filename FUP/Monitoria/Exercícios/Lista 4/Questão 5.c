#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int num, user, tentativas;
    srand(time(NULL));
    num=rand()%100+1;
    printf("O PC sorteou um numero, tente adivinhar\n");
    do
    {
        scanf("%d", &user);
        if(user<num)
        {
            printf("Errou. O numero sorteado é maior\n");
            tentativas++;
        }
        else if(user>num)
        {
            printf("Errou. O numero sorteado é menor\n");
            tentativas++;
        }
    }while(user!=num);
    tentativas++;
    printf("Acertou. Depois de %d tentativas", tentativas);
    
    return 0;
}
