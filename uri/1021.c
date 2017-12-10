#include <stdio.h>

int main() 
{
  double VALOR = 0.0;
  int NOTA100 = 0, NOTA50 = 0, NOTA20 = 0, NOTA10 = 0, NOTA5 = 0, NOTA2 = 0, MOEDA100 = 0, MOEDA50 = 0, MOEDA25 = 0, MOEDA10 = 0, MOEDA5 = 0;
  scanf("%lf", &VALOR);
  while (VALOR >= 100)
  {
    VALOR -= 100;
    NOTA100++;
  }
  while (VALOR >= 50)
  {
    VALOR -= 50;
    NOTA50++;
  }
  while (VALOR >= 20)
  {
    VALOR -= 20;
    NOTA20++;
  }
  while (VALOR >= 10)
  {
    VALOR -= 10;
    NOTA10++;
  }
  while (VALOR >= 5)
  {
    VALOR -= 5;
    NOTA5++;
  }
  while (VALOR >= 2)
  {
    VALOR -= 2;
    NOTA2++;
  }
  while (VALOR >= 1.0)
  {
    VALOR -= 1.0;
    MOEDA100++;
  }
  while (VALOR >= 0.5)
  {
    VALOR -= 0.5;
    MOEDA50++;
  }
  while (VALOR >= 0.25)
  {
    VALOR -= 0.25;
    MOEDA25++;
  }
  while (VALOR >= 0.1)
  {
    VALOR -= 0.1;
    MOEDA10++;
  }
  while (VALOR >= 0.05)
  {
    VALOR -= 0.05;
    MOEDA5++;
  }
  printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%.0lf moeda(s) de R$ 0.01\n", NOTA100, NOTA50, NOTA20, NOTA10, NOTA5, NOTA2, MOEDA100, MOEDA50, MOEDA25, MOEDA10, MOEDA5, VALOR/0.01);
}