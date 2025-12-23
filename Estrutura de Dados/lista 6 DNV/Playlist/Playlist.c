#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Playlist.h"

struct musica{
    char *titulo;
    char *artista;
    int duracao;
};

struct no{
    No *ant;
    No *prox;
    Musica musica;
};

struct playlist{
    No *inicio;
    No *fim;
    int tam;
};

Playlist* criar_playlist(){
    Playlist *p = (Playlist*) malloc(sizeof(Playlist));
    if(p == NULL){
	printf("Nao foi possivel criar a playlist.\n");
	return NULL;
    }
    p->inicio = NULL;
    p->fim = NULL;
    p->tam = 0;

    printf("Lista criada.\n");

    return p;	
}

Musica* criar_musica(char *titulo, char *artista, int duracao){
    Musica *m = (Musica*) malloc(sizeof(Musica));
    if(m == NULL){
        printf("Nao foi possivel criar a musica.\n");
        return NULL;
    }
    m->titulo = titulo;
    m->artista = artista;
    m->duracao = duracao;

    printf("Musica %s criada.\n", m->titulo);

    return m;
}

void adicionar_fim(Playlist *p, Musica *m){
    No *no = (No*) malloc(sizeof(No));
    if(no == NULL){
	    printf("Nao foi possivel adicionar a musica.\n");
	    return;
    }
    no->musica = *m;

    if(p->inicio == NULL){
	    p->inicio = no;
	    p->fim = no;
        no->ant = NULL;
        no->prox = NULL; 
    }else{
	    no->ant = p->fim;
	    p->fim->prox = no;
	    p->fim = no;
        no->prox = NULL; 
    }
    p->tam++;

    printf("Musica %s adicionada no fim da playlist.\n", p->fim->musica.titulo);
}

void remocao_por_titulo(Playlist *p, char *titulo){
    No *aux = p->inicio;
    No *ant = NULL;
    if(aux == NULL){
	printf("Lista vazia.\n");
        return;
    }

    while(aux != NULL && strcmp(aux->musica.titulo, titulo) != 0){
	ant = aux;
	aux = aux->prox;
    }

    if(aux == NULL){
	    printf("Musica %s nao encontrada.\n", titulo);
        return;
    }

	if(aux == p->inicio){
	    p->inicio = aux->prox;
	}else{
	    aux->ant->prox = aux->prox;
	}

	if(aux == p->fim){
	    p->fim = aux->ant;
	}else{
	    aux->prox->ant = aux->ant;
	}
    free(aux);
    p->tam--;

    printf("Musica %s removida.\n", titulo);
}

void exibir_playlist(Playlist *p){
    No *aux = p->inicio;
    if(aux == NULL){
        printf("Lista vazia.\n");
        return;
    }

    printf("Musicas:\n");
    while(aux != NULL){
        printf("%s - %s\n", aux->musica.titulo, aux->musica.artista);
        aux = aux->prox;
    }
}

void exibir_playlist_invertido(Playlist *p){
    No *aux = p->fim;
    if(aux == NULL){
        printf("Lista vazia.\n");
        return;
    }

    printf("Lista invertida:\n");
    while(aux != NULL){
        printf("%s - %s\n", aux->musica.titulo, aux->musica.artista);
        aux = aux->ant;
    }
}

void verifica_se_pertence_recursivo(Playlist *p, char *titulo){
    if(p->inicio == NULL){
        printf("Musica %s nao encontrada.\n", titulo);
        return;
    }

    if(strcmp(p->inicio->musica.titulo, titulo) == 0){
        printf("A musica %s esta na playlist.\n", p->inicio->musica.titulo);
        return;
    }

    Playlist copia;
    copia.inicio = p->inicio->prox;
    verifica_se_pertence_recursivo(&copia, titulo);
}

void duracao_playlist_recursivo(Playlist *p, int *soma){
    if(p->inicio == NULL){
        printf("Duracao da playlist: %d\n", *soma);
        return;
    }

    *soma += p->inicio->musica.duracao;

    Playlist copia;
    copia.inicio = p->inicio->prox;
    duracao_playlist_recursivo(&copia, soma);
}

void destruir_playlist(Playlist *p){
    No *aux = p->fim;
    No *atual = NULL;
    if(aux == NULL){
        printf("Lista vazia.\n");
        free(p);
        printf("Playlist destruida.\n");
        return;
    }

    while(aux != NULL){
        atual = aux;
        aux =  aux->ant;
        free(atual);
    }

    p->inicio = p->fim = NULL;
    p->tam = 0;
    free(p);

    printf("Playlist destruida com sucesso.\n");
}