#include <stdio.h>

int main()
{
    int num, result, cont;
    for(num=1;num<=10;num++)
    {
        for(cont=1;cont<=10;cont++)
        {
            result = num * cont;
            printf("%d X %d = %d\n", num, cont, result);
        }
        printf("\n");
    }
    
    return 0;
}
