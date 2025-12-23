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

void calculo(Pessoa p[]);
void imprimir(Pessoa p[]);

int main()
{
    Data d;
    Pessoa p[5];
    printf("Digite a data atual (dd/mm/aaaa):");
    scanf("%d/%d/%d", &d.dia, &d.mes, &d.ano);
    for(int i=0;i<5;i++)
    {
        printf("Digite seu nome:");
        scanf("%s", p[i].nome);
        printf("Digite o ano do seu nascimento:");
        scanf("%d", &p[i].ano_nasc);
    }

    calculo(p);
    imprimir(p);

    return 0;
}

void calculo(Pessoa p[])
{
    for(int i=0;i<5;i++)
    {
        p[i].ano_nasc = 2017 - p[i].ano_nasc;
    }
}

void imprimir(Pessoa p[])
{
    printf("Voce deseja visualizar os dados de qual pessoa? Digite o numero da pessoa na ordem em que os dados dela foram cadastrado.\n -->");
    int op;
    scanf("%d", &op);
    switch (op)
    {
        case 1:
        printf("%s tinha %d anos em 2017.\n", p[0].nome, p[0].ano_nasc);
        break;
        case 2:
        printf("%s tinha %d anos em 2017.\n", p[1].nome, p[1].ano_nasc);
        break;
        case 3:
        printf("%s tinha %d anos em 2017.\n", p[2].nome, p[2].ano_nasc);
        break;
        case 4:
        printf("%s tinha %d anos em 2017.\n", p[3].nome, p[3].ano_nasc);
        break;
        case 5:
        printf("%s tinha %d anos em 2017.\n", p[4].nome, p[4].ano_nasc);
        break;
    }
}