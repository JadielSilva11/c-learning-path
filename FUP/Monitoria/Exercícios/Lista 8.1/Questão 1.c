#include <stdio.h>

float lanchonete();

int main()
{
    lanchonete();
    
    return 0;
}

float lanchonete()
{
    int codigo, qtdd;
    float total;
    printf("\tmenu\n1- Hamburguer  5,00\n2- Pastel      4,00\n3- Coxinha     4,50\n4- Suco        3,00\n5- Agua        2,00\n6- Cafe        2,50\n");
    printf("Digite o codigo do produto desejado: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade de produtos que deseja comprar: ");
    scanf("%d", &qtdd);
    if (codigo == 1)
    {
        total = qtdd * 5;
        printf("O valor total e: %.1f reais", total);
    }
    else if (codigo == 2)
    {
        total = qtdd * 4; 
        printf("O valor total e: %.1f reais", total);
    }
    else if (codigo == 3)
    {
        total = qtdd * 4.5;
        printf("O valor total e: %.1f reais", total);
    }
    else if (codigo == 4)
    {
        total = qtdd * 3;
        printf("O valor total e: %.1f reais", total);
    }
    else if (codigo == 5)
    {
        total = qtdd * 2;
        printf("O valor total e: %.1f reais", total);
    }
    else if (codigo == 6)
    {
        total = qtdd * 2.5;
        printf("O valor total e: %.1f reais", total);
    }
    return total;
}
