#include <stdio.h>
#include <string.h>

void leitordevogais(char nome[]);

int main()
{
    char nome[100];
    printf("Digite um nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    leitordevogais(nome);
    
    return 0;
}

void leitordevogais(char nome[])
{
    int i, vogal=0;
    for(i=0;nome[i]!='\0';i++)
    {
        if(nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u')
        {
            printf("%c ", nome[i]);
            vogal++;
        }
    }
    printf("\nO nome tem %d vogais", vogal);
}