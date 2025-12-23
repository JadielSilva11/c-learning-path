#include <stdio.h>

int main()
{
    char aux, vetor[10] = {'c', 'b', 'j', 'g', 'h', 'e', 'i', 'f', 'd', 'a'};
    int i, i2;

    for(i=0;i<10-1;i++)
    {
        for(i2=0;i2<10-1-i;i2++)
        {
            if(vetor[i2] > vetor[i2+1])
            {
                aux = vetor[i2];
                vetor[i2] = vetor[i2+1];
                vetor[i2+1] = aux;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf(" %c", vetor[i]);
    }
    
    
    return 0;
}
