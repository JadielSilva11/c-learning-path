#include <stdio.h>

int main()
{
    int linha, coluna, inicio, fim, num;
    scanf("%d", &num);
    inicio=(num+1)/2;
    fim=(num+1)/2;
    for(linha=1;linha<=num;linha++)
    {
        for(coluna=1;coluna<=num;coluna++)
        {
            if((coluna>=inicio) && (coluna<=fim))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        if(linha<(num+1)/2)
        {
            inicio--;
            fim++;
        }
        else
        {
            inicio++;
            fim--;
        }
        printf("\n");
    }

    return 0;
}
