#include <stdio.h>
#include <stdlib.h>
#include "Alunos.h"

int main(){
    Lista *l = criar_lista();
    inserir_inicio(l, "Jadiel", 123);
    imprimir_lista(l);
    inserir_inicio(l, "Xuxu", 231);
    imprimir_lista(l);
    inserir_fim(l, "Gabriel", 222);
    imprimir_lista(l);
    inserir_apos_matricula(l, "Lucas", 555, 231);
    imprimir_lista(l);
    inserir_apos_matricula(l, "Lucas", 555, 231);
    imprimir_lista(l);
    remover_inicio(l);
    imprimir_lista(l);
    remover_fim(l);
    imprimir_lista(l);
    remover_por_matricula(l, 123);
    imprimir_lista(l);
    remover_duplicados(l, 555);
    inserir_inicio(l, "Jadiel", 123);
    inserir_fim(l, "Gabriel", 222);
    imprimir_lista(l);
    imprimir_inverso(l);

    return 0;
}