#include <stdio.h>

int main()
{
  int i, POSITIVOS = 0;
  double X;
  for (i = 0; i < 6; i++)
  {
    scanf("%lf", &X);
    if (X > 0) POSITIVOS++;
  }
  printf("%d valores positivos\n", POSITIVOS);
  return 0;
}