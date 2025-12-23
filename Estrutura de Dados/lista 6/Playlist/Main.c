#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "playlist.h"

typedef struct musica{
    char *titulo;
    char *artista;
    int duracao;
}Musica;

int main(){
    Musica m1, m2, m3;
    m1.titulo = "scar tissue";
    m1.artista = "Red hot";
    m1.duracao = 3;

    m2.titulo = "californication";
    m2.artista = "Red hot";
    m2.duracao = 5;

    m3.titulo = "Ride";
    m3.artista = "twenty one pilots";
    m3.duracao = 2;

    Playlist *l = criar_playlist();
    adicionar_fim(l, m1);
    exibir_musicas(l);
    adicionar_fim(l, m2);
    exibir_musicas(l);
    verificar_musica(l, m3); // verificar_musica chama a funcao verificar_musica_recursiva
    duracao_playlist(l); // duracao_playlist chama a funcao duracao_playlist_recursiva
    remover_lista(l);

    return 0;
}