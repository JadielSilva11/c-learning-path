#include <stdio.h>

int main()
{
    int x, y, op;
    printf("Digite dois numeros:\n");
    printf("X: ");
    scanf("%d", &x);
    printf("Y: ");
    scanf("%d", &y);
    printf("\t\tMENU\n");
    printf("1-media dos dois numeros\n2-subtracao do maior pelo menor\n3-multiplicacao dos dois numeros\n4-divisao dos dois numeros\n");
    scanf("%d", &op);
    if(op==1)
    {
        float media;
        media = (x + y)/2;
        printf("media de dois numeros: %.2f", media);
    }
    else if(op==2)
    {
        int sub;
        if(x > y)
        {
            sub = x - y;
            printf("subtracao: %d", sub);
        }
        else
        {
            sub = y - x;
            printf("subtracao: %d", sub);
        }
    }
    else if(op==3)
    {
        int multi;
        multi = x * y;
        printf("multiplicacao: %d", multi);
    }
    else if(op==4)
    {
        float div;
        div = x / y;
        printf("divisao: %.2f", div);
    }
    else 
    {
        printf("opcao invalida!!!!");
    }

    return 0;
}
