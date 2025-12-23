#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    char *px=&x;
    do 
    {
       scanf("%c", &x); 
    }while(((x<65) || (x>122)) || ((x>90) && (x<97)));
    if((x>=65) && (x<=90))
    {
        *px=*px+32;
        printf("%c", x);
    }
    else if((x>=97) && (x<=122))
    {
        *px=*px-32;
        printf("%c", x);
    }
    free(px);
    
    return 0;
}
