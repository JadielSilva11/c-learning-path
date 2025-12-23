#include <stdio.h>
#include <math.h>

void intproximo(float v[]);

int main()
{
    float v[3] = {2.9, 3.1, 6.8};
    intproximo(v);
    
    return 0;
}

void intproximo(float v[])
{
    int aproximado[3], i;
    for(i=0;i<3;i++)
    {
        aproximado[i] = round(v[i]);
        printf("%d ", aproximado[i]);
    }
    
}