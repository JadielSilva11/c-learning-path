#include <stdio.h>

int idademinima(int id, char sexo);
int contribuicao(int con, char sexo);

int main()
{
    int id, con;
    char sexo;
    printf("Qual o seu sexo(m ou f): ");
    scanf(" %c", &sexo);
    printf("Digite sua idade: ");
    scanf("%d", &id);
    printf("Digite seus anos de contribuicao: ");
    scanf("%d", &con);
    if (idademinima(id, sexo) == 1 )
    {
        printf("Na sua idade voce esta abto a receber aposento!\n");
    }
    else 
    {
        printf("faltam %d anos para voce chegar na idade minima!\n", idademinima(id, sexo));
    }
    if (contribuicao(con, sexo) == 1)
    {
        printf("Voce ja realizou todos os anos de contribuicao!\n");
    }
    else 
    {
        printf("faltam %d anos de contribuicao!\n", contribuicao(con, sexo));
    }
    
    return 0;
}

int idademinima(int id, char sexo)
{
    int r;
    if (sexo == 'm')
    {
        if (id < 65)
        {
            r = 65 - id;
        }
        else
        {
            r=1;
        }
    }
    if (sexo == 'f')
    {
        if (id < 62)
        {
            r = 62 - id;
        }
        else 
        {
            r=1;
        }
    }

    return r;
}

int contribuicao(int con, char sexo)
{
    int r;
    if (sexo == 'm')
    {
        if (con < 20)
        {
            r = 20 - con;
        }
        else
        {
            r = 1;
        }
    }
    if (sexo == 'f')
    {
        if (con < 15)
        {
            r = 15 - con;
        }
        else 
        {
            r = 1;
        }
    }

    return r;
}