#include <stdio.h>

int main()
{
  int NUM, CONT;
  scanf("%d", &NUM);
  for (CONT = 0; CONT < 10; CONT++)
  {
    printf("%d x %d = %d\n", CONT + 1, NUM, (CONT + 1) * NUM);
  }
  return 0;
}