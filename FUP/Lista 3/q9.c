#include <stdio.h>
#include <stdlib.h>

int main(){

    int A[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 2};
    int B[10];

    for(int i=0;i<10;i++)
    {
        B[i] = A[i] * A[10];
    }

    printf("Vetor B feito da multiplicacao dos valores do vetor A por x=2\n");

    for(int i=0;i<10;i++)
    {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}