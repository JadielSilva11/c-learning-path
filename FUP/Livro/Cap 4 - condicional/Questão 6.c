#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, y, op;
    printf("Digite dois numeros:\n");
    printf("X: ");
    scanf("%d", &x);
    printf("Y: ");
    scanf("%d", &y);
    printf("\t\tMENU\n");
    printf("1-X elevado a Y\n2-raiz quadrada de X e Y\n3-raiz cubica de X e y\n");
    scanf("%d", &op);
    if(op==1)
    {
        int e;
        e = pow(x,y);
        printf("%d elevado a %d: %d", x, y, e);
    }
    else if(op==2)
    {
        int raiz_x, raiz_y;
        raiz_x = sqrt(x);
        raiz_y = sqrt(y);
        printf("raiz quadrada de %d: %d\nraiz quadrada de %d: %d", x, raiz_x, y, raiz_y);
    }
    else if(op==3)
    {
        int raizc_x, raizc_y;
        raizc_x = cbrt(x);
        raizc_y = cbrt(y);
        printf("raiz cubica de %d: %d\nraiz cubica de %d: %d", x, raizc_x, y, raizc_y);
    }
    else 
    {
        printf("opcao invalida!!!!");
    }

    return 0;
}
