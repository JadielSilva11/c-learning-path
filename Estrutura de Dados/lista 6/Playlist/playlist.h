#ifndef PLAYLIST_H
#define PLAYLIST_H

typedef struct musica Musica;
typedef struct no No;
typedef struct playlist Playlist;

Playlist* criar_playlist();
void adicionar_fim(Playlist *l, Musica m);
void exibir_musicas(Playlist *l);
void verificar_musica(Playlist *l, Musica m);
void verificar_musica_recursiva(No *no, char *titulo);
void duracao_playlist(Playlist *l);
int duracao_playlist_recursiva(No *no);
void remover_lista(Playlist *l);

#endif