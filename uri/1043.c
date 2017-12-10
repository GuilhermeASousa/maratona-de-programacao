#include <stdio.h>
#include <math.h>

int main()
{
  double A, B, C;
  scanf("%lf %lf %lf", &A, &B, &C);
  if ((-1*(B - C) < A && A < B + C) && (-1*(A - C) < B && B < A + C) && (-1*(A - B) < C && C < A + B)) printf("Perimetro = %.1lf\n", A + B + C);
  else printf("Area = %.1lf\n", ((A + B) * C) / 2);
  return 0;
}