#include <stdio.h>
#include <string.h>

/*
    Como funciona a Cifra de César:
        - Recebe um texto qualquer
        - Gera uma chave aleatória e fixa
        - Para cada caracter, avança k valores, sendo k o valor da chave 

        Cifra de César matemáticamente:
            C(n, k) = n + k mod 26
        onde,
            n: Caractere do alfabeto a ser cifrado (0 à 25)
            k: Valor da chave de troca
            mod 26: Pega o resto da divisão por 26 (25 neste caso por começar do 0) para valores de n maior que 26, para valores menores retorna a própria soma
*/

int main() {
    int k;
    char s[200], c[200];

    printf("Digite a palavra: ");
    scanf("%s", s);

    printf("Digite a chave: ");
    scanf("%d", &k);

    k = k % 26; // Garante que a chave se mantenha entre 0 e 26

    // ALFABETO MINÚSCULO: 97 à 122

    int i;
    for(i=0;s[i]!='\0';i++){
        if(s[i] + k <= 122) {
            c[i] = s[i] + k;
        } 
        else if(s[i] + k > 122) {
            c[i] = 96 + ((s[i] + k) - 122);
        }
    }

    c[i] = '\0';

    printf("Texto cifrado: %s\n", c);

    return 0;
}