#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

int main(){
    Pilha *p = criar_pilha();
    push(p, "Jadiel");
    push(p, "Vitoria");
    push(p, "Isabela");
    printf("%s\n", peek(p));
    destruir_pilha(p);

    return 0;
}