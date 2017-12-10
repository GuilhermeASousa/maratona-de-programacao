#include <stdio.h>
 
int main()
{
  int N, CONT;
  double A, B, C;
  scanf("%d", &N);
  for (CONT = 0; CONT < N; CONT++)
  {
    scanf("%lf %lf %lf", &A, &B, &C); 
    printf("%.1lf\n", (A * 2 + B * 3 + C * 5) / 10);
  }
  return 0;
}