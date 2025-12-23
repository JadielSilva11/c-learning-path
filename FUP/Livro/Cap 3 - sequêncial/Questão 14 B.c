#include <stdio.h>
#include <stdlib.h>

int main()
{
    int an, aa, id, meses;
    printf("Digite seu ano de nascimento\n");
    scanf("%d", &an);
    printf("Agora digite o ano atual\n");
    scanf("%d", &aa);
    id = aa - an;
    meses = (id * 12);
    printf("Sua idade em meses e: %d meses", meses);
    
    return 0;
}