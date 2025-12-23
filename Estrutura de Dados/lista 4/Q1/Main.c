#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *p; 
}No;

typedef struct lista{
    No *inicio;
    int tam;
}Lista;

Lista* criar_lista();
void percorrer_lista(Lista *l);
void inserir_inicio(Lista *l, int num);
void inserir_meio(Lista *l, int num);
void inserir_fim(Lista *l, int num);
void remover_inicio(Lista *l);
void remover_meio_fim(Lista *l, int num);
void encontrar_elemento(Lista *l, int num);

int main(){
    Lista *l = criar_lista();
    inserir_inicio(l, 5);
    inserir_inicio(l, 3);
    inserir_meio(l, 4);
    inserir_meio(l, 7);
    percorrer_lista(l);
    remover_meio_fim(l, 4);
    percorrer_lista(l);
    encontrar_elemento(l, 4);
    remover_meio_fim(l, 4);
    percorrer_lista(l);
    remover_inicio(l);
    percorrer_lista(l);
    remover_meio_fim(l, 10);
    percorrer_lista(l);
    remover_inicio(l);
    percorrer_lista(l);
    remover_inicio(l);
    inserir_inicio(l, 10);
    percorrer_lista(l);

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
    printf("Elementos da lista:\n");
    if(aux != NULL){
        while(aux != NULL){
            printf("%d\n", aux->valor);
            aux = aux->p;
        }

    }else{
        printf("Lista vazia!\n");
    }
}

void encontrar_elemento(Lista *l, int num){
    No *aux = l->inicio;
    if(aux != NULL){
        while(aux != NULL && aux->valor != num){
            aux = aux->p;
        }
        if(aux == NULL){
            printf("Elemento %d nao encontrado.\n", num);
        }else{
            printf("Endereco do elemento %d: %p\n",aux->valor, (void*) aux);
        }
        
    }else{
        printf("Nao ha elementos na lista.");
    }
}

void inserir_inicio(Lista *l, int num){
    No *no = (No*) malloc(sizeof(No));
    if(no != NULL){
        no->valor = num;
        no->p = l->inicio;
        l->inicio = no;
        l->tam++;
        printf("Elemento %d inserido na lista.\n", no->valor);
    }
}

void inserir_meio(Lista *l, int num){
    No *aux = l->inicio;
    No *no_meio = (No*) malloc(sizeof(No));
    if(no_meio != NULL){
        if(aux != NULL){
            for(int i=1;i<l->tam;i++){
                if(i != (l->tam/2)){
                    aux = aux->p;
                }else{
                    no_meio->valor = num;
                    no_meio->p = aux->p;
                    aux->p = no_meio;
                    l->tam++;
                    printf("Elemento %d inserido na lista.\n", aux->valor);
                    break;
                }
            }
        }else{
            printf("Lista vazia.\n");
        }
    }else{
        printf("Nao foi possivel alocar memoria.\n");
    }
}

void inserir_fim(Lista *l, int num){
    No *aux = l->inicio;
    No *ultimo_no = (No*) malloc(sizeof(No));
    if(ultimo_no != NULL){
        if(aux != NULL){
            while(aux->p != NULL){
                aux = aux->p;
            }
            ultimo_no->valor = num;
            aux->p = ultimo_no;
            l->tam++;
        }else{
            printf("Lista vazia.\n");
        }
    }else{
        printf("Nao foi possivel alocar memoria.\n");
    }
}

void remover_inicio(Lista *l){
    No *aux = l->inicio;
    if(aux == NULL){
        printf("Lista vazia.\n");
    }else{
        l->inicio = aux->p;
        printf("Elemento %d foi removido.\n", aux->valor);
        free(aux);
        l->tam--;
    }
}

/*
void remover_meio(Lista *l, int num){
    No *aux = l->inicio;
    No *ant = NULL;
    if(aux != NULL){
        while(aux != NULL){
            if(aux->valor == num){
                ant->p = aux->p;
                free(aux);
                l->tam--;
                break;
            }else{
                ant = aux;
                aux = aux->p;
            }
        }
    }else{
        printf("Lista vazia.\n");
    }
}
*/

void remover_meio_fim(Lista *l, int num){
    No *aux = l->inicio;
    No *ant = NULL;
    if(aux != NULL){
        while(aux != NULL && aux->valor != num){
            ant = aux;
            aux = aux->p;
        }
        if(aux == NULL){
            printf("Elemento %d nao foi encontrado.\n", num);
        }else{
            ant->p = aux->p;
            printf("Elemento %d foi removido.\n", aux->valor);
            free(aux);
            l->tam--;
        }
    }else{
        printf("Lista vazia.\n");
    }
}