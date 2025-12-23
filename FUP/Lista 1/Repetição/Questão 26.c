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
    char l1, l2, sorteio;
    int sub;
    srand(time(NULL));
    printf("O SORTEIO SERA FEITO ENTRE A PRIMEIRA E A ULTIMA LETRA DIGITADA\n");
    printf("Digite abaixo a primeira letra do sorteio:\n");
    scanf("%c\n", &l1);
    printf("Digite abaixo a ultima letra do sorteio:\n");
    scanf(" %c", &l2);
    sub = l2-l1+1;
    sorteio = rand()%sub+l1;
    printf("A letra sorteada foi: ");
    printf("%c", sorteio);
    
    return 0;
}
