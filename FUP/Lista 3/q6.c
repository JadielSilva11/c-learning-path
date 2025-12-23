#include <stdio.h>
#include <stdlib.h>

int main()
{
    int notas[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 8, 9, 5, 4, 9, 10, 8, 4, 7, 10};

    int contagem=0;
    float media=0;
    for(int i=0;i<20;i++)
    {
        media += notas[i];
    }

    media /= 20;

    printf("A nota dos alunos deve ser maior do que a media da sala!!\n");
    printf("Media da sala: %.2f\n\n", media);

    for(int i=0;i<20;i++)
    {
        if(notas[i] > media)
        {
            contagem++;
        }
    }

    printf("%d alunos conseguiram ter a nota maior do que a media da sala!\n", contagem);

    return 0;
}
