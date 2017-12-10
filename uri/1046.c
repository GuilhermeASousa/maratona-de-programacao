#include <stdio.h>

int main ()
{
  int INICIO, FIM;
  scanf ("%d %d", &INICIO, &FIM);
  if (INICIO > FIM) printf("O JOGO DUROU %d HORA(S)\n", (24 - INICIO) + FIM);
  else if (INICIO == FIM) printf("O JOGO DUROU 24 HORA(S)\n");
  else printf("O JOGO DUROU %d HORA(S)\n", FIM - INICIO);
  return 0;
}