#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int hi, hf, mi, mf, dh, dm;
    printf("Que horas a partida iniciou:(Digite no formato h:min)\n");
    scanf("%d:%d", &hi, &mi);
    printf("Que horas a partida terminou:(Digite no formato h:min)\n");
    scanf("%d:%d", &hf, &mf);
    dh=hf-hi;
    dm=mf-mi;
    if(dm<0)
    {
        dm=dm+60;
        dh--;
    }
    printf("A partida durou %d horas e %d minutos", dh, dm);

    return 0;
}