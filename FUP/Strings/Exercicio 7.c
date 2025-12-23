#include <stdio.h>
#include <string.h>

void nomeaocontrario(char nome[]);

int main()
{
    char nome[100];
    printf("Digite seu primeiro nome: ");
    gets(nome);
    nome[strcspn(nome, "\n")] = '\0'; // desconsidera o enter que o usuario digita
    nomeaocontrario(nome);

    return 0;
}

void nomeaocontrario(char nome[])
{
    int i;
    int len = strlen(nome); // strlen calcula o tamanho da string
    printf("Seu nome ao contrario: ");
    for(i=len-1;i>=0;i--) // len-1 é pra desconsiderar o caractere nulo '\0'
    {
        printf("%c", nome[i]);
    }
}