#include <stdio.h>

int main()
{
    int c, f;
    printf("Digite a temperatura em graus celsius:\n");
    scanf("%d", &c);
    f = 32 + (c * 1.8);
    printf("Temperatura em fahrenheit: %d", f);

    
    return 0;
}
