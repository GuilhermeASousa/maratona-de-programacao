#include <stdio.h>
#include <stdlib.h>

void **LiberaMemoria (int **MATRIZ, int TAMANHO)
{
  int  i; 
  for (i = 0; i < TAMANHO; i++) 
    free (MATRIZ[i]); 
  free (MATRIZ);   
}

void Busca(int **MATRIZ, int TAMANHO, int *INDICE, int INICIO, int *MOVIMENTACOES)
{
	int i;
	INDICE[INICIO] = 1;
    for(i = 0; i < TAMANHO; i++)
    	if(MATRIZ[INICIO][i] == 1 && INDICE[i] == 0)
        {
        	*MOVIMENTACOES = *MOVIMENTACOES + 1;
            Busca (MATRIZ, TAMANHO, INDICE, i, MOVIMENTACOES);
        }
}

int main ()
{
	int NUM_TESTES, CONT, PONTO_INICIO, VERTICES, ARESTAS, **MATRIZ, i, V1, V2, *INDICE, MOVIMENTACOES;
	scanf ("%d", &NUM_TESTES);
	for (CONT = 0; CONT < NUM_TESTES; CONT++)
	{
		MOVIMENTACOES = 0;
    	scanf ("%d", &PONTO_INICIO);
        scanf ("%d %d", &VERTICES, &ARESTAS);
        INDICE = malloc (sizeof (int) * (VERTICES + 1));
        for (i = 0; i <= VERTICES; i++)
        	INDICE[i] = 0;
        MATRIZ = (int **) calloc (VERTICES + 1, sizeof(int *));
    	for (i = 0; i <= VERTICES; i++) 
      		MATRIZ[i] = (int*) calloc (VERTICES + 1, sizeof(int));
      	for (i = 0;  i < ARESTAS; i++)
      	{
      		scanf ("%d %d", &V1, &V2);
      		MATRIZ[V1][V2] = 1;
      		MATRIZ[V2][V1] = 1;
      	}
      	Busca (MATRIZ, VERTICES + 1, INDICE, PONTO_INICIO, &MOVIMENTACOES);
      	printf ("%d\n", MOVIMENTACOES * 2);
      	free (INDICE);
      	LiberaMemoria (MATRIZ, VERTICES + 1);
	}
	return 0;
}