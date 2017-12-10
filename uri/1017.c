#include <stdio.h>

int main() 
{
  int TEMPO, VELOCIDADE; 
  double CONSUMO; 
  scanf("%d", &TEMPO);
  scanf("%d", &VELOCIDADE);
  CONSUMO = (TEMPO * VELOCIDADE) / 12.0;
  printf("%.3lf\n", CONSUMO);
  return 0;
}