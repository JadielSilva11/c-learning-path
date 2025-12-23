#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int A[3][3], B[3][3], C[3][3];
    int l, c;
    
    for(l=0;l<3;l++)
    {
        for(c=0;c<3;c++)
        {
            A[l][c] = rand() % 9;
            B[l][c] = rand() % 9;
            C[l][c] = A[l][c] + B[l][c];
        }
    }

    printf("  A \t B \t C (A + B)\n");
    for(l=0;l<3;l++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d ", A[l][c]);
        }
        printf("\t");

        for(c=0;c<3;c++)
        {
            printf("%d ", B[l][c]);
        }
        printf("\t");

        for(c=0;c<3;c++)
        {
            printf("%d ", C[l][c]);
        }
        printf("\n");
    }
    
    return 0;
}