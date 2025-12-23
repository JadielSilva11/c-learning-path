#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[10][10];
    int cod[10];
    float preco[10];
    int i;
    
    for(i=0;i<10;i++)
    {
        printf("Digite o nome do produto: ");

        fgets(name[i], sizeof(name[i]), stdin);
        name[i][strcspn(name[i], "\n")] = '\0';

        printf("Digite tambem o codigo desse produto: ");
        scanf("%d", &cod[i]);

        printf("Agora digite o valor desse produto: ");
        scanf("%f", &preco[i]);

        while (getchar() != '\n');
    }
        

    for(i=0;i<10;i++)
    {
        if(cod[i] % 2 == 0 && preco[i] <= 1000)
        {
            preco[i] += (0.15 * preco[i]);
            printf("%s - ", name[i]);
            printf("codigo: %d ", cod[i]);
            printf("novo preco: %.2f\n\n", preco[i]);
        }
        else if(cod[i] % 2 != 0 && preco[i] > 1000)
        {
            preco[i] += (0.10 * preco[i]);
            printf("%s - ", name[i]);
            printf("codigo: %d ", cod[i]);
            printf("novo preco: %.2f\n\n", preco[i]);
        }
        else if(cod[i] % 2 == 0 && preco[i] > 1000)
        {
            preco[i] += (0.20 * preco[i]); 
            printf("%s - ", name[i]);
            printf("codigo: %d ", cod[i]);
            printf("novo preco: %.2f\n\n", preco[i]);
        }
    }

    return 0;
}