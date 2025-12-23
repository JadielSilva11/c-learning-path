#include <stdio.h>
#include <string.h>

// Função que verifica se a string é um palíndromo
void palindromo(char l[], char x[]) {
    int len = strlen(l);

    // Inverte a string original e armazena em x
    for (int i = 0; i < len; i++) {
        x[i] = l[len - 1 - i];
    }
    x[len] = '\0'; // Adiciona o terminador nulo ao final da string invertida

    // Compara a string original com a string invertida
    if (strcmp(l, x) == 0) {
        printf("A string e um palindromo.\n");
    } else {
        printf("A string nao e um palindromo.\n");
    }
}

int main() {
    char l[20], x[20];

    printf("Digite uma palavra: ");
    fgets(l, sizeof(l), stdin);

    l[strcspn(l, "\n")] = '\0'; // Remove o caractere de nova linha

    palindromo(l, x);

    return 0;
}