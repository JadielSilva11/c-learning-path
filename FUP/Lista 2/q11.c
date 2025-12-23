#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sorteio(int dados, int lados);

int main()
{
    int qtd_dados, qtd_lados;
    printf("Digite quantos dados deseja lancar: ");
    scanf("%d", &qtd_dados);
    printf("Agora digite a quantidade de lados do dado: ");
    scanf("%d", &qtd_lados);

    printf("O numero sorteado foi: %d", sorteio(qtd_dados, qtd_lados));
    
    return 0;
}

int sorteio(int dados, int lados)
{
    srand(time(NULL)); 
    
    int sorteio;

    sorteio = rand()% (dados * lados) + 1;
    
    return sorteio;
}