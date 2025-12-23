#include <stdio.h>
#include <stdlib.h>

int main()
{
    int notas[5];
    int pesos[5];
    int cont, media, soma_n=0, soma_p=0;
    for(cont=0;cont<5;cont++)
    {
        printf("Digite o valor da nota %d: ", cont);
        scanf("%d", &notas[cont]);
        printf("Digite o valor do peso %d: ", cont);
        scanf("%d", &pesos[cont]);
        soma_n = soma_n + (notas[cont] * pesos[cont]);
        soma_p = soma_p + (pesos[cont]);
    }
    media = soma_n / soma_p;
    printf("Media ponderada: %d", media);
    
    return 0;
}
