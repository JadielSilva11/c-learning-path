#include <stdio.h>
#include <string.h>

int main()
{
    char city[15];
    printf("Digite aqui qual cidade voce deseja visita: ");
    fgets(city, sizeof(city), stdin);

    
    city[strcspn(city, "\n")] = '\0';

    if(strcmp(city, "sao paulo") == 0)
    {
        printf("Essa cidade faz parte do nosso destino de viagens!\n");
    }
    else if(strcmp(city, "salvador") == 0)
    {
        printf("Essa cidade faz parte do nosso destino de viagens!\n");
    }
    else if(strcmp(city, "fortaleza") == 0)
    {
        printf("Essa cidade faz parte do nosso destino de viagens!\n");
    }
    else if(strcmp(city, "terezina") == 0)
    {
        printf("Essa cidade faz parte do nosso destino de viagens!\n");
    }
    else if(strcmp(city, "natal") == 0)
    {
        printf("Essa cidade faz parte do nosso destino de viagens!\n");
    }
    else if(strcmp(city, "rio de janeiro") == 0)
    {
        printf("Essa cidade faz parte do nosso destino de viagens!\n");
    }
    else if(strcmp(city, "nova york") == 0)
    {
        printf("Essa cidade faz parte do nosso destino de viagens!\n");
    }
    else if(strcmp(city, "santiago") == 0)
    {
        printf("Essa cidade faz parte do nosso destino de viagens!\n");
    }
    else if(strcmp(city, "paris") == 0)
    {
        printf("Essa cidade faz parte do nosso destino de viagens!\n");
    }
    else if(strcmp(city, "londres") == 0)
    {
        printf("Essa cidade faz parte do nosso destino de viagens!\n");
    }
    else if(strcmp(city, "buenos aires") == 0)
    {
        printf("Essa cidade faz parte do nosso destino de viagens!\n");
    }
    else if(strcmp(city, "madri") == 0)
    {
        printf("Essa cidade faz parte do nosso destino de viagens!\n");
    }
    else
    {
        printf("A cidade digitada nao esta no nosso plano de viagens!\n");
    }

    return 0;
}
