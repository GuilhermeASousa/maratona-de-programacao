#include <stdio.h>
 
double pi = 3.14159;

int main() 
{
  int RAIO;  
  scanf("%d", &RAIO);
  printf("VOLUME = %.3lf\n",  (4.0/3) * pi * RAIO * RAIO * RAIO);
  return 0;
}