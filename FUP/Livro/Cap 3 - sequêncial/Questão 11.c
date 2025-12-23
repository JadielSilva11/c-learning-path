#include <stdio.h>

int main()
{
    float area, diagonal_maior, diagonal_menor;
    printf("Digite a diagonal maior do losango:\n");
    scanf("%f", &diagonal_maior);
    printf("Digite a diagonal menor do losango:\n");
    scanf("%f", &diagonal_menor);
    area = (diagonal_maior * diagonal_menor)/2;
    printf("Area do losango: %.2f", area);

    
    return 0;
}
