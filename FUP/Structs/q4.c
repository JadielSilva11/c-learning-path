#include <stdio.h>
#include <stdlib.h>

struct retangulo
{
    float base;
    float altura;
};
typedef struct retangulo Retangulo;

int main()
{
    float area[2];
    
    Retangulo A[2];
    printf("Digite os valores da base e altura do primeiro retangulo:");
    scanf("%f %f", &A[0].base, &A[0].altura);
    printf("Agora digite os valores da base e altura do segundo retangulo:");
    scanf("%f %f", &A[1].base, &A[1].altura);

    for(int i=0;i<2;i++)
    {
        area[i] = A[i].base * A[i].altura;

        printf("Area do retangulo %d: %.2f\n", i+1, area[i]);
    }
    
    return 0;
}