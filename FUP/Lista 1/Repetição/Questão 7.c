/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, maior=1, menor=1000, menor2, maior2;
    do
    {
        scanf("%d", &num);
        if((num > maior) && (num != 0))
        {
            maior2 = maior;
            maior = num;
        }
        if((num < menor) && (num != 0))
        {
            menor2 = menor;
            menor = num;
        }
    }
    while (num != 0);
    printf("Maior numero digitado:%d\n", maior);
    printf("Sengundo maior numero digitado:%d\n", maior2);
    printf("Menor numero digitado:%d\n", menor);
    printf("Segundo menor numero digitado:%d", menor2);

    return 0;
}
