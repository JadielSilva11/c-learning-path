/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int opcao, calorias;
    printf("\t\t\t\t\t**MENU**\n");
    printf("          |PRATO     -    CALORIAS |SOBREMESA      -      CALORIAS  |BEBIDAS       -     CALORIAS |\n");
    printf("OPCAO 1 - |Vegetariano    180 cal  |Abacaxi               75  cal   |Cha                 20  cal  |\n");
    printf("OPCAO 2 - |Peixe          230 cal  |Sorvete Diet          110 cal   |Suco de Laranja     70  cal  |\n");
    printf("OPCAO 3 - |Frango         250 cal  |Mouse Diet            170 cal   |Suco de Limao       100 cal  |\n");
    printf("OPCAO 4 - |Carne          350 cal  |Mouse de chocolate    200 cal   |Refrigerante Diet   65  cal  |\n");
    printf("Qual opcao voce deseja?\n");
    scanf("%d", &opcao);
    if (opcao== 1)
    {
        calorias = 180 + 75 + 20;
        printf("Seu pedido deu %d calorias.", calorias);
    }
    if (opcao == 2)
    {
        calorias = 230 + 110 + 70;
        printf("seu pedido deu %d calorias.", calorias);
    }
    if (opcao == 3)
    {
        calorias = 250 + 170 + 100;
        printf("Seu pedido de %d calorias.", calorias);
    }
    else
    {
        calorias = 350 + 200 + 65;
        printf("Seu pedido deu %d calorias.", calorias);
    }
    

    return 0;
}
