#include <stdio.h>
#include <stdlib.h>
#include "livro.h"

int main(){
    Livro *l = criar_livro("As aventuras de Obede Sigma", "Jadiel");

    printf("Titulo do livro: %s\n", obter_titulo(l));
    printf("Nome do autor: %s\n", obter_autor(l));

    modifica_titulo(l, "Obede sigma e a pedra fisolofal");
    modifica_autor(l, "Maikin");

    printf("Titulo do livro apos mudanca: %s\n", obter_titulo(l));
    printf("Nome do autor apos mudanca: %s\n", obter_autor(l));

    liberar_livro(l);
    l = NULL;

    if(l == NULL){
        printf("Memoria liberada!\n");
    }

    return 0;
}