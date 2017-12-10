#include <stdio.h>
#include <stdlib.h>

int ProcuraGene(int *VETOR, int GENE, int N)
{
  int CONT;
  for (CONT = 0; CONT < N; CONT++)
    if (VETOR[CONT] == GENE) return CONT + 1;
}

void TrocaGenes(int *VETOR, int i, int j)
{
  int AUX;
  AUX = VETOR[i - 1];
  VETOR[i - 1] = VETOR[j - 1];
  VETOR[j - 1] = AUX;
}

int main ()
{
  int N, R, CONT, CONT2, i, j, Q, GENE, PC = 1;
  int *VETOR;
  scanf ("%d", &N);
  while (N != 0)
  {
    VETOR = malloc(sizeof(int) * N);
    for (CONT = 0; CONT < N; CONT++)
      VETOR[CONT] = CONT + 1;
    scanf ("%d", &R);
    for (CONT = 0; CONT < R; CONT++)
    {
      scanf ("%d %d", &i, &j);
      while (j > i)
      {
        TrocaGenes(VETOR, i, j);
        i++;
        j--;
      }
    }
    scanf ("%d", &Q);
    printf("Genome %d\n", PC);
    for (CONT = 0; CONT < Q; CONT++)
    {
      scanf("%d", &GENE);
      printf("%d\n", ProcuraGene(VETOR, GENE, N));
    }
    scanf ("%d", &N);
    PC++;
    free(VETOR);
  }
  return 0;
}