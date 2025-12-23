#include <stdio.h>

int main()
{
   int senha=4531, tentativa;
   printf("Digite a senha: ");
   scanf("%d", &tentativa);
   if (tentativa == senha)
   {
    printf("acesso liberado!");
   }
   else 
   {
    printf("Senha incorreta!");
   }
    
    return 0;
}
