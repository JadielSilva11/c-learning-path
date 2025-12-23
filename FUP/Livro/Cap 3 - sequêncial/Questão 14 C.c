#include <stdio.h>
#include <stdlib.h>

int main()
{
    int an, aa, id, dias;
    printf("Digite seu ano de nascimento\n");
    scanf("%d", &an);
    printf("Agora digite o ano atual\n");
    scanf("%d", &aa);
    id = aa - an;
    dias = (id * 365);
    printf("Sua idade em dias e: %d dias", dias);
    
    return 0;
}
