#include <stdio.h>

void Bubble_sort(int vetor[])
{
  int i, j, aux;
  for(i = 2; i >= 1; i--) 
  {  
    for(j = 0; j < i ; j++) 
    {
      if(vetor[j] > vetor[j + 1]) 
      {
        aux = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = aux;
      }
    }
  }
}

int main()
{
  int A, B, C, VETOR[3], i;
  scanf("%d %d %d", &A , &B, &C);
  VETOR[0] = A;
  VETOR[1] = B;
  VETOR[2] = C;
  Bubble_sort(VETOR);
  for (i = 0; i < 3; i++)
  {
    printf("%d\n", VETOR[i]);
  }
  printf("\n");
  printf("%d\n%d\n%d\n", A, B, C);
  return 0;
}