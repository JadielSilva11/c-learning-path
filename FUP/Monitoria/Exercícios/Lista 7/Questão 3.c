#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, vt;
    float *px=&x, *py=&y;
    scanf("%f %f", &x, &y);
    printf("x = %.1f y = %.1f\n", x, y);
    vt=*px;
    *px=*py;
    *py=vt;
    printf("x = %.1f y = %.1f", x, y);
    free(px);
    free(py);
    
    return 0;
}
