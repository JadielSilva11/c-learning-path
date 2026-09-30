#include <stdio.h>
#include <string.h>

/*
    Como funciona:
    - Recebe uma palavra
    - Recebe uma chave (qtd de linhas)
    - Cria uma matriz [n][m], sendo n o número de linhas e m as letras da palavra
    - dispõe as letras da palavra em diagonal pela matriz e depois junta as letras por linha 
*/

void cifraRailFence(char p[], int n, int m) {
    char matriz[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            matriz[i][j] = '_';
        }
    }

    int i=0, j=0;
    while(j < m){
        while(i < n && j < m){
            matriz[i][j] = p[j];
            i++;
            j++;
        }

        i-=2;
        
        while(i > 0 && j < m){
            matriz[i][j] = p[j];
            j++;
            i--;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n, m, count=0;
    char p[100];

    printf("Digite a palavra: ");
    scanf(" %[^\n]", p);

    for (int i = 0; p[i] != '\0'; i++) {
        if (p[i] != ' ') {
            p[count] = p[i];
            count++;
        }
    }

    p[count] = '\0';

    m = strlen(p);

    printf("Digite a chave de cifração: ");
    scanf("%d", &n);

    cifraRailFence(p, n, m);

    return 0;
}