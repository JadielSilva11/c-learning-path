#include <stdio.h>
#include <stdlib.h>

struct data
{
    int dia;
    int mes;
    int ano;
};
typedef struct data Data;

struct pessoa
{
    char nome[20];
    int ano_nasc;
};
typedef struct pessoa Pessoa;

int main()
{
    Data d;
    printf("Digite a data atual (dd/mm/aaaa):");
    scanf("%d/%d/%d", &d.dia, &d.mes, &d.ano);

    Pessoa p[5];
    {
        for(int i=0;i<5;i++)
        {
            printf("Digite seu nome:");
            scanf("%s", p[i].nome);
            printf("Digite o ano do seu nascimento:");
            scanf("%d", &p[i].ano_nasc);
        }
    }
    
    for(int i=0;i<5;i++)
    {
        printf("Nome: %s  ", p[i].nome);
        printf("Voce tera %d anos em 2017\n", 2017-p[i].ano_nasc);
    }
    return 0;
}