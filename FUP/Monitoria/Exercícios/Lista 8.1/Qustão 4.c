#include <stdio.h>

int media();

int main()
{
    int result = media();
    printf("A media das notas calculadas: %d", result);
    
    return 0;
}

int media()
{
    int media, n1, n2, n3;
    char letra;

    printf("Digite sua primeira nota: ");
    scanf("%d", &n1);
    printf("Digite sua segunda nota: ");
    scanf("%d", &n2);
    printf("Digite sua terceira nota: ");
    scanf("%d", &n3);
    printf("media aritmetica - digite a\nMedia ponderada - digite p\nQual operacao voce deseja: ");
    scanf(" %c", &letra);
    if (letra == 'a')
    {
        media = (n1 + n2 + n3) / 3;
    }
    else if (letra == 'p')
    {
        media = (n1 * 5) + (n2 * 3) + (n3 * 2)/(5 + 3 + 2);
    }

    return media;
}
