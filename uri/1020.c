#include <stdio.h>

int main() 
{
  int TEMPO;
  scanf("%d", &TEMPO);
  printf("%d ano(s)\n", TEMPO / 365); 
  TEMPO = TEMPO - ((TEMPO / 365) * 365);
  printf("%d mes(es)\n", TEMPO / 30); 
  TEMPO = TEMPO - ((TEMPO / 30) * 30);
  printf("%d dia(s)\n", TEMPO); 
  return 0;
}