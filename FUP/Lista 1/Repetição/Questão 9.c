/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, algarismos;
    printf("Digite um numero abaixo:\n");
    scanf("%d", &num);
    while (num > 0)
    {
        num = num/10;
        algarismos++;
    }
    printf("O numero digitado tem %d algarismos.", algarismos);

    return 0;
}
