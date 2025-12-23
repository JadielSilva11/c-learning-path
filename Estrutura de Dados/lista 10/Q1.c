#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int chave;
	struct no *esq;
	struct no *dir;
}No;

typedef struct arv{
	No *raiz;	
}Arv;

Arv* criar_arv();
No* inserir(No *raiz, int chave);
void em_ordem(No *raiz);
int buscar(No *no, int valor);

int main(){
	Arv *arv = criar_arv();
	No *raiz = arv->raiz;

	raiz = inserir(raiz, 50);
	raiz = inserir(raiz, 30);
	raiz = inserir(raiz, 70);
	raiz = inserir(raiz, 20);
	raiz = inserir(raiz, 40);
	raiz = inserir(raiz, 60);
	raiz = inserir(raiz, 80);

	printf("%d\n", buscar(raiz, 40));
	printf("%d\n", buscar(raiz, 25));
	printf("%d\n", buscar(raiz, 60));
	
	printf("Arvore: ");
	em_ordem(raiz);

	return 0;
}

Arv* criar_arv(){
	Arv *arv = (Arv*) malloc(sizeof(Arv));
	if(arv == NULL){
		printf("Nao foi possivel criar a arvore.\n");
		return NULL;
	}	
	arv->raiz = NULL;

	return arv;
}

No* inserir(No *raiz, int chave){
	if(raiz == NULL){
		No *no = (No*) malloc(sizeof(No));
		if(no != NULL){
			no->chave = chave;
			no->esq = NULL;
			no->dir = NULL;
			return no;
		}return NULL;
	}

	if(chave < raiz->chave){
		raiz->esq = inserir(raiz->esq, chave);
	}else if(chave > raiz->chave){
		raiz->dir = inserir(raiz->dir, chave);
	}

	return raiz;
		
}

void em_ordem(No *raiz){
	if(raiz != NULL){
		em_ordem(raiz->esq);
		printf("%d ", raiz->chave);
		em_ordem(raiz->dir);
	}
}

int buscar(No *no, int valor){
	if(no == NULL){
		printf("Nao foi possivel encotrar o valor desejado.\n");
		return 0;
	}

	if(valor < no->chave){
		buscar(no->esq, valor);
	}else if(valor > no->chave){
		buscar(no->dir, valor);
	}else{
		printf("Valor encontrado na posicao %p.\n", raiz);
	}
	
	return 1;
}