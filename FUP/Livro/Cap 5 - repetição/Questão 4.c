#include <stdio.h>

int main()
{
    int cont, num, result;
    scanf("%d", &num);
    for(cont=1;cont<=10;cont++)
    {
        result = num * cont;
        printf("%d * %d = %d\n", num, cont, result);
    }
    
    return 0;
}
