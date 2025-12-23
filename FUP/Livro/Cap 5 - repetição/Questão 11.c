#include <stdio.h>

int main()
{
    int op, qtdd_p;
    float preco_c, preco_f, valor_p, por=0.03;

    printf("Qual o valor do carro desejado: ");
    scanf("%f", &preco_c);
    printf("1- A vista\n2- A prazo\n");
    printf("De que maneira voce deseja realizar o pagamento (A vista voce obtem 20%% de desconto): ");
    scanf("%d", &op);
    if (op == 1)
    {
        preco_f = preco_c - (preco_c * 0.2);
        printf("Preco final do carro: %.2f", preco_f);
    }
    else if (op == 2)
    {
        printf("\nPreco final     |     Qtdd de Parcelas    |    Valor das Parcelas    |\n");
        for(qtdd_p=6;qtdd_p<=60;qtdd_p+=3)
        {
            preco_f = preco_c + (preco_c * por);
            printf("%.2f\t\t|\t", preco_f);
            printf("%d\t\t  |\t", qtdd_p);
            valor_p = preco_f / qtdd_p;
            printf("%.2f\t\t     |\n", valor_p);
            por = por + 0.03;
        }
    }
    else
    {
        printf("Operacao invalida. Digite 1 ou 2!");
    }
    
    return 0;
}
