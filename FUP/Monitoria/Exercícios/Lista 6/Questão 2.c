#include <stdio.h>

int main()
{
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d",&num2);
    if(&num1 > &num2)
    {
        printf("o endereco do numero 1 e maior\n");
        printf("num1: %d\n", &num1);
    }
    if(&num2 > &num1)
    {
        printf("o endereco do numero 2 e maior\n");
        printf("num2: %d\n", &num2);
    }
    
    return 0;
}
