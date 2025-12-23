/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, resto, nmr_invertido=0;
    printf("Digite um numero abaixo:\n");
    scanf("%d", &num);
    while (num > 0)
    {
        resto = num%10; 
        nmr_invertido = nmr_invertido*10 + resto;
        num = num/10;
    }
    printf("%d", nmr_invertido);

    return 0;
}
