#include <stdio.h>
#include <stdlib.h>

int main()
{
    int presenca[5], op;
    for(int i=0;i<5;i++)
    {
        printf("Digite a presenca do dia %d: ", i+1);
        scanf("%d", &presenca[i]);
    }
    do
    {
        printf("1 - Segunda\n2 - Terca\n3 - Quarta\n4 - Quinta\n5 - Sexta\n");
        printf("Voce deseja ver a lista de presenca de qual dia da semana: \n");
        scanf("%d", &op);
        if(op == 1)
        {
            printf("presenca de segunda: %d\n", presenca[0]);
        }
        else if(op == 2)
        {
            printf("presenca de terca: %d\n", presenca[1]);
        }
        else if(op == 3)
        {
            printf("presenca de quarta: %d\n", presenca[2]);
        }
        else if(op == 4)
        {
            printf("presenca de quinta: %d\n", presenca[3]);
        }
        else if(op == 5)
        {
            printf("presenca de sexta: %d\n", presenca[4]);
        }
    }while(op >=1 && op <=5);

    return 0;
}
