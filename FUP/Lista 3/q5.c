#include <stdio.h>
#include <stdlib.h>

void divisao(int num, int *p1, int *p2);

int main()
{
    int p1=0, p2=0;
    int num=2244;

    divisao(num, &p1, &p2);

    printf("P1: %d\nP2: %d\n", p1, p2);
    
    return 0;
}

void divisao(int num, int *p1, int *p2)
{
    *p1 = (num / 100);
    *p2 = (num % 100);
}