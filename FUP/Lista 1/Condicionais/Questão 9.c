/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int dinheiro, resto,  n_200, n_100, n_50, n_20, n_10, n_5, n_2, n_1;
    printf("Qual valor voce deseja sacar?\n");
    scanf("%d", &dinheiro);
    //divsão do dinheiro por notas
    n_200 = dinheiro/200;
    dinheiro = dinheiro%200;
    n_100 = dinheiro/100;
    dinheiro = dinheiro%100;
    n_50 = dinheiro/50;
    dinheiro = dinheiro%50;
    n_20 = dinheiro/20;
    dinheiro = dinheiro%20;
    n_10 = dinheiro/10;
    dinheiro = dinheiro%10;
    n_5 = dinheiro/5;
    dinheiro = dinheiro%5;
    n_2 = dinheiro/2;
    n_1 = dinheiro%2;
    
    printf("valor a ser sacado:\n");
    printf("%d notas de 200 reais\n", n_200);
    printf("%d notas de 100 reais\n", n_100);
    printf("%d notas de 50 reais\n", n_50);
    printf("%d notas de 20 reais\n", n_20);
    printf("%d notas de 10 reais\n", n_10);
    printf("%d notas de 5 reais\n", n_5);
    printf("%d notas de 2 reais\n", n_2);
    printf("%d notas de 1 reais", n_1);
    return 0;
}
