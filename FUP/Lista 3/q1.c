#include <stdio.h>
#include <stdlib.h>

void mudar_valor(int *p1, int *p2);

int main()
{
    int v1=10, v2=20;

    printf("v1: %d \nv2: %d \n", v1, v2);

    mudar_valor(&v1, &v2);

    printf("Depois da mudanca!\n");

    printf("v1: %d \nv2: %d \n", v1, v2);
    
    return 0;
}

void mudar_valor(int *p1, int *p2)
{
    *p1 = 5;
    *p2 = 25;
}