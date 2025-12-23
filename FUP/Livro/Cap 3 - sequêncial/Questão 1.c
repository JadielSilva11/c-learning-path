#include <stdio.h>

int main()
{
    int num1, num2, sub;
    printf("Digite um numero:\n");
    scanf("%d", &num1);
    printf("Digite outro numero:\n");
    scanf("%d", &num2);
    sub=num1-num2;
    printf("%d - %d = %d", num1, num2, sub);

    return 0;
}