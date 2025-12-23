#include <stdio.h>

int main()
{
    int salario_m, salario_f, salario;
    printf("Digite o valor do salario minimo:\n");
    scanf("%d", &salario_m);
    printf("Digite o valor do seu salario:\n");
    scanf("%d", &salario_f);
    for(salario=1;salario_m<salario_f;salario++)
    {
        salario_f =(salario_f-salario_m);
    }
    printf("Voce recebe %d salarios minimos", salario);
    
    return 0;
}
