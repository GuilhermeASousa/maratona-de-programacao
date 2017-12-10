#include <stdio.h>

int main()
{
  int X, Y, CONT, SOMA = 0;
  scanf ("%d", &X);
  scanf ("%d", &Y);
  if (X > Y)
  {
    for (CONT = Y + 1; CONT < X; CONT++)
    {
      if (CONT % 2 != 0) SOMA += CONT;
    }
  }
  else
  {
    for (CONT = X + 1; CONT < Y; CONT++)
    {
      if (CONT % 2 != 0) SOMA += CONT;
    }
  }
  printf("%d\n", SOMA);
  return 0;
}