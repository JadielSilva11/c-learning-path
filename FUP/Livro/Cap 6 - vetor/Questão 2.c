#include <stdio.h>

int main()
{
    int num[7];
    int i;
    for(i=0;i<7;i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
        if (num[i] % 2 == 0)
        {
            printf("Este numero e multiplo de 2\n");
        }
        else if (num[i] % 3 == 0)
        {
            printf("Este numero e multiplo de 3\n");
        }
        if (num[i] % 2 == 0 && num[i] % 3 == 0)
        {
            printf("Este numero e multiplo de 2 e 3\n");
        }
    }
    
    return 0;
}
