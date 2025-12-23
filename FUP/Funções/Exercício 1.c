#include <stdio.h>

void maior_menor(int x);
void par_impar(int x);

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    maior_menor(num);
    par_impar(num);

    return 0;
}

void maior_menor(int x)
{
    if (x > 0)
    {
        printf("O numero %d e maior que 0\n", x);
    }
    else
    {
        printf("O numero %d e menor que 0\n", x);
    }
}
void par_impar(int x)
{
    if (x % 2 == 0)
    {
        printf("O numero %d e par", x);
    }
    else 
    {
        printf("O numero %d e impar", x);
    }
}