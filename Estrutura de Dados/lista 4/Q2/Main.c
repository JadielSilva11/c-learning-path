#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct livro{
    char *titulo;
    char *autor;    
}Livro;

typedef struct no{
    Livro l;
    struct no *prox;
}No;

typedef struct lista{
    int tam;
    No *inicio;
}Lista;

Lista* criar_lista();
void percorrer_lista(Lista *l);
void inserir_inicio(Lista *l, Livro *book);
void encontrar_livro(Lista *l, char *titulo);
void remover_livro(Lista *l, char *titulo);

int main(){
    Livro book1, book2, book3;
    
    book1.titulo = "xuxuzinhos";
    book1.autor = "Jadiel";

    book2.titulo = "Obede Sigma";
    book2.autor = "Raimundao";

    book3.titulo = "Truque de mestre";
    book3.autor = "Sei nao";

    Lista *l = criar_lista();
    percorrer_lista(l);
    inserir_inicio(l, &book1);
    inserir_inicio(l, &book2);
    inserir_inicio(l, &book3);
    percorrer_lista(l);
    encontrar_livro(l, "Obede Sigma");
    encontrar_livro(l, "Obede raivoso");
    remover_livro(l, "Truque de mestre");
    remover_livro(l, "As Branquelas");

    return 0;
}

Lista* criar_lista(){
    Lista *l = (Lista*) malloc(sizeof(Lista));
    if(l != NULL){
        l->inicio = NULL;
        l->tam = 0;

        return l;
    }
}

void percorrer_lista(Lista *l){
    No *aux = l->inicio;
    if(aux == NULL){
        printf("Lista vazia!\n");
        return;
    }
    printf("Elementos da lista:\n");
    while(aux != NULL){
        printf("Livro: %s\nAutor: %s\n\n", aux->l.titulo, aux->l.autor);
        aux = aux->prox;
    }
}

void inserir_inicio(Lista *l, Livro *book){
    No *no = (No*) malloc(sizeof(No));
    if(no == NULL){
        printf("Nao fo possivel alocar memoria.\n");
        return;
    }
    No *aux = l->inicio;
    no->l = *book;
    no->prox = aux;
    l->inicio = no;
    l->tam++;
}

void encontrar_livro(Lista *l, char *titulo){
    No *aux = l->inicio;
    if(aux == NULL){
        printf("Lista Vazia.\n");
        return;
    }
    while(aux != NULL && strcmp(aux->l.titulo, titulo) != 0){
        aux = aux->prox;
    }
    if(aux == NULL){
        printf("Livro %s nao encontrado.\n", titulo);
    }else{
        printf("Livro %s encontrado no endereco: %p.\n", aux->l.titulo, (void*) aux);
    }
}

void remover_livro(Lista *l, char *titulo){
    No *aux = l->inicio;
    No *ant = NULL;
    if(aux == NULL){
        printf("Lista vazia.\n");
        return;
    }
    while(aux != NULL && strcmp(aux->l.titulo, titulo) != 0){
        ant = aux;
        aux = aux->prox;
    }
    if(aux == NULL){
        printf("Livro %s nao encontrado.\n", titulo);
    }else{
        ant->prox = aux->prox;
        free(aux);
        printf("Livro %s removido.\n", titulo);
        l->tam--;
    }

}