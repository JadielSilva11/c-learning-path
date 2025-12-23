#include <stdio.h>

void maior(int x, int y);
void menor(int x, int y);

int main()
{
    int x, y, op;
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);
    printf("1- Imprimir os numeros em ordem crescente\n2- Imprimir os numeros em ordem decrescente\n3- Imprimir o maior\n4- Imprimir o menor\n");
    printf("Qual operacao voce deseja realizar: ");
    scanf("%d", &op);
    if (op == 1)
    {
        menor(x, y);
        maior(x, y);
    }
    else if (op == 2)
    {
        maior(x, y);
        menor(x, y);
    }
    else if (op ==3)
    {
        maior(x, y);
    }
    else
    {
        menor(x, y);
    }

    return 0;
}

void maior(int x, int y)
{
    if (x > y)
    {
        printf("%d ", x);
    }
    else
    {
        printf("%d ", y);
    }
}

void menor(int x, int y)
{
    if (x < y)
    {
        printf("%d ", x);
    }
    else 
    {
        printf("%d ", y);
    }
}
