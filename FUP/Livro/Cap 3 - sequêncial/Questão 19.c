#include <stdio.h>

int main()
{
    int l, c, w, m_q;
    printf("Digite a largura do comodo:\n");
    scanf("%d", &l);
    printf("Agora digite o comprimento do comodo:\n");
    scanf("%d", &c);
    m_q = l * c;
    printf("Seu comodo tem %d metros quadrados\n", m_q);
    w = m_q * 18;
    printf("Voce precisa de uma lampada de %d watts para iluminar totalmente esse comodo", w);
    
    return 0;
}
