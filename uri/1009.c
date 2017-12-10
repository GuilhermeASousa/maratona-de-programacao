#include<stdio.h>

int main ()
{
  double SALARIO, TOTAL_VENDAS;
  char NOME[30];
  scanf("%s", NOME);
  scanf("%lf", &SALARIO);
  scanf("%lf", &TOTAL_VENDAS);
  printf("TOTAL = R$ %.2lf\n", SALARIO + (TOTAL_VENDAS * 0.15));
  return 0;
}