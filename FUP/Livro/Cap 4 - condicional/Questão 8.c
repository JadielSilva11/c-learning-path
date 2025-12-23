#include <stdio.h>

int main()
{
   int s, a;
   printf("Digite seu salario: ");
   scanf("%d", &s);
   if(s<=300)
   {
    a = (s * 0.35);
    s = s + a;
    printf("Seu salario com aumento: %d", s);
   }
   else if(s>300)
   {
    a = (s * 0.15);
    s = s + a;
    printf("Seu salario com aumento: %d", s);
   }

    return 0;
}
