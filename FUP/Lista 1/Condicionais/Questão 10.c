/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int opcao, segundos, minutos; 
    float horas, hora, min;
    printf("Digite abaixo o tempo da receita em horas e minutos (h:min):\n");
    scanf("%f:%f", &hora, &min);
    printf("\n\t\t***MENU***\n");
    printf(">Em quais opcoes voce deseja converter o tempo:\n");
    printf("1-segundos\n");
    printf("2-minutos\n");
    printf("3-horas\n");
    scanf("%d", &opcao);
    if (opcao == 1)
    {
        printf("Voce escolheu a opcao 1.\n");
        segundos = (hora*3600) + (min*60);
        printf("O tempo da receita e:%d segundos", segundos);
    }
    if (opcao == 2)
    {
        printf("Voce escolheu a opcao 2.\n");
        minutos = (hora*60) + (min);
        printf("O tempo da receita e:%d minutos", minutos);
    }
    if (opcao == 3)
    {
        printf("Voce escolheu a opcao 3.\n");
        horas = (min/60) + (hora);
        printf("O tempo da receita e:%.1f horas", horas);
    }
    
    return 0;
}
