#include <stdio.h>
#include <string.h>

void comparar(char A[], char B[]);

int main()
{
    char A[20], B[10];

    printf("Digite o primeiro: ");
    fgets(A, sizeof(A), stdin);
    A[strcspn(A, "\n")] = '\0';

    printf("Digite o segundo: ");
    fgets(B, sizeof(B), stdin);
    B[strcspn(B, "\n")] = '\0';

    comparar(A, B);

    return 0;
}

void comparar(char A[], char B[])
{
    int i, i2=0;
    char a[20], b[10];
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i] == B[i])
        {
            a[i2] = A[i];
            b[i2] = B[i2];
            i2++;
        }
    }
    a[i2] = '\0';
    b[i2] = '\0';

    if(strcmp(a, b) == 0)
    {
        printf("Encaixa\n");
    }
    else
    {
        printf("Nao encaixa\n");
        puts(a); puts(b);
    }
}