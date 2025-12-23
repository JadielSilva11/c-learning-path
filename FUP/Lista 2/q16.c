#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n);

int main()
{
    int n;
    printf("Digite qual o numero da sequencia de fibonacci voce quer que apareca.\n");
    scanf("%d", &n);

    printf("%d", fibonacci(n));
    
    return 0;
}

int fibonacci(int n)
{
    int num1=0, num2=1, soma, i;
    for(i=1;i<n;i++)
    {
        soma = num1 + num2;
        num1 = num2;
        num2 = soma;
    }
    return num1;
}