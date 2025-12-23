#include <stdio.h>
#include <stdlib.h>

void alterar_letra(char *p, int *n);

int main()
{
    int num;
    char letra;
    printf("Digite uma letra do alfabeto: ");
    scanf("%c", &letra);
    printf("Digite um numero referente a quantas vezes a letra vai mudar: ");
    scanf("%d", &num);

    alterar_letra(&letra, &num);

    printf("Letra apos a mudanca: %c\n", letra);
    
    return 0;
}

void alterar_letra(char *p, int *n)
{
    *p += *n;
}