#include <stdio.h>

int main()
{
    int x, y, soma;
    do
    {
        scanf("%d %d", &x, &y);
        if(x<y)
        {
            soma=0;
            while(x<=y)
            {
                soma=soma+x;
                printf("%d ", x);
                x++;
            }
            printf("\nsoma:%d\n", soma);
        }
        else if(y<x)
        {
            soma=0;
            while(y<=x)
            {
                soma=soma+y;
                printf("%d ", y);
                y++;
            }
            printf("\nsoma:%d\n", soma);
        }
    }while((x>0) && (y>0));

    return 0;
}
