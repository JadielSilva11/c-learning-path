/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, num_primo, divisor=1, divisor_primo=2, nmr_divisores=0;
    printf("Digite um numero inteiro abaixo:\n");
    scanf("%d", &num);
    num_primo = num;
    do
    {
        if(num%divisor==0)
        {
            nmr_divisores++;
            divisor++;
        }
        else
        {
            divisor++;
        }
    }
    while (divisor<=num);
    printf("O numero %d tem %d divisores.\n", num, nmr_divisores);

    return 0;
}
