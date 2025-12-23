/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1, num2, resultado;
    printf("Digite aqui o primeiro numero:\n");
    scanf("%d", &num1);
    printf("Digite aqui o segundo numero:\n");
    scanf("%d", &num2);
    resultado = num1 - num2;
    if (resultado>0)
    {
        printf("O resultado da diferenca e: %d", resultado);
    }
    else
    {
        resultado = resultado * (-1);
        printf("O resultado deu negativo e foi transformado em modulo: %d", resultado);
    }
    
    return 0;
}
