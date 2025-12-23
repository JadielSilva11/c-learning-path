#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Pilha.h"

struct no{
    No *prox;
    char *texto;
};

struct pilha{
    No *topo;
    int tam;
};

Pilha* criar_pilha(){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));
    if(p == NULL){
        printf("Nao foi possivel criar a pilha.\n");
        return NULL;
    }

    p->topo = NULL;
    p->tam = 0;

    return p;
}

void push(Pilha *p, char *texto){
    No *no = (No*) malloc(sizeof(No));
    if(no == NULL){
        printf("Nao foi possivel inserir.\n");
        return;
    }

    no->texto = texto;
    no->prox = p->topo;
    p->topo = no;
    p->tam++;

    printf("%s inserido com sucesso.\n", no->texto);
}

char* pop(Pilha *p){
    if(p->topo == NULL){
        printf("Lista vazia.\n");
        return "erro";
    }else{
        No *aux = p->topo;

        char *texto = malloc(strlen(aux->texto)+1);
        strcpy(texto, aux->texto);

        p->topo = aux->prox;
        free(aux);
        p->tam--;

        printf("Topo removido com sucesso.\n");

        return texto;
    }
}

char *peek(Pilha *p){
    if(p->topo == NULL){
        printf("Lista vazia.\n");
        return NULL;
    }

    return p->topo->texto;
}

void destruir_pilha(Pilha *p){
    No *aux = NULL;
    while(p->topo != NULL){
        aux = p->topo;
        p->topo = p->topo->prox;
        free(aux);
    }
    free(p);

    printf("Pilha destruida.\n");
}