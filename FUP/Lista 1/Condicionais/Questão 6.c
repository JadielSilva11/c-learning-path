/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int dn, mn, an, da, ma, aa, idade;
    printf("Digite aqui sua data de nascimento no formato DD/MM/AA:\n");
    scanf("%d/%d/%d", &dn, &mn, &an);
    printf("Informe tambem a data atual no formato DD/MM/AA:\n");
    scanf("%d/%d/%d", &da, &ma, &aa);
    idade = aa - an;
    if (ma < mn)
    {
        idade = idade - 1;
        printf("Voce tem: %d anos", idade);
    }
    else 
    {
        printf("Voce tem: %d anos", idade);
    }
    
    return 0;
}
