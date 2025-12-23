#include <stdio.h>
#include <stdlib.h>

int contadigitos(int *n, int *d);

int main()
{
    int n, d;

    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Agora informe um digito para contarmos quantas vezes ele aparece no numero informado!\n");
    printf("O digito deve ser entre 1 e 9: ");
    scanf("%d", &d);

    printf("O digito %d aparece %d vezes!\n", d, contadigitos(&n, &d));
    
    return 0;
}

int contadigitos(int *n, int *d)
{
    int x, cont=0;
    do
    {
        x = *n % 10;
        if(x == *d)
        {
            cont++;
        }
        *n /= 10;

    } while (*n != 0);
    
    return cont;
}