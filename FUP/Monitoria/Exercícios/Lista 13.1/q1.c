#include <stdio.h>
#include <string.h>

void transformar(char l[], char op);

int main()
{
    char string[10], op;

    printf("Digite uma palavra: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = '\0';

    printf("Como voce deseja visualizar essa palavra:\n");
    printf("1 - Maiuscula // Digite 'u'\n2 - Minuscula // Digite 'l'\n");
    scanf(" %c", &op);

    transformar(string, op);
    
    return 0;
}

void transformar(char l[], char op)
{
    for(int i=0;l[i]!='\0';i++)
    {
        if(op == 'u' || op == 'U')
        {
            l[i] -= 32;
        }
    }
    puts(l);
}