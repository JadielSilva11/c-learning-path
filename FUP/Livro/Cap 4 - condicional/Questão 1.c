#include <stdio.h>

int main()
{
    float media;
    int n1, n2, n3, n4;
    printf("Digite a primeira nota:\n");
    scanf("%d", &n1);
    printf("Digite a segunda nota:\n");
    scanf("%d", &n2);
    printf("Digite a terceira nota:\n");
    scanf("%d", &n3);
    printf("Digite a quarta nota:\n");
    scanf("%d", &n4);
    media = (n1 + n2 + 3 + n4)/4;
    printf("media: %.2f", media);

    return 0;
}
