#include <stdio.h>

int main() 
{
  int TEMPO;
  scanf("%d", &TEMPO);
  printf("%d", TEMPO / 3600); 
  TEMPO = TEMPO - ((TEMPO / 3600) * 3600);
  printf(":%d", TEMPO / 60); 
  TEMPO = TEMPO - ((TEMPO / 60) * 60);
  printf(":%d\n", TEMPO); 
  return 0;
}