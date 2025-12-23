#include <stdio.h>

int main()
{
    char letra='a';
    char *p=&letra;
    do
    {
        printf("%c ", letra);
        *p+=1;
    }
    while(letra <='z');
    
    return 0;
}
