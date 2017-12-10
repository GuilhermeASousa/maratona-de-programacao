#include <stdio.h>

int main()
{
  double VALOR;
  scanf("%lf", &VALOR);
  if (VALOR < 0 || VALOR > 100.00)  printf("Fora de intervalo\n");
  else if (VALOR >= 0.00000 && VALOR <= 25.00000) printf("Intervalo [0,25]\n");
  else if (VALOR > 25.00000 && VALOR <= 50.00000) printf("Intervalo (25,50]\n");
  else if (VALOR > 50.00000 && VALOR <= 75.00000) printf("Intervalo (50,75]\n");
  else printf("Intervalo (75,100]\n");
  return 0;
}