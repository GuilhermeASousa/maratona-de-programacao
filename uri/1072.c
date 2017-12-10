#include <stdio.h>

int main()
{
  int X, NUM, CONT, IN = 0, OUT = 0;
  scanf("%d", &X);
  for (CONT = 0; CONT < X; CONT++)
  {
    scanf("%d", &NUM);
    if (NUM >= 10 && NUM <= 20) IN++;
    else OUT++;
  }
  printf("%d in\n%d out\n", IN, OUT);
  return 0;
}