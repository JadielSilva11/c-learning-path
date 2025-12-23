#include <stdio.h>
#include <stdlib.h>

void contadigitos(int num, int contador[]);
int ehpermutacao(int a, int b);

int main()
{
    int a, b;

    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite outro numero: ");
    scanf("%d", &b);

    if(ehpermutacao(a, b))
    {
        printf("O numero %d e permutaçao do numero %d", a, b);
    }
    else
    {
        printf("O numero %d nao e permutaçao do numero %d", a, b);
    }
    return 0;
}

int ehpermutacao(int a, int b)
{
    int contA[10] = {0};
    int contB[10] = {0};

    contadigitos(a, contA);
    contadigitos(b, contB);

    for(int i=1;i<10;i++)
    {
        if(contA[i] != contB[i])
        {
            return 0;
        }
    }

    return 1;
}

void contadigitos(int num, int contador[])
{
    int digito;
    do
    {
        digito = num % 10;
        contador[digito]++;
        num /= 10;

    }while(num != 0);
}