#include <stdio.h>
#include <stdlib.h>

int main()
{
    int an, aa, id;
    printf("Digite seu ano de nascimento\n");
    scanf("%d", &an);
    printf("Agora digite o ano atual\n");
    scanf("%d", &aa);
    id = aa - an;
    printf("Sua idade: %d anos", id);
    
    return 0;
}
