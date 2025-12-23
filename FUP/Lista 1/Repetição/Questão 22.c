/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int sorteio, cont, l1, l2, l3, l4, l5, l6;
    srand(time(NULL));
    for(cont=0;cont<2;cont++)
    {
        sorteio = rand()%6+1;
        if (sorteio==1)
        {
            l1++;
        }
        if (sorteio==2)
        {
            l2++;
        }
        if (sorteio==3)
        {
            l3++;
        }
        if (sorteio==4)
        {
            l4++;
        }
        if (sorteio==5)
        {
            l5++;
        }
        if (sorteio==6)
        {
            l6++;
        }
    }
    printf("O numero 1 saiu %d vezes\n", l1);
    printf("O numero 2 saiu %d vezes\n", l2);
    printf("O numero 3 saiu %d vezes\n", l3);
    printf("O numero 4 saiu %d vezes\n", l4);
    printf("O numero 5 saiu %d vezes\n", l5);
    printf("O numero 6 saiu %d vezes\n", l6);

    return 0;
}
