#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno
{
    char nome[50];
    float n1;
    float n2;
    float n3;
}Aluno;

int main()
{
    int count;
    float media[3];

    Aluno A[3];
    for(count=0;count<3;count++)
    {
        printf("Digite o nome do aluno %d: ", count+1);
        scanf("%s", A[count].nome);
        printf("Digite a primeira nota: ");
        scanf("%f", &A[count].n1);
        printf("Digite a segunda nota: ");
        scanf("%f", &A[count].n2);
        printf("Digite a terceira nota: ");
        scanf("%f", &A[count].n3);
    }

    for(count=0;count<3;count++)
    {
        media[count] = (A[count].n1 + A[count].n2 + A[count].n3) / 3; 
    }

    if(media[0] > media[1] && media[0] > media[2])
    {
        printf("O aluno(a) %s tem a maior media!\n", A[0].nome);
    }
    else if(media[1] > media[0] && media[1] > media[2])
    {
        printf("O aluno(a) %s tem a maior media!\n", A[1].nome);
    }
    else
    {
        printf("O aluno(a) %s tem a maior media!\n", A[2].nome);
    }

    return 0;
}