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
    //Primeira opção
    char letra='A';
    printf("%d\n", letra);
    
    //Segunda opção
    int num=98;
    printf("%c\n", num);
    
    //Terceira opção
    int nums;
    for(nums=1;nums<=255;nums++)
    {
        printf("%c\n", nums);
    }

    return 0;
}
