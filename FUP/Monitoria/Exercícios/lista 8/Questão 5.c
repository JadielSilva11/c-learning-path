#include <stdio.h>

int main()
{
    void letra(int num);

    int x;
    scanf("%d", &x);
    letra(x);

    return 0;
}

void letra(int num)
{
    if ((num>='a' && num<='z') || (num>='A' && num <='Z'))
    {
        printf("o numero digitado e uma letra: %c", num);
    }
    else
    {
        printf("O numero digitado nao e uma letra: %c", num);
    }
}