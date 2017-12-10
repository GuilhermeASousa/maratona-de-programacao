#include <stdio.h>
#include <math.h>

int main()
{
  double A, B, C, DELTA, X;
  scanf("%lf %lf %lf", &A, &B, &C);
  DELTA = (B * B) - (4 * A * C);
  if (DELTA < 0 || A <= 0) printf("Impossivel calcular\n");
  else printf("R1 = %.5lf\nR2 = %.5lf\n", (-B + sqrt(DELTA)) / (2 * A), (-B - sqrt(DELTA)) / (2 * A));
  return 0;
}