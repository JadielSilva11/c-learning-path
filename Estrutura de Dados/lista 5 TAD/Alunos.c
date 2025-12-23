#include <stdio.h>
#include <stdlib.h>
#include "Alunos.h"

struct aluno{
    char *nome;
    int matricula;
};

struct no{
    No *ant;
    Aluno aluno;
    No *prox;
};

struct lista{
    No *inicio;
    No *fim;
    int tam;
};

Lista* criar_lista(){
    Lista *l = (Lista*) malloc(sizeof(Lista));
    if(l == NULL){
        printf("Nao fo possivel criar a lista.\n");
        return NULL;
    }

    l->inicio = NULL;
    l->fim = NULL;
    l->tam = 0;

    return l;
}

void inserir_inicio(Lista *l, char *nome, int matricula){
    No *no = (No*) malloc(sizeof(No));
    if(no == NULL){
        printf("Nao fo possivel inserir o aluno.\n");
        return;
    }
    no->aluno.nome = nome;
    no->aluno.matricula = matricula;

    No *aux = l->inicio;
    if(aux == NULL){
        l->inicio = no;
        l->fim = no;
        no->ant = NULL;
        no->prox = NULL;
    }else{  
        no->prox = l->inicio;
        l->inicio->ant = no;
        l->inicio = no;
    }
    l->tam++;

    printf("Aluno %s inserido no inicio da lista.\n", l->inicio->aluno.nome);
}

void inserir_fim(Lista *l, char *nome, int matricula){
    No *no = (No*) malloc(sizeof(No));
    if(no == NULL){
        printf("Nao foi possivel inserir o aluno.\n");
        return;
    }
    no->aluno.nome = nome;
    no->aluno.matricula = matricula;
    no->ant = NULL;
    no->prox = NULL;

    No *aux = l->fim;
    if(aux == NULL){
        l->inicio = no;
        l->fim = no;
    }else{
        no->ant = l->fim;
        l->fim->prox = no;
        l->fim = no;
    }
    l->tam++;

    printf("Aluno %s inserido no fim da lista.\n", l->fim->aluno.nome);
}

void inserir_apos_matricula(Lista *l, char *novo_nome, int nova_matricula, int matricula){
    No *no = (No*) malloc(sizeof(No));
    if(no == NULL){
        printf("Nao foi possivel inserir o aluno.\n");
        return;
    }
    no->aluno.nome = novo_nome;
    no->aluno.matricula = nova_matricula;

    No *aux = l->inicio;
    if(aux == NULL){
        printf("Lista vazia.\n");
        return;
    }

    while(aux != NULL && aux->aluno.matricula != matricula){
        aux = aux->prox;
    }

    if(aux == NULL){
        printf("Matricula %d nao encontrada.\n", matricula);
        return;
    }

    if(aux->prox == NULL){
        no->ant = aux;
        aux->prox = no;
        l->fim = no;
    }else{
        no->prox = aux->prox;
        aux->prox->ant = no;
        aux->prox = no;
        no->ant = aux;
    }
    l->tam++;

    printf("Aluno %s inserido apos a matricula %d.\n", no->aluno.nome, matricula);
}

void remover_inicio(Lista *l){
    No *aux = l->inicio;

    if(aux == NULL){
        printf("Lista vazia.\n");
        return;
    }

    if(aux->prox == NULL){
        l->inicio = NULL;
        l->fim = NULL;
    }else{
        l->inicio = aux->prox;
        aux->prox->ant = NULL;
    }
    printf("Aluno %s removido no inicio.\n", aux->aluno.nome);

    free(aux);
    l->tam--;
}

void remover_fim(Lista *l){
    No *aux = l->fim;
    if(aux == NULL){
        printf("Lista vazia.\n");
        return;
    }

    if(aux->ant == NULL){
        l->inicio = NULL;
        l->fim = NULL;
    }else{
        l->fim = aux->ant;
        aux->ant->prox = NULL;
    }
    printf("Aluno %s removido no fim.\n", aux->aluno.nome);

    free(aux);
    l->tam--;
}

void remover_por_matricula(Lista *l, int matricula){
    No *aux = l->inicio;
    No *ant = NULL;
    if(aux == NULL){
        printf("Lista vazia.\n");
        return;
    }

    while(aux != NULL && aux->aluno.matricula != matricula){
        ant = aux;
        aux = aux->prox;
    }

    if(aux == NULL){
        printf("Aluno %d nao encontrado.\n", matricula);
        return;
    }

    if(aux == l->inicio){
        l->inicio = aux->prox;
    }else{
        aux->ant->prox = aux->prox;
    }

    if(aux == l->fim){
        l->fim = aux->ant;
    }else{
        aux->prox->ant = aux->ant;
    }

    free(aux);
    l->tam--;

    printf("Aluno %d removido.\n", matricula);
}

void imprimir_lista(Lista *l){
    No *aux = l->inicio;
    if(aux == NULL){
        printf("Lista vazia.\n");
        return;
    }

    printf("Lista:\n");
    while(aux != NULL){
        printf("Aluno: %s, matricula: %d.\n", aux->aluno.nome, aux->aluno.matricula);
        aux = aux->prox;
    }
}

void remover_duplicados(Lista *l, int matricula){
    No *aux = l->inicio;
    No *aux2 = l->inicio;
    No *ant = NULL;
    int cont = 0;

    if(aux == NULL){
        printf("Lista vazia.\n");
        return;
    }
    
    while(aux != NULL){
        aux2 = l->inicio;
        cont = 0;
        while(aux2 != NULL){
            if(aux->aluno.matricula == aux2->aluno.matricula){
                cont++;
            }
            if(cont == 2){
                if(aux2 == l->inicio){
                    l->inicio = aux2->prox;
                }else{
                    aux2->ant->prox = aux2->prox;
                }

                if(aux2 == l->fim){
                    l->fim = aux2->ant;
                }else{
                    aux2->prox->ant = aux2->ant;
                }
                printf("Aluno %d duplicado removido.\n", matricula);

                free(aux2);
                l->tam--;
            }
            ant = aux2;
            aux2 = aux2->prox;
        }
        aux = aux->prox;
    }

}

void imprimir_inverso(Lista *l){
    No *aux = l->fim;
    if(aux == NULL){
        printf("Lista vazia.\n");
        return;
    }

    printf("Lista invertida:\n");
    while(aux != NULL){
        printf("Aluno: %s, matricula: %d.\n", aux->aluno.nome, aux->aluno.matricula);
        aux = aux->ant;
    }
}