#include <stdio.h>

int main()
{
    int lado , area;
    printf("Digite o lado do quadrado:\n");
    scanf("%d", &lado);
    // sera tirado a area do quadrado
    area = (lado * lado);
    printf("Area do quadrado: %d cm quadrados", area);
    
    return 0;
}
