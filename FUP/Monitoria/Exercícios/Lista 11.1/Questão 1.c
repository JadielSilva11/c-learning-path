#include <stdio.h>

void digitos(int num);

int main()
{
    int num;
    while(num != 0)
    {
        scanf("%d", &num);
        digitos(num);
    }
    
    return 0;
}

void digitos(int num)
{
    int i, dig=0, num2=num;
    for(i=0;num>0;i++)
    {
        num /= 10;
        dig++;
    }
    printf("O numero %d tem %d digitos.\n", num2, dig);
}