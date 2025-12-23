#include <stdio.h>
#include <string.h>

void descodifica(char x[]);

int main()
{
    char x[20];
    printf("Digite a palavra codificada: ");
    fgets(x, sizeof(x), stdin);
    x[strcspn(x, "\n")] = '\0';

    descodifica(x);
    
    return 0;
}

void descodifica(char x[])
{
    int i;
    for(i=0;x[i]!='\0';i++) // ou da pra usar a função strlen pra contar a string
    {
        // fazer a contagem do i ate a ultima letra
    }
    printf("A palavra decodificada e: ");
    while(i>=0)
    {
        if(x[i] >= 'a' && x[i] <= 'z')
        {
            printf("%c", x[i]);
        }i--;
    }
}