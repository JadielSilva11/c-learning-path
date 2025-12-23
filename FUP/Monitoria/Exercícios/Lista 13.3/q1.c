#include <stdio.h>
#include <string.h>

int verificar(char lastname[]);

int main()
{
    char lastname[20];
    printf("Digite seu sobrenome abaixo:\n");
    fgets(lastname, sizeof(lastname), stdin);
    lastname[strcspn(lastname, "\n")] = '\0';

    if(verificar(lastname) == 1)
    {
        printf("Este sobrenome e dificil!\n");
    }
    else
    {
        printf("Este sobrenome nao e dificil!\n");
    }
    
    return 0;
}

int verificar(char lastname[])
{
    int num=0;
    for(int i=0;lastname[i]!='\0';i++)
    {
        if(lastname[i] != 'a' && lastname[i] != 'e' && lastname[i] != 'i' &&  lastname[i] != 'o' && lastname[i] != 'u')
        {
            if(lastname[i+1] != 'a' && lastname[i+1] != 'e' && lastname[i+1] != 'i' &&  lastname[i+1] != 'o' && lastname[i+1] != 'u')
            {
                if(lastname[i+2] != 'a' && lastname[i+2] != 'e' && lastname[i+2] != 'i' &&  lastname[i+2] != 'o' && lastname[i+2] != 'u')
                {
                    num=1;
                }
            }
        }
    }

    return num;
}