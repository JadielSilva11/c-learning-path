#ifndef ALUNOS_H
#define ALUNOS_H

typedef struct aluno Aluno;
typedef struct no No;
typedef struct lista Lista;

Lista* criar_lista();
void inserir_inicio(Lista *l, char *nome, int matricula);
void inserir_fim(Lista *l, char *nome, int matricula);
void inserir_apos_matricula(Lista *l, char *novo_nome, int nova_matricula, int matricula);
void remover_inicio(Lista *l);
void remover_fim(Lista *l); 
void remover_por_matricula(Lista *l, int matricula);
void imprimir_lista(Lista *l);
void remover_duplicados(Lista *l, int matricula);
void imprimir_inverso(Lista *l);

#endif