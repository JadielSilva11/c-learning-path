#include <stdio.h>
#include <stdlib.h>
#include "Retangulo.h"

struct retangulo{
    float altura;
    float largura;
};

Retangulo *criar_retangulo(float alt, float lar){
    Retangulo *r = (Retangulo *) malloc(sizeof(Retangulo));
    if(r != NULL){
        r->altura = alt;
        r->largura = lar;
    }
    return r;
}

void liberar_retangulo(Retangulo *r){
    free(r);
}

void obter_altura(Retangulo *r, float *altura){
    *altura = r->altura;
}

void obter_largura(Retangulo *r, float *largura){
    *largura = r->largura;
}

void calcular_area(Retangulo *r, float *area){
    *area = (r->altura * r->largura);
}

void calcular_perimetro(Retangulo *r, float *perimetro){
    *perimetro = (2 * (r->altura + r->largura));
}