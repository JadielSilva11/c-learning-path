#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int vogais(char vetor[]);

int main()
{
    srand(time(NULL));

    char vetor[30];
    printf("Um vetor de 30 espacos esta sendo preenchido com letras aleatoriamente.\n");
    for(int i=0;i<30;i++)
    {
        vetor[i] = rand()%26 + 65;
    }
    printf("No vetor existem %d vogais", vogais(vetor));
    
    return 0;
}

int vogais(char vetor[])
{
    int i, qtd=0;
    for(i=0;i<30;i++)
    {
        if(vetor[i] == 'A')
        {
            qtd++;
        }
        else if(vetor[i] == 'E')
        {
            qtd++;
        }
        else if(vetor[i] == 'I')
        {
            qtd++;
        }
        else if(vetor[i] == 'O')
        {
            qtd++;
        }
        else if(vetor[i] == 'U')
        {
            qtd++;
        }
    }
    return qtd;
}