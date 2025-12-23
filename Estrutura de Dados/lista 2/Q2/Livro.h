#ifndef LIVRO_H
#define LIVRO_H

typedef struct livro Livro;

Livro* criar_livro(char titulo[], char autor[]);
char* obter_titulo(Livro *r);
char* obter_autor(Livro *a);
void modifica_titulo(Livro *l, char t[]);
void modifica_autor(Livro *l, char a[]);
void liberar_livro(Livro *l);

#endif