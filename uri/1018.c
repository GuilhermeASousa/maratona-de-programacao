#include <stdio.h>

int main() 
{
  int VALOR; 
  scanf("%d", &VALOR);
  printf("%d\n%d nota(s) de R$ 100,00\n", VALOR, VALOR/100);
  VALOR = VALOR - (VALOR/100 * 100);
  printf("%d nota(s) de R$ 50,00\n", VALOR/50);
  VALOR = VALOR - (VALOR/50 * 50);
  printf("%d nota(s) de R$ 20,00\n", VALOR/20);
  VALOR = VALOR - (VALOR/20 * 20);
  printf("%d nota(s) de R$ 10,00\n", VALOR/10);
  VALOR = VALOR - (VALOR/10 * 10);
  printf("%d nota(s) de R$ 5,00\n", VALOR/5);
  VALOR = VALOR - (VALOR/5 * 5);
  printf("%d nota(s) de R$ 2,00\n", VALOR/2);
  VALOR = VALOR - (VALOR/2 * 2);
  printf("%d nota(s) de R$ 1,00\n", VALOR/1);
  return 0;
}