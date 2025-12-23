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
    int cara, coroa, sorteio, cont;
    srand(time(NULL));
    for(cont=0;cont<100;cont++)
    {
        sorteio=rand()%2;
        if(sorteio==0)
        {
           cara++;
        }
        else
        {
           coroa++;
        }
    }
    printf("cara: %d\n", cara);
    printf("coroa: %d\n", coroa);
    if(cara>coroa)
    {
        printf("Cara venceu");
    }
    else
    {
        printf("Coroa venceu");
    }
    
    
    return 0;
}
