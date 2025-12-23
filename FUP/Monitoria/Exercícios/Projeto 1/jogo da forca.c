#include <stdio.h>
#include <string.h>

int main()
{
    char secreta[20];
    int qtdd, vitorias=0, derrotas=0, op;
    char tentativa[20];
    
    do
    {
        printf("Digite a palavra secreta: ");
        fgets(secreta, sizeof(secreta), stdin);

        secreta[strcspn(secreta, "\n")] = '\0';

        qtdd=5;
        int num = strlen(secreta);
        printf("Tente adivinhar a palavra! Voce tem 5 chances.\n");
        printf("A palavra tem %d letras.\n > ", num);
        for(int i=1;i<=num;i++)
        {
            printf("*");
        }
        printf("\n");

        do
        {
            fgets(tentativa, sizeof(tentativa), stdin);
            tentativa[strcspn(tentativa, "\n")] = '\0';

            if(strcmp(tentativa, secreta) == 0)
            {
                printf("voce acertou!\n");
                vitorias++;
                break;
            }
            else
            {
                printf("Voce errou.\n");
                qtdd--;
                printf("Voce tem %d tentativas.\n", qtdd);
                for(int i2=0;secreta[i2]!='\0';i2++)
                {
                    if(tentativa[i2] == secreta[i2])
                    {
                        printf("%c", tentativa[i2]);
                    }
                    else
                    {
                        printf("*");
                    }
                }
                printf("\n");  
            }

        
        } while(qtdd > 0);

        if(qtdd == 0)
        {
            printf("Suas tentativas se esgotaram!!\nA palavra era %s\nTalvez na proxima.\n", secreta);
            derrotas++;
        }
    
        printf("\nVitorias - %d\nDerrotas - %d\n\n", vitorias, derrotas);

        printf("Deseja jogar novamente?\nSim - digite 1\nNao - Digite 0\n");
        scanf("%d", &op);
        getchar();

    } while (op == 1);

    return 0;
}