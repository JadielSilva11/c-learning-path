#include <stdio.h>

int main()
{
    int num[6];
    int i, par=0, impar=0;
    for(i=0;i<6;i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
        if(num[i] % 2 == 0)
        {
            printf("numero par\n");
            par++;
        }
        else 
        {
            printf("numero impar\n");
            impar++;
        }
    }
    printf("Total de numeros pares digitados: %d\n", par);
    printf("Total de numeros impares digitados: %d", impar);
    
    return 0;
}
