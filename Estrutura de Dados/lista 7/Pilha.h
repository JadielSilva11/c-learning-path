#ifndef PILHA_H
#define PILHA_H

typedef struct pilha Pilha;
typedef struct no No;

Pilha* criar_pilha();
void push(Pilha *p, char *texto);
char* pop(Pilha *p);
char* peek(Pilha *p);
void destruir_pilha(Pilha *p);  

#endif