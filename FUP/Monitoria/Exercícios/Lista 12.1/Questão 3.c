#include <stdio.h>

int main()
{
    int n, m, i;
    printf("Digite o tamanho do maior vetor: ");
    scanf("%d", &n);
    printf("Digite o tamanho do menor vetor: ");
    scanf("%d", &m);
    int v1[n], v2[m];
    for(i=0;i<n;i++)
    {
        printf("Preencha o maior vetor: ");
        scanf("%d", &v1[i]);
    }
    for(i=0;i<m;i++)
    {
        printf("Preencha o menor vetor: ");
        scanf("%d", &v2[i]);
    }
    for(i=0;i<m;i++)
    {
        
        printf("%d %d ", v1[i], v2[i]);
        
    }
    
    return 0;
}
