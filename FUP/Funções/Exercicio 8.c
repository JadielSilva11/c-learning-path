#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char charRand(void);

int main()
{
    charRand();
    printf("O computador sorteou uma letra do alfabeto: %c", charRand());    
    
    return 0;
}

char charRand(void)
{
    char letra;
    srand(time(NULL));
    letra = rand()%26 + 65;

    return letra;
}