#include <stdio.h>
#include <stdlib.h>
 
void **LiberaMemoria (int TAMANHO, int **MATRIZ)
{
  int  i; 
  for (i = 0; i < TAMANHO; i++) 
    free (MATRIZ[i]); 
  free (MATRIZ);   
}

void Inicializa (int **MATRIZ, int TAMANHO)
{
  int i, j;
  for (i = 0; i < TAMANHO; i++)
    for (j = 0; j < TAMANHO; j++)
      MATRIZ[i][j] = 1000000;
}

void PreencheMatriz (int **MATRIZ, int TAMANHO)
{
  int i, j, k;
  for(i = 0; i < TAMANHO; i++)
    for(j = 0; j < TAMANHO; j++)
      for(k = 0; k < TAMANHO; k++)
      {
        if(MATRIZ[j][k] > MATRIZ[j][i] + MATRIZ[i][k] && MATRIZ[j][i] + MATRIZ[i][k] < 1000000)
          MATRIZ[j][k] = MATRIZ[j][i] + MATRIZ[i][k];
      }
}

int main()
{
  int N, E, **MATRIZ, i, X, Y, H, K, O, D;
  scanf ("%d %d", &N, &E);
  while (N != 0 || E != 0)
  {
    MATRIZ = (int **) malloc (N * sizeof(int*));
    for (i = 0; i < N; i++) 
      MATRIZ[i] = (int*) malloc (N * sizeof(int));
    Inicializa(MATRIZ, N);
    for (i = 0; i < E; i++)
    {
      scanf ("%d %d %d", &X, &Y, &H);
      if (MATRIZ[Y - 1][X - 1] != 0 && MATRIZ[Y - 1][X - 1] < 1000000)
      {
        MATRIZ[Y - 1][X - 1] = 0;
        MATRIZ[X - 1][Y - 1] = 0;
      }
      else
        MATRIZ[X - 1][Y - 1] = H;
    }
    PreencheMatriz (MATRIZ, N);
    scanf("%d", &K);
    for (i = 0; i < K; i++)
    {
      scanf ("%d %d", &O, &D);
      if (MATRIZ[O - 1][D - 1] >= 1000000)
        printf("Nao e possivel entregar a carta\n");
      else
        printf("%d\n", MATRIZ[O - 1][D - 1]);
    }
    LiberaMemoria(N, MATRIZ);
    scanf ("%d %d", &N, &E);
    printf("\n");
  }
  return 0;
}