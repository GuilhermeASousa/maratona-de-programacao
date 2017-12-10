#include <stdio.h>

int main ()
{
  int N, CONT;
  scanf ("%d", &N);
  for (CONT = 2; CONT < 10000; CONT++)
  {
    if (CONT % N == 2) printf ("%d\n", CONT);
  }
  return 0;
}