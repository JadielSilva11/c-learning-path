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
    int cartela, linhas, colunas;
    srand(time(NULL));
    for(linhas=1;linhas<=5;linhas++)
    {
        cartela=rand()%50;
        printf("%d ", cartela);
    }
    return 0;
}
