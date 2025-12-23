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
    int cartelas, linhas, colunas, num_cartela;
    srand(time(NULL));
    printf("Quantas cartelas de bingo voce deseja:\n");
    scanf("%d", &cartelas);
    for(colunas=1;colunas<=cartelas;colunas++)
    {
        for(linhas=1;linhas<=5;linhas++)
        {
            num_cartela=rand()%50;
            printf("%d ", num_cartela);
        }
        printf("\n");
    }
    
    return 0;
}
