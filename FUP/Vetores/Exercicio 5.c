#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, tam;
    printf("Digite quantos valores voce deseja armazenar: ");
    scanf("%d", &tam); // aqui vamos saber quanto será o espaço que o vetor irá armazenar

    int valor[tam]; // aqui declaramos o vetor e atribuimos o valor dado pelo usuario
    for(i=0;i<tam;i++)
    {
        printf("Digite o valor para o espaco %d: ", i);
        scanf("%d", &valor[i]); // aqui vamos receber o valor para cada espaço reservado do vetor
    }

    return 0;
}
