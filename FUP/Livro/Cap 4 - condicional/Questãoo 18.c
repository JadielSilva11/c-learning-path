#include <stdio.h>

int main()
{
    int id;
    printf("Digite sua idade: ");
    scanf("%d", &id);
    if (id < 18)
    {
        printf("Voce ainda nao e um adulto");
    }
    else
    {
        printf("Voce ja e um adulto");
    }
    
    return 0;
}
