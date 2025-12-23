#include <stdio.h>

int procurar(int vetor[], int t, int x);

int main()
{
    int t, x;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &t);

    int vetor[t];
    for(int i=0;i<t;i++)
    {
        printf("Digite o valor do vetor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("Digite qual valor voce deseja acessar: ");
    scanf("%d", &x);

    printf("%d", procurar(vetor, t, x));
    
    return 0;
}

int procurar(int vetor[], int t, int x)
{
    int encontr=0;
    for(int i=0;i<t;i++)
    {
        if(vetor[i] == x)
        {
            encontr = 1;
        }
    }

    return encontr;
}