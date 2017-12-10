#include <stdio.h>

int main ()
{
  int N, CONT, SEQUENCIA = 1;
  scanf ("%d", &N);
  for (CONT = 0; CONT < N; CONT++)
  {
    printf ("%d %d %d PUM\n", SEQUENCIA, SEQUENCIA + 1, SEQUENCIA + 2);
    SEQUENCIA += 4;
  }
  return 0;
} 