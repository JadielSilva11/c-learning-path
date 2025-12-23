/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int dn, mn, an, da, ma, aa, idade_a, idade_m, idade_d;
    printf("Digite aqui sua data de nascimento no formato DD/MM/AA:\n");
    scanf("%d/%d/%d", &dn, &mn, &an);
    printf("Informe tambem a data atual no formato DD/MM/AA:\n");
    scanf("%d/%d/%d", &da, &ma, &aa);
    idade_a = aa - an;
    idade_m = ma - mn;
    idade_d = da - dn;
    //OBS:ñ prescisa de condição para ano pq ele sempre será positivo
    //condição para se o usuário ñ tiver chegado no mes do seu aniversário ainda
    if (idade_m < 0) 
    {
        idade_m = idade_m + 12;
        idade_a = idade_a - 1;
    }
    // condição para saber quantos dias de vida o usuário tem
    if (idade_d < 0)
    {
        idade_d = idade_d + 30;
    }
    printf("Voce tem %d anos %d meses e %d dias de vida", idade_a, idade_m, idade_d);
    


    return 0;
}
