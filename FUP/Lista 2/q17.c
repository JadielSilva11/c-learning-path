#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);

int main()
{
    int n;
    printf("Digite quantos numeros de fibonacci voce quer somar.\n");
    scanf("%d", &n);

    printf("Soma dos %d numeros: %d", n, fibonacci(n));
    
    return 0;
}

int fibonacci(int n)
{
    int num1=0, num2=1, soma, t=0;
    for(int i=1;i<n;i++)
    {
        soma = num1 + num2;
        num1 = num2;
        num2 = soma;
        t += num1;
    }
    return t;
}