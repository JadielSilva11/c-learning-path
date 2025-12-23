#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor[10]; // o vetor possui 10 espaços de memoria (0 a 9)
    int i;
    for(i=0;i<10;i++) // o usuario deve atribuir um numero ao vetor, do vetor 0 ate o vetor 9 
    {
        printf("Digite o valor para a memoria %d: ", i);
        scanf("%d", &valor[i]);
    }
    // sera impresso de forma decrescente o numero do vetor e o valor atribuido a ele pelo usuario
    for(i=9;i>=0;i--) 
    {
        printf("A memoria %d tem o valor: %d\n", i, valor[i]);
    }

    free(valor); // não há necessidade de liberar este vetor pois o mesmo e um vetor estatico
    
    return 0;
}
