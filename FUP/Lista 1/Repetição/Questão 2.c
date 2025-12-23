/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num=1, x;
    printf("Digite um numero abaixo:\n");
    scanf("%d", &x);
    while (num <= x)
    {
        printf("%d\n", num);
        num = num + 1;
    }

    return 0;
}
