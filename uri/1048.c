#include <stdio.h>

int main() 
{
  double SALARIO;
  scanf("%lf", &SALARIO);
  if (SALARIO >= 0 && SALARIO <= 400.00) printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %\n", SALARIO * 1.15, SALARIO * 0.15);
  else if (SALARIO >= 400.01 && SALARIO <= 800.00) printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %\n", SALARIO * 1.12, SALARIO * 0.12);
  else if (SALARIO >= 800.01 && SALARIO <= 1200.00) printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %\n", SALARIO * 1.10, SALARIO * 0.10);
  else if (SALARIO >= 1200.01 && SALARIO <= 2000.00) printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %\n", SALARIO * 1.07, SALARIO * 0.07);
  else printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %\n", SALARIO * 1.04, SALARIO * 0.04);
  return 0;
}