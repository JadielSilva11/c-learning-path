#include <stdio.h>

int main()
{
    int v[20], i;
    for(i=0;i<20;i++)
    {
        printf("Digite o valor do vetor %d: ", i);
        scanf("%d", &v[i]);
    }

    for(i=0;i<20;i++)
    {
        if(v[i] == i)
        {
            printf("%d ", v[i]);
        }
    }
    
    return 0;
}
