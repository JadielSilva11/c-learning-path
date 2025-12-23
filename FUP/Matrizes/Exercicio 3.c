#include <stdio.h>

int main()
{
    int matriz[3][3] = {1,2,3,4,5,6,7,8,9};
    int soma=0, l, c;

    for(l=0;l<3;l++)
    {
        for(c=0;c<3;c++)
        {
            soma += matriz[l][c];
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }
    printf("soma dos elementos da matriz: %d ", soma);
    
    return 0;
}
