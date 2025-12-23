#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct livro
{
    char nome[50];
    char autor[50];
    int ano;
}Livro;

int main()
{
    int i;

    Livro livro[5];
    for(i=0;i<5;i++)
    {
        printf("Digite o nome do livro %d: ", i+1);
        scanf("%s", livro[i].nome);
        printf("Agora digite o nome do autor do livro: ");
        scanf("%s", livro[i].autor);
        printf("Digite o ano de publicação do livro: ");
        scanf("%d", &livro[i].ano);
    }


    if(livro[0].ano < livro[1].ano && livro[0].ano < livro[2].ano && livro[0].ano < livro[3].ano && livro[0].ano < livro[4].ano)
    {
        printf("O livro mais antigo e o %s!\n", livro[0].nome);
    }
    else if(livro[1].ano < livro[0].ano && livro[1].ano < livro[2].ano && livro[1].ano < livro[3].ano && livro[1].ano < livro[4].ano)
    {
        printf("O livro mais antigo e o %s!\n", livro[1].nome);
    }
    else if(livro[2].ano < livro[0].ano && livro[2].ano < livro[1].ano && livro[2].ano < livro[3].ano && livro[2].ano < livro[4].ano)
    {
        printf("O livro mais antigo e o %s!\n", livro[2].nome);
    }
    else if(livro[3].ano < livro[0].ano && livro[3].ano < livro[1].ano && livro[3].ano < livro[2].ano && livro[3].ano < livro[4].ano)
    {
        printf("O livro mais antigo e o %s!\n", livro[3].nome);
    }
    else
    {
        printf("O livro mais antigo e o %s!\n", livro[4].nome);
    }

    return 0;
}
