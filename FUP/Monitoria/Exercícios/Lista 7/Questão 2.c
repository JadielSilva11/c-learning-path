#include <stdio.h>

int main()
{
    int x;
    int *p_x=&x;
    scanf("%d", &*p_x);
    printf("x = %d", x);
    
    return 0;
}
