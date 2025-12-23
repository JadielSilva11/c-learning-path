/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{;
    float codigo, salario;
    printf("Digite abaixo o valor do seu salario:\n");
    scanf("%f", &salario);
    printf("Agora digite o codigo do seu salario:\n");
    scanf("%f", &codigo);
    
    printf("codigo 1 ----- aumento de 40 por cento.\n");
    printf("codigo 2 ----- aumento de 25 por cento.\n");
    printf("codigo 3 ----- aumento de 10 por cento.\n");
    printf("codigo 4 ----- aumento de 0.5 por cento.\n");
    if (codigo == 1)
    {
        salario = salario + (salario*40/100);
        printf("Seu novo salario com o aumento: %.2f", salario);
    }
    if (codigo == 2)
    {
        salario = salario + (salario*25/100);
        printf("Seu novo salario com o aumento: %.2f", salario);
    }
    if (codigo == 3)
    {
        salario = salario + (salario*10/100);
        printf("Seu novo salario com o aumento: %.2f", salario);
    }
    if (codigo == 4)
    {
        salario = salario + (salario*0.5/100);
        printf("Seu novo salario com o aumento: %.2f", salario);
    }

    return 0;
}
