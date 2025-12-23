/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, invertido;
    printf("Digite um numero abaixo:\n");
    scanf("%d", &num);
    while (num > 0)
    {
        invertido = num%10;
        printf("%d", invertido);
        num = num/10;
    }

    return 0;
}
