/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, num_primo, divisor=1, nmr_divisores=0;
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
    if (nmr_divisores==2)
    {
        printf("O numero %d e um numero primo e so pode ser dividido por 1 e por ele mesmo.", num_primo);
    }

    return 0;
}
