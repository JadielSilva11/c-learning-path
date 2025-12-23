#include <stdio.h>
#include <math.h>

void emprestimo(float *c, float j, float n, float a);

int main()
{
    float c, j=0.03, n, a;

    printf("Qual o valor do emprestimo: ");
    scanf("%f", &c);
    printf("Por quantos meses voce deseja pagar o emprestimo: ");
    scanf("%f", &n);
    printf("Em quantos anos sera pago o emprestimo: ");
    scanf("%f", &a);
    emprestimo(&c, j, n, a);

    return 0;
}

void emprestimo(float *c, float j, float n, float a)
{
    *c = *c * pow((1 + j/n), n*a);
    printf("Ao final do prazo estipulado voce pagara %.2f reais pelo emprestimo", *c);
}