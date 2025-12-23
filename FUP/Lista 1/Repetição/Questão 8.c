/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, x, fat=1;
    printf("Digite um numero abaixo para calcularmos o fatorial dele:\n");
    scanf("%d", &num);
    for (x=1;x<=num;x++)
    {
        fat = fat * x;
        if(x < 5)
        {
            printf("%d*", x);
        }
    }
    printf("%d = %d", num, fat);

    return 0;
}
