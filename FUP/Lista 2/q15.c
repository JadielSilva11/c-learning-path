#include <stdio.h>
#include <stdlib.h>

void fibonacci(int n);

int main()
{
    int n;
    printf("Digite quantos numeros da sequencia de fibonacci voce quer que apareca.\n");
    scanf("%d", &n);

    fibonacci(n);
    
    return 0;
}

void fibonacci(int n)
{
    int num1=0, num2=1, soma;
    for(int i=1;i<=n;i++)
    {
        printf("%d ", num1);
        soma = num1 + num2;
        num1 = num2;
        num2 = soma;
    }
}