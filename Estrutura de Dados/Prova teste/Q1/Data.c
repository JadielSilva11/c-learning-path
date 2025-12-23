#include <stdio.h>
#include <stdlib.h>
#include "Data.h"

struct data{
    int dia;
    int mes;
    int ano;
};

Data* criar_data(int dia, int mes, int ano){
    Data *d = (Data *) malloc(sizeof(Data));
    if(d != NULL){
        d->dia = dia;
        d->mes = mes;
        d->ano = ano;
    }

    return d;
}

void eBissexto(Data *d){

}

void compara(Data *d1, Data *d2){

}

void liberar_data(Data *d){
    free(d);
    d = 
}