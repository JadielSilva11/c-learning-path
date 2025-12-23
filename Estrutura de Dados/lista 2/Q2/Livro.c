#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "livro.h"

struct livro{
    char titulo[50];
    char autor[20]; 
};

Livro* criar_livro(char t[], char a[]){
    Livro *l = (Livro *) malloc(sizeof(Livro));
    if(l != NULL){
        strcpy(l->autor, a);
        strcpy(l->titulo, t);
    }

    return l;
}

char* obter_titulo(Livro *l){
    return l->titulo;
}

char* obter_autor(Livro *l){
    return l->autor;
}

void modifica_titulo(Livro *l, char t[]){
    strcpy(l->titulo, t);
}

void modifica_autor(Livro *l, char a[]){
    strcpy(l->autor, a);
}

void liberar_livro(Livro *l){
    free(l);
}