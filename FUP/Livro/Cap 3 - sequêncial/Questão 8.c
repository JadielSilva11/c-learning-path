#include <stdio.h>

int main()
{
    int peso;
    printf("Digite seu peso em kilos:\n");
    scanf("%d", &peso);
    // o peso sera transformado em gramas
    peso = (peso*1000);
    printf("O seu peso em gramas e: %d", peso);

    return 0;
}
