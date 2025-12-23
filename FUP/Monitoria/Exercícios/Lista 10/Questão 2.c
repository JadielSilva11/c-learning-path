#include <stdio.h>

void salario(int *sal, int he);

int main()
{
    int sal, he;
    printf("Digite seu salario: ");
    scanf("%d", &sal);
    printf("Digite a quatidade de horas extra trabalhada: ");
    scanf("%d", &he); 
    salario(&sal, he);

    return 0;
}

void salario(int *sal, int he)
{
    *sal = *sal + (he * 20);
    if (he == 10)
    {
        *sal = *sal + 50;
    }
    printf("Seu salario mais hora extra: %d", *sal);
}
