#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *i = malloc(sizeof(int));
    char *c = malloc(sizeof(char));
    double *d = malloc(sizeof(double));
    if (sizeof(*i) > sizeof(*c) && sizeof(*i) > sizeof(*d))// se int for maior
    {
        *i=10;
        printf("%d\n", *i);
        if (sizeof(*c) > sizeof(*d)) // se char for maior que double
        {
            *c='A';
            printf("%c\n", *c);
            *d=1.234534;
            printf("%f\n", *d);
        }
        else // se double for maior que char
        {
            *d=1.234534;
            printf("%f\n", *d);
            *c='A';
            printf("%c\n", *c);
        }
    }
    if (sizeof(*c) > sizeof(*i) && sizeof(*c) > sizeof(*d))// se char for maior
    {
        *c='A';
        printf("%c\n", *c);
        if (sizeof(*i) > sizeof(*d)) // se int for maior que double
        {
            *i=10;
            printf("%d\n", *i);
            *d=1.234534;
            printf("%f\n", *d);
        }
        else // se double for maior que int
        {
            *d=1.234534;
            printf("%f\n", *d);
            *i=10;
            printf("%d\n", *i);
        }
    }
    if (sizeof(*d) > sizeof(*i) && sizeof(*d) > sizeof(*c))// se double for maior
    {
        *d=1.234534;
        printf("%f\n", *d);
        if (sizeof(*i) > sizeof(*c)) // se int for maior que char
        {
            *i=10;
            printf("%d\n", *i);
            *c='A';
            printf("%c\n", *c);
        }
        else // se char for maior que int
        {
            *c='A';
            printf("%c\n", *c);
            *i=10;
            printf("%d\n", *i);
        }
    }    
    free(d);
    printf("%f\n", *d);
    free(c);
    printf("%c\n", *c);
    free(i);
    printf("%d\n", *i);
    return 0;
}