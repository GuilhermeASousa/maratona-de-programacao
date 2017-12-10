#include <stdio.h>

void Bubblesort(double vetor[])
{
  double aux;
  int i, j;
  for(i=2; i >= 1; i--) 
  {  
 
    for(j=0; j < i ; j++) 
    {
 
      if(vetor[j] < vetor[j+1]) 
      {
 
        aux = vetor[j];
        vetor[j] = vetor[j+1];
        vetor[j+1] = aux;
 
      }
    }
  }
}

int main()
{
  double ABC[3];
  scanf("%lf %lf %lf", &ABC[0], &ABC[1], &ABC[2]);
  Bubblesort(ABC);
  if (ABC[0] >= ABC[1] + ABC[2]) printf("NAO FORMA TRIANGULO\n");
  else
  {
    if ((ABC[0] * ABC[0]) == (ABC[1] * ABC[1]) + (ABC[2] * ABC[2])) printf("TRIANGULO RETANGULO\n");
    if ((ABC[0] * ABC[0]) > (ABC[1] * ABC[1]) + (ABC[2] * ABC[2])) printf("TRIANGULO OBTUSANGULO\n");
    if ((ABC[0] * ABC[0]) < (ABC[1] * ABC[1]) + (ABC[2] * ABC[2])) printf("TRIANGULO ACUTANGULO\n");
    if (ABC[0] == ABC[1] && ABC[1] == ABC[2]) printf("TRIANGULO EQUILATERO\n");
    if ((ABC[0] == ABC[1] && ABC[1] != ABC[2]) || (ABC[0] != ABC[1] && ABC[1] == ABC[2]) || (ABC[0] == ABC[2] && ABC[0] != ABC[1])) printf("TRIANGULO ISOSCELES\n");
  }
  return 0;
}