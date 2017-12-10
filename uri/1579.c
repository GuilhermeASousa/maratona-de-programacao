#include <stdio.h>
#include <stdlib.h>

void InicializaIndice(int *INDICE, int CAMINHOES)
{
  int i;
  for (i = 0; i < CAMINHOES; i++)
    INDICE[i] = i + 1;
}

int EncontraMenorSoma(int *SOMA, int CAMINHOES)
{
  int i, j, MIN;
  MIN = 1000000;
  for (i = 0; i < CAMINHOES; i++)
  {
    if (MIN > SOMA[i])
    {
      MIN = SOMA[i];
      j = i;
    }
  }
  return j;
}

int EncontraMaiorCarga(int *VET_CARGAS, int CAMINHOES)
{
  int i, MAX;
  MAX = 0;
  for (i = 0; i < CAMINHOES; i++)
  {
    if (MAX < VET_CARGAS[i])
      MAX = VET_CARGAS[i];
  }
  return MAX;
}

int main()
{
  int NPAINEIS, CAMINHOES, FRETE, N, PESO, i, *VET_PESOS, *VET_CARGAS, *INDICE, *SOMA, MIN, MAX;
  scanf ("%d", &N); 
  while (N > 0)
  {
    scanf ("%d %d %d", &NPAINEIS, &CAMINHOES, &FRETE);
    VET_PESOS = malloc(sizeof(int) * NPAINEIS);
    VET_CARGAS = malloc(sizeof(int) * (CAMINHOES + 1));
    INDICE = malloc(sizeof(int) * CAMINHOES);
    SOMA = malloc(sizeof(int) * CAMINHOES);
    for (i = 0; i < NPAINEIS; i++)
    {
      scanf ("%d", &VET_PESOS[i]);
      if (i <= CAMINHOES)
        VET_CARGAS[i] = VET_PESOS[i];
    }
    InicializaIndice(INDICE, CAMINHOES);
    while (INDICE[CAMINHOES - 1] < NPAINEIS)
    {
    for (i = 0; i < CAMINHOES; i++)
      SOMA[i] = VET_CARGAS[i] + VET_PESOS[INDICE[i]];
    MIN = EncontraMenorSoma(SOMA, CAMINHOES);
    VET_CARGAS[MIN] = SOMA[MIN];
    VET_CARGAS[MIN + 1] = VET_CARGAS[MIN + 1] - VET_PESOS[INDICE[MIN]];
    INDICE[MIN]++;
    }
    MAX = EncontraMaiorCarga(VET_CARGAS, CAMINHOES);
    printf ("%d $%d\n", MAX, MAX*FRETE*CAMINHOES);
    free (VET_PESOS);
    free (VET_CARGAS);
    free (INDICE);
    free (SOMA);
    N--;
  }
  return 0;
}
