#include <stdio.h>
#include <stdlib.h>

int main()
{
    int an, aa, id, dias, semanas;
    printf("Digite seu ano de nascimento\n");
    scanf("%d", &an);
    printf("Agora digite o ano atual\n");
    scanf("%d", &aa);
    id = aa - an;
    dias = (id * 365);
    semanas = (dias/7);
    printf("Sua idade em semanas e: %d semanas", semanas);
    
    return 0;
}
