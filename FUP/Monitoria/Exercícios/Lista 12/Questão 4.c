#include <stdio.h>

int main()
{
    char letra[7], op;
    int i, encontrada;
    for(i=0;i<7;i++)
    {
        printf("Digite uma letra: ");
        scanf(" %c", &letra[i]);
    }
    printf("Voce deseja encontrar qual caracter dentre os digitados anteriormente: ");
    scanf(" %c", &op);
    for(i=0;i<7;i++)
    {
        if(op == letra[i])
        {
            encontrada = 1;
            break;
        }
    }
    if(encontrada ==  1)
    {
        printf("letra encontrada.\n");
    }
    else
    {
        printf("letra nao encontrada.\n");
    }

    return 0;
}
