#include <stdio.h>

int main()
{
    float n1, n2, mp;
    printf("Digite sua primeira nota:\n");
    scanf("%f", &n1); // a nota 1 tem peso 2
    printf("Digite sua segunda nota:\n");
    scanf("%f", &n2); // a nota 2 tem peso 3
    // será tirado a média ponderada dessas duas notas
    mp = ((n1 * 2) + (n2 * 3)) / 5;
    printf("A media ponderada de %.1f + %.1f = %.1f", n1, n2, mp);
    
    return 0;
}
