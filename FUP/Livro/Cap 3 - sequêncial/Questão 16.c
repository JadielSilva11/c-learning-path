#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int cat1, cat2, hip, raiz;
    printf("Digite o valor do primeiro cateto:\n");
    scanf("%d", &cat1);
    printf("DIgite o valor do segundo cateto:\n");
    scanf("%d", &cat2);
    hip = pow(cat1,2) + pow(cat2,2);
    raiz = sqrt(hip);
    printf("hipotenusa = %d", raiz);
    
    return 0;
}
