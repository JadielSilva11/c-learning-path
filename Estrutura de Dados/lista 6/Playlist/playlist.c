#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "playlist.h"

struct musica{
    char *titulo;
    char *artista;
    int duracao;
};

struct no{
    struct no *ant;
    Musica music;
    struct no *prox;
};

struct playlist{
    No *inicio;
    No *fim;
    int tam;
};

Playlist* criar_playlist(){
    Playlist *l = (Playlist*) malloc(sizeof(Playlist));
    if(l == NULL){
        printf("Nao fo possivel criar a playlist.\n");
        return NULL;
    }
    l->inicio = NULL;
    l->fim = NULL;
    l->tam = 0;

    return l;
}

void adicionar_fim(Playlist *l, Musica m){
    No *no = (No*) malloc(sizeof(No));
    if(no == NULL){
        printf("Nao fo possivel adcionar a musica.\n");
        return;
    }
    no->music = m;

    No *aux = l->inicio;
    if(aux == NULL){
        l->inicio = no;
        l->fim = no;
        no->ant = NULL;
    }else{
        no->ant = l->fim;
        l->fim->prox = no;
        l->fim = no;
    }
    no->prox = NULL;
    l->tam++;

    printf("Musica %s inserida na Playlist com sucesso.\n", no->music.titulo);
}

void exibir_musicas(Playlist *l){
    No *aux = l->inicio;
    if(aux == NULL){
        printf("Lista vazia.\n");
        return;
    }
    printf("Musicas:\n");
    while(aux != NULL){
        printf("%s\n", aux->music.titulo);
        aux = aux->prox;
    }
}

void verificar_musica(Playlist *l, Musica m){
    verificar_musica_recursiva(l->inicio, m.titulo);
}

void verificar_musica_recursiva(No *no, char *titulo){
    if(no == NULL){
        printf("A musica %s nao esta na playlist.\n", titulo);
    }else if(strcmp(no->music.titulo, titulo) == 0){
        printf("A musica %s esta na playlist.\n", no->music.titulo);
    }else{
        verificar_musica_recursiva(no->prox, titulo);
    }
}

void duracao_playlist(Playlist *l){
    printf("A Playlist possui %d minutos de duracao.\n", duracao_playlist_recursiva(l->inicio));
}

int duracao_playlist_recursiva(No *no){
    if(no == NULL){
        return 0;
    }else{
        return no->music.duracao + duracao_playlist_recursiva(no->prox);
    }
}

void remover_lista(Playlist *l){
    No *aux = l->fim;
    No *ant = NULL;
    if(aux == NULL){
        printf("Lista vazia.\n");
        return;
    }
    while(aux != NULL){
        ant = aux;
        aux = aux->ant;
        free(ant);
    }
    l->inicio = l->fim = NULL;
    l->tam = 0;
    free(l);

    printf("Playlist removida.\n");
}