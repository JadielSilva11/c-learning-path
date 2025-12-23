#include <stdio.h>

int main()
{
    int matriz[3][3], l, c;

    for(l=0;l<3;l++)
    {
        for(c=0;c<3;c++)
        {
            printf("Digite o valor da Linha %d Coluna %d: ", l+1, c+1);
            scanf("%d", &matriz[l][c]);
        }
    }
    for(l=0;l<3;l++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }
    
    return 0;
}
