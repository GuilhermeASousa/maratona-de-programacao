#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Inicializa_Vertices(int V1[], int TAMANHO)
{ 
  int i;
  for (i = 0; i < TAMANHO; i++)
  {
    V1[i] = i;
  }
}

int Calcula_Num_Arestas (int N)
{
  int TOTAL;
  TOTAL = ((N * N) - N) / 2;
  return TOTAL;
}


int Procura_Vertice (int A[], int V, int TAMANHO)
{
  int i;
  for (i = 0; i < TAMANHO; i++)
  {
    if (A[i] == V) return 1;
  }
  return 0;
}

void quickSort (int V1[], int V2[], int PESOS[], int esquerda, int direita)
{
    int i, j, x, y;
    i = esquerda;
    j = direita;
    x = PESOS[(esquerda + direita) / 2];
    while(i <= j)
    {
        while(PESOS[i] < x && i < direita)
        {
            i++;
        }
        while(PESOS[j] > x && j > esquerda)
        {
            j--;
        }
        if(i <= j)
        {
            y = PESOS[i];
            PESOS[i] = PESOS[j];
            PESOS[j] = y;
            y = V1[i];
            V1[i] = V1[j];
            V1[j] = y;
            y = V2[i];
            V2[i] = V2[j];
            V2[j] = y;
            i++;
            j--;
        }
    }
    if(j > esquerda)
    {
        quickSort(V1, V2, PESOS, esquerda, j);
    }
    if(i < direita)
    {
        quickSort(V1, V2, PESOS,  i, direita);
    }
}

int main ()
{
  int C, N, *X, *Y, AUX, AUX2, *V1, *V2, i, j, BACKUP_N, *PESOS, *VERTICES;
  double RESULTADO;
  scanf ("%d", &C);
  while (C > 0)
  {
    RESULTADO = 0;
    AUX = 0;
    scanf("%d", &N);
    BACKUP_N = N;
    PESOS = malloc (sizeof(int) * Calcula_Num_Arestas(N));
    V1 = malloc (sizeof(int) * Calcula_Num_Arestas(N));
    V2 = malloc (sizeof(int) * Calcula_Num_Arestas(N));
    VERTICES = malloc (sizeof(int) * N);
    Inicializa_Vertices(VERTICES, N);
    X = malloc (sizeof(int) * N);
    Y = malloc (sizeof(int) * N);
    while (N > 0)
    {
      scanf("%d %d", &X[AUX], &Y[AUX]);
      AUX++;
      N--;
    }
    AUX  = 0;
    for (i = 0; i < BACKUP_N - 1; i++)
      for (j = i + 1; j < BACKUP_N; j++)
      {
        V1[AUX] = i;
        V2[AUX] = j;
        PESOS[AUX] = ((X[i] - X[j]) * (X[i] - X[j]) + (Y[i] - Y[j]) * (Y[i] - Y[j]));
        AUX++;
      }
    quickSort (V1, V2, PESOS, 0, Calcula_Num_Arestas(BACKUP_N) - 1); 
    AUX = 0;
    AUX2 = 0;
    VERTICES[V1[AUX2]] = -1;
    AUX++;
    VERTICES[V2[AUX2]] = -1;
    RESULTADO += sqrt(PESOS[AUX2]);   
    AUX++;
    AUX2++;
    for (i = 0; i < Calcula_Num_Arestas(BACKUP_N); i++)
    {
      if (AUX == BACKUP_N) break;
      if (PESOS[i] != 0)
      {
        if (V1[i] != VERTICES[V1[i]] && V2[i] == VERTICES[V2[i]])
        {
          RESULTADO += sqrt(PESOS[i]); 
          VERTICES[V2[i]] = -1;
          PESOS[i] = 0;
          AUX++;
          AUX2++; 
          i = 0;
        }     
        else if (V1[i] == VERTICES[V1[i]] && V2[i] != VERTICES[V2[i]])
        {
          VERTICES[V1[i]] = -1;
          RESULTADO += sqrt(PESOS[i]); 
          PESOS[i] = 0;
          AUX++;
          AUX2++;
          i = 0;
        }
      }
    }
    printf("%.2lf\n", RESULTADO/100);
    free(X);
    free(Y);
    free(PESOS);
    free(V1);
    free(V2);
    free(VERTICES);
    C--;
  }
  return 0;
}