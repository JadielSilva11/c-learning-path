/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, maior=1, menor=1000;
    do
    {
        scanf("%d", &num);
        if((num > maior) && (num != 0))
        {
            maior = num;
        }
        if((num < menor) && (num != 0))
        {
            menor = num;
        }
    }
    while (num != 0);
    printf("Maior numero digitado:%d\n", maior);
    printf("Menor numero digitado:%d\n", menor);

    return 0;
}
