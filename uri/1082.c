#include <stdio.h>
#include <stdlib.h>

void **LiberaMemoria (int TAMANHO, int **MATRIZ)
{
  int  i; 
  for (i = 0; i < TAMANHO; i++) 
    free (MATRIZ[i]); 
  free (MATRIZ);   
}

void InicializaIndice (int INDICE[], int TAMANHO)
{
  int i;
  for (i = 0; i < TAMANHO; i++)
    INDICE[i] = 0;
}

void Imprime (int TAMANHO, int **MATRIZ, int *INDICE, int TESTE)
{
  int i, j, AUX;
  AUX = 0;
  printf("Case #%d:\n", TESTE);
  for (i = 0; i < TAMANHO; i++)
  {
    if (INDICE[i] != 1)
    {
      printf ("%c,", i + 97);
      AUX++;
      INDICE[i] = 1;
      for (j = 0; j < TAMANHO; j++)
        if (MATRIZ[i][j] != 0 && i != j)
        {
      	  INDICE[j] = 1;
          printf ("%c,", j + 97);
        }
    printf ("\n");
    }
  }
  printf("%d connected components\n", AUX);
}

void LigandoPontos (int **MATRIZ, int TAMANHO)
{
  int i, j, k;
  for (i = 0; i < TAMANHO; i++)
    for (j = 0; j < TAMANHO; j++)
      if (MATRIZ[i][j] == 1)
      {
      	for (k = 0; k < TAMANHO; k++)
      	  if (MATRIZ[i][k] == 0 && MATRIZ[j][k] == 1)
      	    MATRIZ[i][k] = 1;
      	MATRIZ[i][j] = 2;
      	j = 0;
      }
}

int main()
{
  int N, V, E, i, TESTE, **MATRIZ, *INDICE, j, k;
  char A, B;
  scanf ("%d", &N);
  TESTE = 1;
  while (N > 0)
  {
    scanf ("%d %d", &V, &E);
    INDICE = malloc (sizeof(int) * V);
    InicializaIndice (INDICE, V);
    MATRIZ = (int **) calloc (V, sizeof(int *));
    for (i = 0; i < V; i++) 
      MATRIZ[i] = (int*) calloc (V, sizeof(int));
    for (i = 0; i < E; i++)
    {
      getchar();
      scanf ("%c %c", &A, &B);
      MATRIZ[A - 97][B - 97] = 1;
      MATRIZ[B - 97][A - 97] = 1;
    }
    LigandoPontos (MATRIZ, V);
    Imprime (V, MATRIZ, INDICE, TESTE);
    free (INDICE);
    LiberaMemoria(V, MATRIZ);
    N--;
    TESTE++;
    printf("\n");
  }
  return 0;
}