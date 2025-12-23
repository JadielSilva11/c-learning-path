#include <stdio.h>
#include <string.h>

int main()
{
    char x[10];
    
    printf("Digite um nome: ");
    fgets(x, sizeof(x), stdin);
    printf("%s", x);
    for(int i=0;x[i]!='\0';i++)
    {
        printf(" %c\n", x[i]);
    }
    
    return 0;
}
