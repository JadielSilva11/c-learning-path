#include <stdio.h>

int main()
{
    int x;
    int multi(int num);

    scanf("%d", &x);
    multi(x);
    printf("Resultado da funcao multi: %d", multi(x));

    return 0;
}

int multi(int num)
{
    int dobro;
    dobro = num * 2;

    return dobro;
}
