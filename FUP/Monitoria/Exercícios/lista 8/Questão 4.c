#include <stdio.h>

int main()
{
    float media(float x, float y, float z);

    float x, y, z;
    printf("Digite sua primeira nota: ");
    scanf("%f", &x);
    printf("Digite sua segunda nota: ");
    scanf("%f", &y);
    printf("Digite sua terceira nota: ");
    scanf("%f", &z);
    media(x, y, z);
    printf("A funcao media retornou a media das suas notas: %.1f", media(x, y, z));
    
    return 0;
}

float media(float x, float y, float z)
{
    int resultado = (x + y + z)/3;

    return resultado; 
}
