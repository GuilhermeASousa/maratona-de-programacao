#include<stdio.h>

int main ()
{
  int CODIGO_PECA1, CODIGO_PECA2, NUM_PECAS1, NUM_PECAS2;
  double VALOR_PECA1, VALOR_PECA2;
  scanf("%d %d %lf", &CODIGO_PECA1, &NUM_PECAS1, &VALOR_PECA1);
  scanf("%d %d %lf", &CODIGO_PECA2, &NUM_PECAS2, &VALOR_PECA2);
  printf("VALOR A PAGAR: R$ %.2lf\n", (NUM_PECAS1 * VALOR_PECA1) + (NUM_PECAS2 * VALOR_PECA2));
  return 0;
}