#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, result;
    printf("Digite um numero para fazermos a tabuada de multiplicação dele\n");
    scanf("%d", &num);
    for(i=0;i<=10;i++)
    {
        result = num * i;
        printf("%d * %d = %d\n", num, i, result);
    }

    return 0;
}
