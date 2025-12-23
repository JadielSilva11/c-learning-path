#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x=5, y=10;
    float*p1=&x, *p2=&y;

    printf("p1: %.2f\n", *p1);
    printf("p2: %.2f\n", *p2);

    *p1=*p2;

    printf("\np1: %.2f\n", *p1);
    printf("p2: %.2f", *p2);
    
    return 0;
}
