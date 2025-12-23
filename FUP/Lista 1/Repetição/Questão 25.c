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
    int letra;
    srand(time(NULL));
    letra = rand()%26+65;
    printf("%c", letra);
    return 0;
}
