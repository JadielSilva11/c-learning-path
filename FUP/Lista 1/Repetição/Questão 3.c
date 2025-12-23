/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int a, b;
   printf("digite dois numeros abaixo:\n");
   scanf("%d", &a);
   scanf("%d", &b);
   //agr será feito a contagem de um em um do menor até o maior
   if (a <= b)
   {
       while (a <= b)
       {
           printf("%d\n", a);
           a = a + 1;
       }
   }
   else
   {
       while (b <= a)
       {
           printf("%d\n", b);
           b = b + 1;
       }
   }

    return 0;
}
