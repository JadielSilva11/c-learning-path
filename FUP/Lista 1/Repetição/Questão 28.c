/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num, linha, coluna;
    printf("Quantos asteriscos seu quadrado tera:\n");
    scanf("%d", &num);
    for(linha=1;linha<=num;linha++) 
    {
        for(coluna=1;coluna<=num;coluna++)
        {
            if((coluna==1) || (coluna==num) || (linha==1) || (linha==num))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
