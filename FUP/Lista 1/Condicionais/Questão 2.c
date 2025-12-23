/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int hora, min, seg, minutos;
    
    printf("Digite o tempo da receita em horas e minutos:\n");
    scanf("%d:%d", &hora, &minutos);
    
    // Agora será feito a conversão das horas em minutos e segundos
    min = hora * 60;
    seg = (hora * 3600) + (minutos * 60);
    printf("O tempo da receita em minutos e %d e em segundos e %d", min, seg);

    return 0;
}
