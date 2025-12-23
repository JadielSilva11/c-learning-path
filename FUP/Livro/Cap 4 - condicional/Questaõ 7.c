#include <stdio.h>

int main()
{
   int s, a;
   printf("Digite seu salario: ");
   scanf("%d", &s);
   if(s<500)
   {
    a = (s * 0.03);
    s = s + a;
    printf("Seu salario com aumento: %d", s);
   }
   else
   {
    printf("Voce nao tem direito a aumento!");
   }

    return 0;
}
