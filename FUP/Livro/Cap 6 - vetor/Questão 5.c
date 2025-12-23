#include <stdio.h>

int main()
{
    int lo[15], lp[10];
    int i;
    for(i=0;i<15;i++)
    {
        printf("Digite sua matricula(Para alunos de logica): ");
        scanf("%d", &lo[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("Digite sua matricula(Para alunos de programacao): ");
        scanf("%d", &lp[i]);
    }
    printf("Matricula dos alunos de logica\n");
    for(i=0;i<15;i++)
    {
        printf("%d\n", lo[i]);
    }
    printf("Matricula dos alunos de programacao\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n", lp[i]);
    }
    
    return 0;
}
