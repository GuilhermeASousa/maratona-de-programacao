#include <stdio.h>

int main()
{
  int X, Y, CONT, SOMA = 0;
  scanf ("%d", &X);
  scanf ("%d", &Y);
  if (Y > X)
  {
    for (CONT = X; CONT <= Y; CONT++)
    {
      if (CONT % 13 != 0) SOMA += CONT;
    }
  }
  else
  {
    for (CONT = Y; CONT <= X; CONT++)
    {
      if (CONT % 13 != 0) SOMA += CONT;
    }
  }
  printf("%d\n", SOMA);
  return 0;
}