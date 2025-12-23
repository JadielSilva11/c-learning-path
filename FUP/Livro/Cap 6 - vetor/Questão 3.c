#include <stdio.h>

int main()
{
    int produto[10], qtdd[10];
    int i, op, cc, qtdd_c;
    for(i=0;i<10;i++)
    {
        printf("Digite o codigo do produto: ");
        scanf("%d", &produto[i]);
        printf("Digite a quatidade desse produto no estoque: ");
        scanf("%d", &qtdd[i]);
    } 
    do
    {
        printf("Digite o codigo do produto que deseja comprar: ");
        scanf("%d", &cc);
        if (cc > 9)
        {
            printf("Codigo inexistente\n");
        }
        else 
        {
            for(i=0;i<=9;i++)
            {
                if (cc == produto[i])
                {
                    if(qtdd[i] == 0)
                    {
                        printf("Nao temos estoque suficiente dessa mercadoria\n");
                    }
                    else 
                    {
                        printf("quantos produtos voce deseja: ");
                        scanf("%d", &qtdd_c);
                        qtdd[i] = qtdd[i] - qtdd_c;
                    }
                }
            }
        }
        printf("Deseja comprar mais alguma coisa?\nDigite 1 para 'sim' e 0 para 'nao'\n");
        scanf("%d", &op);
    }while(op != 0);
    printf("Pedido Atendido. Obrigado e volte sempre.\n");
    
    return 0;
}