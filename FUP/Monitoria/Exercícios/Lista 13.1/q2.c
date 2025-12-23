#include <stdio.h>
#include <string.h>

void contagem(char l[], char c);

int main()
{
    char l[20], c;
    printf("Digite uma palavra: ");
    fgets(l, sizeof(l), stdin);

    l[strcspn(l, "\n")] = '\0';

    printf("Digite qual caracter deseja contar: ");
    scanf(" %c", &c);

    contagem(l, c);
    
    return 0;
}

void contagem(char l[], char c)
{
    int num=0;
    for(int i=0;l[i]!='\0';i++)
    {
        if(l[i] == c)
        {
            num++;
        }
    }
    printf("O caracter %c se repete %d vezes na palavra.", c, num);
}