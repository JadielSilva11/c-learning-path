#include <stdio.h>

int main()
{
    int num=5;
    int *p1=&num;
    char letra='s';
    char *p2=&letra;
    float n=2.5;
    float *p3=&n;
    printf("inteiro: %d\n", num);
    printf("Char: %c\n", letra);
    printf("real: %f\n", n);
    printf("\n");
    *p1=10;
    *p2='t';
    *p3=5.6;  
    printf("inteiro: %d\n", num);
    printf("Char: %c\n", letra);
    printf("real: %f\n", n); 
    
    return 0;
}
