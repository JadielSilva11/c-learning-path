#include <stdio.h>

void adicionar(int matricula[], int notas[]); //Adiciona matriculas e notas dos alunos
void imprimir(int matricula[], int notas[]); //Imprime todas as matriculas e notas
void procurar(int matricula[], int notas[]); //Procura um aluno especifico a partir da matricula

int main()
{
    int matricula[10], notas[10];
    int op;

    do
    {
        printf("Qual operacao voce deseja realizar:\n");
        printf("1 - Adicionar uma matricula e nota\n2 - imprimir as matriculas e notas\n3 - Encontrar aluno pela matricula\n");
        scanf("%d", &op);

        if(op == 1)
        {  
            adicionar(matricula, notas);   
        }
        else if(op == 2)
        {
            imprimir(matricula, notas);
        }
        else if(op == 3)
        {
            procurar(matricula, notas);
        }
        printf("Deseja continuar??\n");
        printf("Sim - Digite 1\nNao - Digite 0\n");
        scanf("%d", &op);
    }while(op != 0);

    return 0;
}

void adicionar(int matricula[], int notas[])
{
    for(int i=0;i<10;i++)
    {
        printf("Digite a matricula numero %d: ", i+1);
        scanf("%d", &matricula[i]);
        printf("Digite a nota da matricula %d: ", matricula[i]);
        scanf("%d", &notas[i]);
    }
}

void imprimir(int matricula[], int notas[])
{
    printf("Matricula  |  notas\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\t      %d\n", matricula[i], notas[i]);
    }
}

void procurar(int matricula[], int notas[])
{
    int p, achou=0;
    printf("Digite a matricula do aluno: ");
    scanf("%d", &p);
    for(int i=0;i<10;i++)
    {
        if(p == matricula[i])
        {
            achou = 1;
            printf("Aluno encontrado!\n");
            printf("Matricula  |  nota\n");
            printf("%d\t      %d\n", matricula[i], notas[i]);
        }
    }
    if(achou == 0)
    {
        printf("A matricula digitada nao esta armazenada no banco de dados!\n");
    }
}