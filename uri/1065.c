#include <stdio.h>

int main()
{
  int NUM, CONT_PAR, i;
  for (i = 0; i < 5; i++)
  {
    scanf ("%d", &NUM);
    if (NUM % 2 == 0) CONT_PAR++;
  }
  printf ("%d valores pares\n", CONT_PAR);
  return 0;
}