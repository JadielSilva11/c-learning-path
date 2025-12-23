#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[10];
    int caracter=0;
    printf("Digite um nome: ");
    fgets(x, sizeof(x), stdin);
    for(int i=0;x[i]>=65&&i<=90;i++)
    {
        caracter++;
    }
    printf("quantidade de caracteres no nome: %d", caracter);
    
    return 0;
}
