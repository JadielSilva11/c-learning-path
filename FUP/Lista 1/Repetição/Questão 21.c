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
     int cont, sorteio, l1, l2, l3, l4, l5, l6;
    srand(time(NULL));
    for(cont=0;cont<100;cont++)
    {
        sorteio=rand()%6+1;
        if(sorteio==1)
        {
            l1++;
        }
        else if(sorteio==2)
        {
            l2++;
        }
        else if(sorteio==3)
        {
            l3++;
        }
        else if(sorteio==4)
        {
            l4++;
        }
        else if(sorteio==5)
        {
            l5++;
        }
        else
        {
            l6++;
        }
    }
    printf("O lado 1 do dado saiu %d vezes.\n", l1);
    printf("O lado 2 do dado saiu %d vezes.\n", l2);
    printf("O lado 3 do dado saiu %d vezes.\n", l3);
    printf("O lado 4 do dado saiu %d vezes.\n", l4);
    printf("O lado 5 do dado saiu %d vezes.\n", l5);
    printf("O lado 6 do dado saiu %d vezes.\n", l6);

    return 0;
}
