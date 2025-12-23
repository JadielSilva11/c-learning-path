#include <stdio.h>

int main()
{
    char nome[50];
    int i;
    scanf("%s", nome);
    for(i=0;nome[i] != '\0';i++)
    {
        if(nome[i] >= 97 && nome[i] <= 122)
        {
            nome[i] -= 32;
        }
    }
    puts(nome);
    
    return 0;
}
