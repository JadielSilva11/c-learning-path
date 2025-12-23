#include <stdio.h>

int main()
{
    int op, cont, v, p, tv=0, tp=0, pp, vt;
    for(cont=1;cont<=15;cont++)
    {
        printf("1- comprar a vista\n2- comprar a prazo\nEscolha uma opcao: ");
        scanf("%d", &op);
        if (op == 1)
        {
            printf("Digite o preco da sua compra: ");
            scanf("%d", &v);
            tv = tv + v;
        }
        else if (op == 2)
        {
            printf("Digite o preco da sua compra: ");
            scanf("%d", &p);
            tp = tp + p;
        }
    }
    printf("O valor total das suas compras a vista: %d\n", tv);
    pp = (tp / 3);
    printf("O valor total das suas compras a prazo: %d\n", tp);
    printf("O valor da primeira prestacao das suas compras a prazo juntas: %d\n", pp);
    vt = tv + tp;
    printf("O valor total das suas compras: %d", vt);
    
    return 0;
}