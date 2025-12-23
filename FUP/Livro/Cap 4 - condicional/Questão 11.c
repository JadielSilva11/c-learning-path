#include <stdio.h>

int main()
{
    int s, a;
    printf("Digite seu salario: ");
    scanf("%d", &s);
    if (s <= 300)
    {
        a = s * 0.15;
        s = s + a + 1;
        printf("Seu novo salario com aumento: %d", s);
    }
    else if (s > 300 && s < 600)
    {
        a = s * 0.1;
        s = s + a;
        printf("Seu novo salario com aumento: %d", s);
    }
    else if (s >= 600 && s <= 900)
    {
        a = s * 0.05;
        s = s + a;
        printf("Seu novo salario com aumento: %d", s);
    }
    else 
    {
        printf("Voce nao tem direito a aumento!!!");
    }
    
    return 0;
}
