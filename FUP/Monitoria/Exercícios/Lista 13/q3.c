#include <stdio.h>
#include <string.h>

int main()
{
    char nome[10], copia[10];
    int i;

    printf("Digite um nome: ");
    fgets(nome, sizeof(nome), stdin);

    for(i=0;nome[i]!='\0';i++)
    {
        copia[i] = nome[i];
    }
    copia[i] = '\0';

    printf("nome: %s", nome);
    printf("copia do nome: %s", copia);
    
    return 0;
}
