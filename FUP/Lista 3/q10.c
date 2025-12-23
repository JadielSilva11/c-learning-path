#include <stdio.h>
#include <stdlib.h>

int main(){

    int A[20];
    int i=0;

    printf("Insira 20 valores no vetor!\n");
    for(i=0;i<20;i++)
    {
        scanf("%d", &A[i]);
    }

    for(int i=19;i>=0;i--)
    {
        printf("%d ", A[i]);
    }

    return 0;
}