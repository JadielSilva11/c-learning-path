#include <stdio.h>

int main()
{
    float base_maior=5, base_menor=3, altura=10, area;
    // sera tirado a area do trapezio
    area = ((base_maior + base_menor) *altura)/2;
    printf("Area do trapezio: %.2f", area);
    
    return 0;
}
