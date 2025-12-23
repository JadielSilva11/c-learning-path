#include <stdio.h>

int main()
{
    int sm, ce;
    printf("Digite seu saldo medio: ");
    scanf("%d", &sm);
    if (sm<=200)
    {
        ce = sm * 0.1;
        sm = sm + ce;
        printf("Seu saldo + credito especial: %d", sm);
    }
    else if (sm>200 && sm<=300)
    {
        ce = sm * 0.2;
        sm = sm +ce;
        printf("Seu saldo + credito especial: %d", sm);
    }
    else if (sm>300 && sm<=400)
    {
        ce = sm * 0.25;
        sm = sm +ce;
        printf("Seu saldo + credito especial: %d", sm);
    }
    else 
    {
        ce = sm * 0.3;
        sm = sm + ce + 1;
        printf("Seu saldo + credito especial: %d", sm);
    }
    

    return 0;
}
