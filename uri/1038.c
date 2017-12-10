#include <stdio.h>

int main()
{
  int CODIGO, QUANTIDADE;
  double TOTAL;
  scanf("%d %d", &CODIGO, &QUANTIDADE);
  if (CODIGO == 1) TOTAL = QUANTIDADE * 4.00;
  else if (CODIGO == 2) TOTAL = QUANTIDADE * 4.50;
  else if (CODIGO == 3) TOTAL = QUANTIDADE * 5.00;
  else if (CODIGO == 4) TOTAL = QUANTIDADE * 2.00;
  else if (CODIGO == 5) TOTAL = QUANTIDADE * 1.50;
  printf("Total: R$ %.2lf\n", TOTAL);
  return 0;
}