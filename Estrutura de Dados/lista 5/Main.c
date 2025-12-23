#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
    int matricula;
    char *nome;
}Aluno;

typedef struct no{
    struct no *ant;
    Aluno aluno;
    struct no *prox;
}No;

typedef struct lista{
    No *inicio;
    No *fim;
    int tam;
}Lista;

Lista* criar_lista();
void percorrer_lista(Lista *l);
void inserir_inicio(Lista *l, Aluno *alu);
void inserir_fim(Lista *l, Aluno *alu);
int inserir_meio(Lista *l, Aluno *alu, int matricula);
void remocao_inicio(Lista *l);
void remocao_fim(Lista *l);
void remocao_matricula(Lista *l, int matricula);
void percorrer_invertido(Lista *l);

int main(){
    Lista *l = criar_lista();

    Aluno alu1, alu2, alu3;
    alu1.matricula = 12345;
    alu1.nome = "Raimundao";

    alu2.matricula = 56789;
    alu2.nome = "Bebeto";

    alu3.matricula = 22222;
    alu3.nome = "xuxu";

    inserir_inicio(l, &alu1);
    percorrer_lista(l);
    inserir_fim(l, &alu2);
    percorrer_lista(l);
    inserir_meio(l, &alu3, 56789);
    percorrer_lista(l);
    percorrer_invertido(l);
    remocao_inicio(l);
    remocao_fim(l);
    remocao_matricula(l, 22222);
    remocao_matricula(l, 56789);

    remocao_inicio(l);
    remocao_fim(l);
    remocao_matricula(l, 56789);
    percorrer_lista(l);

    return 0;
}

Lista* criar_lista(){
    Lista *l = (Lista*) malloc(sizeof(Lista));
    if(l == NULL){
        printf("Nao foi possivel criar a lista");
        return NULL;
    }
    l->inicio = NULL;
    l->fim = NULL;
    l->tam = 0;

    printf("Lista criada com sucesso.\n");

    return l;
}

void percorrer_lista(Lista *l){
    No *aux = l->inicio;
    if(aux == NULL){
        printf("Lista vazia.\n");
        return;
    }
    printf("Lista:\n");
    while(aux != NULL){
        printf("Nome: %s, matricula: %d\n", aux->aluno.nome, aux->aluno.matricula);
        aux = aux->prox;
    }
}

void inserir_inicio(Lista *l, Aluno *alu){
    No *no = (No*) malloc(sizeof(No));
    if(no == NULL){
        printf("Nao foi possivel inserir o aluno.\n");
        return;
    }
    no->aluno = *alu;

    if(l->inicio == NULL){
        l->inicio = no;
        l->fim = no;
        no->prox = NULL;
    }else{
        no->prox = l->inicio;
        no->prox->ant = no; // Ou l->inicio->ant = no
        l->inicio = no;
    }
    no->ant = NULL;
    l->tam++;

    printf("Aluno %s inserido com sucesso.\n", no->aluno.nome);
}

void inserir_fim(Lista *l, Aluno *alu){
    No *no = (No*) malloc(sizeof(No));
    if(no == NULL){
        printf("Nao foi possivel inserir o aluno.\n");
        return;
    }
    no->aluno = *alu;

    if(l->fim == NULL){
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

    printf("Aluno %s inserido com sucesso.\n", no->aluno.nome);
}

int inserir_meio(Lista *l, Aluno *alu, int matricula){
    No *no = (No*) malloc(sizeof(No));
    if(no == NULL){
        printf("Nao foi possivel inserir o aluno.\n");
        return 0;
    }
    no->aluno = *alu;
    No *aux = l->inicio;
    if(aux == NULL){
        printf("Lista vazia.\n");
    }else{
        while(aux != NULL && aux->aluno.matricula != matricula){
            aux = aux->prox;
        }
        if(aux == NULL){
            printf("Matricula %d nao encontrada.\n", matricula);
            return 0;
        }else{
            no->ant = aux;
            no->prox = aux->prox;

            if(aux->prox != NULL){
                no->prox->ant = no;
            }else{
                l->fim = no;
            }
            aux->prox = no;

            l->tam++;
            printf("Aluno %s inserido depois do %s.\n", no->aluno.nome, no->ant->aluno.nome);
            return 1;
        }
    }
}

void remocao_inicio(Lista *l){
    if(l->inicio == NULL){
        printf("Lista vazia.\n");
        return;
    }
    No *aux = l->inicio;
    l->inicio = aux->prox;
    aux->prox->ant = NULL;
    free(aux);
    l->tam--;

    printf("Primeiro aluno removido com sucesso.\n");
}

void remocao_fim(Lista *l){
    if(l->fim == NULL){
        printf("Lista vazia.\n");
        return;
    }
    No *aux = l->fim;
    l->fim = aux->ant;
    l->fim->prox = NULL;
    free(aux);
    l->tam--;

    printf("Ultimo aluno removido com sucesso.\n");
}

void remocao_matricula(Lista *l, int matricula){
    No *aux = l->inicio;
    if(aux == NULL){
        printf("Lista vazia.\n");
        return;
    }
    while(aux != NULL && aux->aluno.matricula != matricula){
        aux = aux->prox;
    }
    if(aux == NULL){
        printf("Aluno nao encontrado.\n");
        return;
    }
    
    if(aux->ant == NULL){ // inicio
        if(aux->prox != NULL){
            l->inicio = aux->prox;
            l->inicio->ant = NULL;
        }else{
            l->inicio = NULL;
            l->fim = NULL;
        }

    }else if(aux->prox != NULL){ // meio
        aux->ant->prox = aux->prox;
        aux->prox->ant = aux->ant;
    }
    else{ // fim
        l->fim = aux->ant;
        l->fim->prox = NULL;
    }
    printf("Aluno %s removido pela matricula.\n", aux->aluno.nome);

    free(aux);
    l->tam--;
}

void percorrer_invertido(Lista *l){
    No *aux = l->fim;
    if(aux == NULL){
        printf("Lista vazia.\n");
        return;
    }
    printf("Lista invertida.\n");
    while(aux != NULL){
        printf("Nome: %s, matricula: %d\n", aux->aluno.nome, aux->aluno.matricula);
        aux = aux->ant;
    }
}