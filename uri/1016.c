#include <stdio.h>

int X = 60;
int Y = 90;

int main() 
{
  int DISTANCIA;  
  scanf("%d", &DISTANCIA);
  printf("%d minutos\n", (DISTANCIA * 60) / 30);
  return 0;
}