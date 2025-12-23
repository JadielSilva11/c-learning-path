#include <stdio.h>
#include <string.h>

void minuscula(char *nome);

int main()
{
    char nome1[50], nome2[100];
    scanf("%s", nome1);
    scanf("%s", nome2);

    minuscula(nome1);
    minuscula(nome2);

    if(strcmp(nome1, nome2) < 0)
    {
        printf("Os nomes escritos em ordem alfabetica\n");
        puts(nome1);
        puts(nome2);
    }
    else
    {
        printf("Os nomes escritos em ordem alfabetica\n");
        puts(nome2);
        puts(nome1);
    }

    return 0;
}

void minuscula(char *nome)
{
    int i;
    for(i=0;nome[i] != '\0';i++)
    {
        if(nome[i] >= 65 && nome[i] <= 90)
        {
            nome[i] += 32;
        }
    }
}