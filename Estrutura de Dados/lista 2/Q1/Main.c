#include <stdio.h>
#include <stdlib.h>
#include "Retangulo.h"

int main(){
    float alt, lar, area, perimetro;

    Retangulo *r = criar_retangulo(5, 5);
    obter_altura(r, &alt);
    obter_largura(r, &lar);
    calcular_area(r, &area);
    calcular_perimetro(r, &perimetro);

    printf("Dados do retangulo:\nAltura: %.2f\nLargura: %.2f\nArea: %.2f\nPerimetro: %.2f\n", alt, lar, area, perimetro);

    liberar_retangulo(r);
    r = NULL;

    if(r == NULL){
        printf("Memoria liberada!\n");
    }

    return 0;
}