#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void torre_hanoi(int n, char origem, char destino, char auxiliar);

int main(){
    int n;
    printf("Digite o numero de discos para resolver a torre de Hanoi.\n");
    scanf("%d", &n);

    printf("Movimentos:\n");
    torre_hanoi(n, 'A', 'C', 'B');

    return 0;
}

void torre_hanoi(int n, char origem, char destino, char auxiliar){
    if(n == 1){
        printf("Mover disco 1 de %c para %c.\n", origem, destino);
    }else{

        torre_hanoi(n-1, origem, auxiliar, destino);

        printf("Mover disco %d de %c para %c.\n", n, origem, destino);

        torre_hanoi(n-1, auxiliar, destino, origem);
    }
}