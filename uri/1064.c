#include <stdio.h>

int main()
{
  double NUM, MEDIA = 0.00, CONT;
  int POSITIVOS = 0;
  for (CONT = 0; CONT < 6; CONT++)
  {
    scanf("%lf", &NUM);
    if (NUM > 0.00)
    {
      POSITIVOS++;
      MEDIA += NUM;
    }
  }
  printf("%d valores positivos\n%.1lf\n", POSITIVOS, MEDIA/POSITIVOS);
  return 0;
}