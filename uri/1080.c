#include <stdio.h>

int main()
{
  int CONT, NUM, MAXIMO = 0, POSICAO;
  for (CONT = 1; CONT <= 100; CONT++)
  {
    scanf("%d", &NUM);
    if (NUM > MAXIMO)
    {
      MAXIMO = NUM;
      POSICAO = CONT;
    }
  }
  printf("%d\n%d\n", MAXIMO, POSICAO);
  return 0;
}