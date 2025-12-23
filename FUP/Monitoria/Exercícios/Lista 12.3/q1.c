#include <stdio.h>

void zeros(int v[], int n);

int main()
{
    int n;
    printf("Digite qual sera o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    zeros(vetor, n);

    for(int i=0;i<n;i++)
    {
        printf("%d ", vetor[i]);
    }
    
    return 0;
}

void zeros(int v[], int n)
{
    for(int i=0;i<n;i++)
    {
        v[i] = 0;
    }
}