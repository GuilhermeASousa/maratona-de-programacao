#include <stdio.h>

int main()
{
  int N, CONT;
  scanf("%d", &N);
  for (CONT = 2; CONT <= N; CONT++)
  {
    if (CONT % 2 == 0) printf("%d^2 = %d\n", CONT, CONT * CONT);
  }
  return 0;
}