#include <stdio.h>

int main ()
{
  int NUM, CONT = 0;
  scanf ("%d", &NUM);
  while (CONT < 6)
  {
    if (NUM % 2 != 0)
    {
      printf("%d\n", NUM);
      CONT++;
    }
    NUM++;
  }
  return 0;
}

