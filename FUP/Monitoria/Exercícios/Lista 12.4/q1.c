#include <stdio.h>

int main()
{
    int vetor[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int aux, i=0, i2=9;

    do
    {
        aux = vetor[i];
        vetor[i] = vetor[i2];
        vetor[i2] = aux;
        i++;
        i2--;

    }while(i<5 && i2>4);

    for(i=0;i<10;i++)
    {
        printf("%d\n", vetor[i]);
    }
    
    return 0;
}
