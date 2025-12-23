#ifndef RETANGULO_H
#define RETANGULO_H

typedef struct retangulo Retangulo;

Retangulo *criar_retangulo(float largura, float altura);
void liberar_retangulo(Retangulo *r);
void obter_altura(Retangulo *r, float *altura);
void obter_largura(Retangulo *r, float *largura);
void calcular_area(Retangulo *r, float *area);
void calcular_perimetro(Retangulo *r, float *perimetro);

#endif