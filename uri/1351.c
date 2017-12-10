#include <stdio.h>
#include <stdlib.h>
 
void **LiberaMemoria (int TAMANHO, double **MATRIZ)
{
  int  i; 
  for (i = 0; i <= TAMANHO; i++) 
    free (MATRIZ[i]); 
  free (MATRIZ);   
}

void Inicializa (double **MATRIZ, int NUMLINHAS, int NUMCOLUNAS)
{
  int i, j;
  for (i = 0; i <= NUMLINHAS; i++)
    for (j = 0; j <= NUMCOLUNAS; j++)
      if (j == 0) MATRIZ[i][j] = 0.0;  
      else MATRIZ[i][j] = 1000000.0;
}
 
void FazCompra (double **MATRIZ, int PRODSUP[], int LISTA[], double PRECO[], int NUMLINHAS, int NUMCOLUNAS)
{
  int i, j;
  i = 1;
  while (i <= NUMLINHAS)
  {
    j = 1;
    while (j <= NUMCOLUNAS)
    {
      if (PRODSUP[i] != LISTA[j])
        MATRIZ[i][j] = MATRIZ[i - 1][j];
      else
      {
        if (MATRIZ[i - 1][j - 1] + PRECO[i] < MATRIZ[i - 1][j])
          MATRIZ[i][j] = MATRIZ[i - 1][j - 1] + PRECO[i];
        else 
          MATRIZ[i][j] = MATRIZ[i - 1][j];
      }
      j++;
    }
    i++;
  }
}

int main()
{
  int M, N, *X, *K, i, j;
  double *P, **MATRIZ;
  scanf ("%d %d", &M, &N);
  while (M != 0 && N!= 0)
  {
    MATRIZ = (double **) malloc ((N + 1) * sizeof(double*));
    for (i = 0; i <= N; i++) 
      MATRIZ[i] = (double*) malloc ((M + 1) * sizeof(double));
    Inicializa(MATRIZ, N, M);
    X = malloc(sizeof(int) * (M + 1));
    K = malloc(sizeof(int) * (N + 1));
    P = malloc(sizeof(double) * (N + 1));
    for (i = 1; i <= M; i++)
    {
      scanf ("%d", &X[i]);
    }
    for (i = 1; i <= N; i++)
    {
      scanf ("%d %lf", &K[i], &P[i]);
    }
    FazCompra (MATRIZ, K, X, P, N, M);
    if (MATRIZ[N][M] == 0 || MATRIZ[N][M] >= 1000000.0)
      printf("Impossible\n");
    else
      printf("%.2lf\n", MATRIZ[N][M]);
    free(X);
    free(K);
    free(P);
    LiberaMemoria (N, MATRIZ);
    scanf ("%d %d", &M, &N);
  }
  return 0;
}