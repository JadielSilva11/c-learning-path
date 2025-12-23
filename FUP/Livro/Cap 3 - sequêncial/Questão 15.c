#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, cont1, cont2;
    printf("Digite seu salario:\n");
    scanf("%f", &salario);
    printf("Digite a primeira conta a pagar:\n");
    scanf("%f", &cont1);
    printf("Agora digite a segunda conta a pagar:\n");
    scanf("%d", &cont2);
    salario = salario - (cont1+(cont1 *2/100));
    salario = salario - (cont2+(cont2 *2/100));
    printf("restante do seu salario: %.2f", salario);
    
    return 0;
}
