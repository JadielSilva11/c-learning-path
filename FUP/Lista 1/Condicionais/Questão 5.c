/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int peso1, peso2, peso3;
    printf("Digite aqui o peso do primeiro objeto em kilos:\n");
    scanf("%d", &peso1);
    printf("Digite aqui o peso do segundo objeto em kilos:\n");
    scanf("%d", &peso2);
    printf("Digite aqui o peso do terceiro objeto em kilos:\n");
    scanf("%d", &peso3);
    //Aqui será diferenciado os pesos dos objetos
    
    //Se o objeto 1 for o mais pesado e os objetos 2 e 3 forem menos pesados
    if ((peso1>peso2) && (peso1>peso3))
    {
        printf("O objeto 1 e o mais pesado com %d kilos\n", peso1);
        if (peso2>peso3)
        {
        printf("O objeto 2 tem %d kilos e e menos pesado que o objeto 1\n", peso2);
        printf("O objeto 3 e o menos pesado com %d kilos", peso3);
        }
        else 
        {
        printf("O objeto 3 e tem %d kilos e e menos pesado que o objeto 1\n", peso3);
        printf("O objeto 2 e o menos pesado com %d kilos", peso2);
        }
    }
    //Se o objeto 2 for o mais pesado e os objetos 1 e 3 forem menos pesados
    else if ((peso2 > peso1) && (peso2 > peso3))
    {
        printf("O objeto 2 e o mais pesado com %d kilos\n", peso2);
        if (peso1>peso3)
        {
        printf("O objeto 1 tem %d kilos e e menos pesado que o objeto 2\n", peso1);
        printf("O objeto 3 e o menos pesado com %d kilos", peso3);
        }
        else 
        {
        printf("O objeto 3 e tem %d kilos e e menos pesado que o objeto 1\n", peso3);
        printf("O objeto 1 e o menos pesado com %d kilos", peso1);
        }
    }
    //Se o objeto 3 for o mais pesado e os objetos 1 e 2 forem menos pesados
    else if ((peso3 > peso1) && (peso3 > peso2))
    {
        printf("O objeto 3 e o mais pesado com %d kilos\n", peso3);
        if (peso1>peso2)
        {
        printf("O objeto 1 tem %d kilos e e menos pesado que o objeto 1\n", peso1);
        printf("O objeto 2 e o menos pesado com %d kilos", peso2);
        }
        else 
        {
        printf("O objeto 2 e tem %d kilos e e menos pesado que o objeto 1\n", peso2);
        printf("O objeto 1 e o menos pesado com %d kilos", peso1);
        }
    }
    
    
    return 0;
}
