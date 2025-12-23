#ifndef PLAYLIST_H
#define PLAYLIST_H

typedef struct musica Musica;
typedef struct no No;
typedef struct playlist Playlist;

Playlist* criar_playlist();
Musica* criar_musica(char *titulo, char *artista, int duracao);
void adicionar_fim(Playlist *p, Musica *m);
void remocao_por_titulo(Playlist *p, char *titulo);
void exibir_playlist(Playlist *p);
void exibir_playlist_invertido(Playlist *p);
void verifica_se_pertence_recursivo(Playlist *p, char *titulo);
void duracao_playlist_recursivo(Playlist *p, int *soma);
void destruir_playlist(Playlist *p);

#endif