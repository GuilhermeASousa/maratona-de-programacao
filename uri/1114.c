#include <stdio.h>

int main ()
{
  int SENHA;
  scanf ("%d", &SENHA);
  while (SENHA != 2002)
  {
    printf("Senha Invalida\n");
    scanf ("%d", &SENHA);
  }
  printf("Acesso Permitido\n");
  return 0;
}