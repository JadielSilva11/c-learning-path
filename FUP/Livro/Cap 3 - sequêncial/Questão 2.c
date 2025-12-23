#include <stdio.h>

int main()
{
    int num1, num2, num3, multi;
    printf("Digite um numero:\n");
    scanf("%d", &num1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &num2);
    printf("Digite o terceiro numero:\n");
    scanf("%d", &num3);
    multi= num1 * num2 * num3;
    printf("%d * %d * %d = %d", num1, num2, num3, multi);
    
    return 0;
}
