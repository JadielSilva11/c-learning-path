#include <stdio.h>

int segundos(int x, int y, int z);

int main()
{
    int h, min, seg;
    printf("Informe as horas segundo e minutos no formato (hora:min:seg): ");
    scanf("%d:%d:%d", &h, &min, &seg);
    segundos(h, min, seg);
    printf("O total das horas tranformadas em segundo e: %d segundos", segundos(h, min, seg));
    
    return 0;
}

int segundos(int x, int y, int z)
{
    int seg;
    seg = z + (x * 3600) + (y * 60);

    return seg;
}
