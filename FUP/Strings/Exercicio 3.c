#include <stdio.h>

int main()
{
    char nome[50];
    int i;
    scanf("%s", nome);
    for(i=0;nome[i] != '\0';i++)
    {
        if(nome[i] == 'a' || nome[i] == 'A')
        {
            nome[i] = 52;
        }
        if(nome[i] == 'e' || nome[i] == 'E')
        {
            nome[i] = 51;
        }
        if(nome[i] == 'i' || nome[i] == 'I')
        {
            nome[i] = 49;
        }
        if(nome[i] == 'o' || nome[i] == 'O')
        {
            nome[i] = 48;
        }
        if(nome[i] == 't' || nome[i] == 'T')
        {
            nome[i] = 55;
        }
        if(nome[i] == 's' || nome[i] == 'S')
        {
            nome[i] = 53;
        }
    }
    puts(nome);
    
    return 0;
}
