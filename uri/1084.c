#include <stdio.h>
#include <stdlib.h>

void InicializaVetor (int *VETOR, int TAMANHO)
{
  int i;
  for (i = 0; i < TAMANHO; i++)
    VETOR[i] = -1;
}

void Imprime (int *VETOR, int TAMANHO)
{
  int i;
  for (i = 0; i < TAMANHO; i++)
    printf ("%d", VETOR[i]);
}

int main()
{
  int N, D, i, j, *SAIDA, TAM_SAIDA;
  char NUM[100002];
  scanf ("%d %d", &N, &D);
  while (N != 0 || D != 0)
  {
    TAM_SAIDA = N - D;
    NUM[0] = '\0';
    SAIDA = malloc (sizeof (int) * TAM_SAIDA);
    InicializaVetor (SAIDA, TAM_SAIDA);
    i = 0;
    j = 0;
    scanf ("%s", NUM);
    while (i < N && D > 0)
    {
      if (SAIDA[0] == -1)
      {
        SAIDA[0] = NUM[i] - 48;
      }
      else if (SAIDA[j] >= NUM[i] - 48 && j + 1 < TAM_SAIDA)
      {
        j++;
        SAIDA[j] = NUM[i] - 48;
      }
      else if (SAIDA[j] < NUM[i] - 48)
      {
        while (j >= 0 && SAIDA[j] < NUM[i] - 48 && D > 0)
        {
          SAIDA[j] = -1;
          j--;
          D--;
        }
        j++;
        SAIDA[j] = NUM[i] - 48; 
      }
      i++;
    }
    j++;
    while (j < TAM_SAIDA)
    {
      SAIDA[j] = NUM[i] - 48;
      j++;
      i++;
    }
    Imprime (SAIDA, TAM_SAIDA);
    printf ("\n");
    free (SAIDA);
    scanf ("%d %d", &N, &D);
  }
  return 0;
}
