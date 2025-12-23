/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int num, soma=0, vezes, media;
   do 
   {
       printf("Digite um numero abaixo:\n");
       scanf("%d", &num);
       soma = soma + num;
   }
//Enquanto o usuário digitar um valor difrente de 0 esse valor será somado ao número anterior
//Quanod o usuário digitar 0 o programa mostrará o resultado das somas 
    while (num != 0);
    printf("Quantas vezes voce digitou um numero?(tirando o 0)\n");
    scanf("%d", &vezes);
    media = (soma/vezes);
    printf("Media:%d", media);
   
   

    return 0;
}
