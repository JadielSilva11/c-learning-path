/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float n1, n2, n3, p1, p2, p3, mp;
    printf("Digite sua primeira nota e o peso dela:\n");
    scanf("%f%f", &n1, &p1);
    printf("Digite sua segunda nota e o peso dela:\n");
    scanf("%f%f", &n2, &p2);
    printf("Digite sua terceira nota e o peso dela:\n");
    scanf("%f%f", &n3, &p3);
    //Agora será feito a média ponderada das notas
    mp = (n1*p1 + n2*p2 + n3*p3)/(p1 + p2 +p3);
    printf("A sua media ponderada e: %.2f", mp);

    return 0;
}
