#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1[10] = {4, 7, 5, 8, 2, 15, 9, 6, 10, 11};
    int v2[5] = {3, 4, 5, 8, 2};
    int resultante1[50] = {0}, resultante2[5] = {0};
    int i, i2, cont = 0, cont2 = 0;

    // Preencher resultante1 com a soma dos elementos pares de v1 e todos os elementos de v2
    for (i = 0; i < 10; i++)
    {
        if (v1[i] % 2 == 0)
        {
            for (i2 = 0; i2 < 5; i2++)
            {
                resultante1[cont] = v1[i] + v2[i2];
                cont++;
            }
        }
    }

    // Preencher resultante2 com elementos únicos de v2 que são divisores dos elementos ímpares de v1
    for (i = 0; i < 10; i++)
    {
        if (v1[i] % 2 != 0)
        {
            for (i2 = 0; i2 < 5; i2++)
            {
                if (v1[i] % v2[i2] == 0)
                {
                    // Adicionar apenas valores únicos e garantir o tamanho máximo
                    int is_unique = 1;
                    for (int k = 0; k < cont2; k++)
                    {
                        if (resultante2[k] == v2[i2])
                        {
                            is_unique = 0;
                            break;
                        }
                    }
                    if (is_unique)
                    {
                        resultante2[cont2] = v2[i2];
                        cont2++;
                        if (cont2 >= 5) break; // Garantir que não excedemos o tamanho de resultante2
                    }
                }
            }
        }
    }

    // Imprimir os elementos válidos de resultante1
    printf("Primeiro vetor resultante:\n");
    for (i = 0; i < cont; i++)
    {
        printf("%d\n", resultante1[i]);
    }

    // Imprimir os elementos válidos de resultante2
    printf("Segundo vetor resultante:\n");
    for (i = 0; i < cont2; i++)
    {
        printf("%d\n", resultante2[i]);
    }

    return 0;
}