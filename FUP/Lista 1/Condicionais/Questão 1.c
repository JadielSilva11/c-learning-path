#include <stdio.h>

int main()
{
    unsigned int B;
    int KB, MB, GB;
    printf("Digite um valor em MegaBytes:\n");
    scanf("%i", &MB);
    B = MB*1024*1024;
    KB = MB*1024;
    GB = MB/1024;
    printf("O valor de %i MegaBytes em bytes e igual a: %i Bytes\n", MB, B);
    printf("O valor de %i MegaBytes em KiloBytes e igual a: %i KiloBytes\n", MB, KB);
    printf("O valor de %i MegaBytes em Gigabytes e igual a: %i Gigabytes\n", MB, GB);
    
    
    return 0;
}
