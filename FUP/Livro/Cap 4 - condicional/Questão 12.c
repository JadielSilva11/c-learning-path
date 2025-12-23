#include <stdio.h>

int main()
{
    int s, g, im;
    printf("Digite seu salario: ");
    scanf("%d", &s);
    im = s * 0.07;
    if (s < 350)
    {
        g = 100;
        s = (s + g) - im;
        printf("seu novo valor a receber e: %d", s);
    }
    else if (s > 350 && s < 600)
    {
        g = 75;
        s = (s + g) - im;
        printf("seu novo valor a receber e: %d", s);
    }
    else if (s >= 600 && s <= 900)
    {
        g = 50;
        s = (s + g) - im;
        printf("seu novo valor a receber e: %d", s);
    }
    else 
    {
        g = 35;
        s = (s + g) - im;
        printf("seu novo valor a receber e: %d", s);
    }
    return 0;
}
