#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int i, i2, l, c;
    float media=0;
    
    printf("Digite quantas linhas sua matriz tera: ");
    scanf("%d", &l);
    printf("Digite quantas colunas sua matriz tera: ");
    scanf("%d", &c);

    int matriz[l][c];
    for(i=0;i<l;i++)
    {
        for(i2=0;i2<c;i2++)
        {
            matriz[l][c] = rand()%9;
            media += matriz[l][c];
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }
    media /= (l * c);
    printf("Media dos elementos da matriz: %.1f\n", media);
    
    return 0;
}
