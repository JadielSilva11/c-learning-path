#include <stdio.h>

int main()
{
    int num1, num2, divisao;
    printf("Digite um numero:\n");
    scanf("%d", &num1);
    printf("Digite outro numero:\n");
    scanf("%d", &num2);
    divisao= num1/num2;
    printf("%d / %d = %d", num1, num2, divisao);
    
    return 0;
}
