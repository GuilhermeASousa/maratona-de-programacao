#include <stdio.h>

int main()
{
  int X[10], CONT;
  for (CONT = 0; CONT < 10; CONT++)
  {
    scanf ("%d", &X[CONT]);
    if (X[CONT] <= 0) X[CONT] = 1;
    printf("X[%d] = %d\n", CONT, X[CONT]);
  }
  return 0;
}