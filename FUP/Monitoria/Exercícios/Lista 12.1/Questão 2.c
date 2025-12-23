#include <stdio.h>

int main()
{
    int tam;
    printf("Quantas notas voce deseja guardar: ");
    scanf("%d", &tam);
    float nota[tam], in=0, re=0, ot=0;
    for(int i=0;i<tam;i++)
    {
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &nota[i]);
        if(nota[i] <= 4)
        {
            in++;
        }
        else if(nota[i] > 4 && nota[i] < 7)
        {
            re++;
        }
        else
        {
            ot++;
        }
    }
    in = (in / tam) * 100;
    re = (re / tam) * 100;
    ot = (ot / tam) * 100;
    printf("A porcentagem dos alunos com notas:\n");
    printf("Otimas:  %.0f%%\nRegulares:  %.0f%%\nIndesejadas:  %.0f%%", ot, re, in);
    
    return 0;
}
