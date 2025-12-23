/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, f=2;
    scanf("%d", &num);
    printf("%d = ", num);
    while(num>1)
    {
        while(num%f==0)
        {
            num = num/f;
            printf("%d", f);
            if (num!=1)
            {
                printf("*");
            }
        }
        f++;
    }
    return 0;
}
