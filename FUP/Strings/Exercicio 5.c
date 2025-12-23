#include <stdio.h>
#include <string.h>

void minuscula(char *nome);

int main()
{
    char nome1[50], nome2[50], nome3[50];
    scanf("%s", nome1);
    scanf("%s", nome2);
    scanf("%s", nome3);

    minuscula(nome1);
    minuscula(nome2);
    minuscula(nome3);

    if(strcmp(nome1, nome2) < 0 && strcmp(nome1,nome3) < 0)
    {
        printf("Os nomes escritos em ordem alfabetica\n");
        puts(nome1);
        if(strcmp(nome2, nome3) < 0)
        {
            puts(nome2);
            puts(nome3);
        }
        else
        {
            puts(nome3);
            puts(nome2);
        }
    }
    else if(strcmp(nome2, nome1) < 0 && strcmp(nome2, nome3) < 0)
    {
        printf("Os nomes escritos em ordem alfabetica\n");
        puts(nome2);
        if(strcmp(nome1, nome3) < 0)
        {
            puts(nome1);
            puts(nome3);
        }
        else
        {
            puts(nome3);
            puts(nome1);
        }
    }
    else if(strcmp(nome3, nome1) < 0 && strcmp(nome3, nome2) < 0)
    {
        printf("Os nomes escritos em ordem alfabetica\n");
        puts(nome3);
        if(strcmp(nome1, nome2) < 0)
        {
            puts(nome1);
            puts(nome2);
        }
        else
        {
            puts(nome2);
            puts(nome1);
        }
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