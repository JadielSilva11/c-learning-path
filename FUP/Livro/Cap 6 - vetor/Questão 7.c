#include <stdio.h>

int main()
{
    int num[10], negativos=0, soma=0, i;
    for(i=0;i<10;i++)
    {
        scanf("%d", &num[i]);
        if(num[i] < 0)
        {
            negativos++;
        }
        else
        {
            soma += num[i];
        }
    }
    printf("Total de numeros negativos: %d\n", negativos);
    printf("Soma dos numeros positivos: %d", soma);
    
    return 0;
}
