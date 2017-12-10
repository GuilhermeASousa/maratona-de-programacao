#include<stdio.h>

int main ()
{
  int NUMERO, HORAS_TRABALHADAS;
  double SALARIO;
  scanf("%d", &NUMERO);
  scanf("%d", &HORAS_TRABALHADAS);
  scanf("%lf", &SALARIO);
  printf("NUMBER = %d\n", NUMERO);
  printf("SALARY = U$ %.2lf\n", SALARIO * HORAS_TRABALHADAS);
  return 0;
}