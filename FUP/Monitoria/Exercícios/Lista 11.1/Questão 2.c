#include <stdio.h>

int primo(int num);

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("A soma de todos os numeros primos de 1 ate %d e: %d", num, primo(num));
    
    return 0;
}

int primo(int num)
{
    int i, soma=0, divi;
    for(i=2;i<=num;i++)
    {
        divi=0;
        for(int n=1;n<=i;n++)
        {
            if(i % n == 0)
            {
                divi++;  
            }
        }
        if(divi == 2)
        {
            soma += i;
        }
    }

    return soma;
}