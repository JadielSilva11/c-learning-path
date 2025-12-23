#include <stdio.h>
#include <stdlib.h>
#include "Playlist.h"

int main(){
    //Q1
    Playlist *p = criar_playlist();
    Musica *m1 = criar_musica("scar tissue", "Red Hot", 3);
    Musica *m2 = criar_musica("californication", "Red Hot", 5);
    Musica *m3 = criar_musica("November rain", "Guns'n Roses", 9);
    
    adicionar_fim(p, m1);
    exibir_playlist(p);
    adicionar_fim(p, m2);
    exibir_playlist(p);
    adicionar_fim(p, m3);
    exibir_playlist(p);
    remocao_por_titulo(p, "californication");
    exibir_playlist(p);
    exibir_playlist_invertido(p);

    //Q2
    verifica_se_pertence_recursivo(p, "November rain");
    verifica_se_pertence_recursivo(p, "in the end");

    //Q3
    int soma = 0;
    duracao_playlist_recursivo(p, &soma);

    //Q4
    destruir_playlist(p);
    return 0;
}