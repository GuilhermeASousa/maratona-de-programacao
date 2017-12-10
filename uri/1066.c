#include <stdio.h>

int main()
{
  int POSITIVOS = 0, NEGATIVOS = 0, PARES = 0, IMPARES = 0, CONT, NUM;
  for (CONT = 0; CONT < 5; CONT++)
  {
    scanf("%d", &NUM);
    if (NUM > 0) POSITIVOS++;
    if (NUM < 0) NEGATIVOS++;
    if (NUM % 2 != 0) IMPARES++;
    if (NUM % 2 == 0) PARES++;
  }
  printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", PARES, IMPARES, POSITIVOS, NEGATIVOS);
  return 0;
}