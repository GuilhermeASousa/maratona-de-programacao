#include <stdio.h>
#include <stdlib.h>

void Inicializa_Vertices(int V[], int TAMANHO)
{ 
	int i;
	for (i = 0; i < TAMANHO; i++)
	{
  		V[i] = i + 1;
  	}
}

void ConectorDeVertices (int V[], int TAMANHO, int INDICE_ATUAL, int INDICE_DEPOIS)
{
	int i;
	for (i = 0; i < TAMANHO; i++)
	{
		if (V[i] == INDICE_ATUAL)
			V[i] = INDICE_DEPOIS;
	}
}

void QuickSort (int V1[], int V2[], long long int PESO[], int ESQUERDA, int DIREITA)
{
    int i, j, X, Y;
    i = ESQUERDA;
    j = DIREITA;
    X = PESO[(ESQUERDA + DIREITA) / 2];
    while (i <= j)
    {
        while (PESO[i] < X && i < DIREITA)
        {
            i++;
        }
        while (PESO[j] > X && j > ESQUERDA)
        {
            j--;
        }
        if (i <= j)
        {
            Y = PESO[i];
            PESO[i] = PESO[j];
            PESO[j] = Y;
            Y = V1[i];
            V1[i] = V1[j];
            V1[j] = Y;
            Y = V2[i];
            V2[i] = V2[j];
            V2[j] = Y;
            i++;
            j--;
        }
    }
    if(j > ESQUERDA)
    {
        QuickSort(V1, V2, PESO, ESQUERDA, j);
    }
    if(i < DIREITA)
    {
        QuickSort(V1, V2, PESO,  i, DIREITA);
    }
}

int main ()
{
    int VERTICES, ARESTAS, *V1, *V2, i, *VTS, CONTA_VERTICES;	
    long long int *PESO, RESULTADO, GASTOS_ANTES;
	scanf ("%d %d", &VERTICES, &ARESTAS);
	while (VERTICES != 0 && ARESTAS != 0)
	{
		RESULTADO = 0;
		GASTOS_ANTES = 0;
		V1 = malloc (sizeof (int) * ARESTAS);
		V2 = malloc (sizeof (int) * ARESTAS);
		PESO = malloc (sizeof (long long int) * ARESTAS);
		VTS = malloc (sizeof (int) * VERTICES);
		Inicializa_Vertices(VTS, VERTICES);
		for (i = 0; i < ARESTAS; i++)
		{ 
			scanf ("%d %d %lld", &V1[i], &V2[i], &PESO[i]);
			GASTOS_ANTES += PESO[i];
		}
		QuickSort (V1, V2, PESO, 0, ARESTAS - 1); 
		CONTA_VERTICES = 1;
    	for (i = 0; i < ARESTAS; i++)
    	{
      		if (CONTA_VERTICES == VERTICES) break;
      		if (VTS[V1[i]] != VTS[V2[i]])
      		{
      			RESULTADO += PESO[i];
      			if (VTS[V2[i]] != V2[i] + 1 && VTS[V1[i]] == V1[i] + 1)
      				VTS[V1[i]] = VTS[V2[i]];
      			else if (VTS[V1[i]] != V1[i] + 1 && VTS[V2[i]] == V2[i] + 1)
      				VTS[V2[i]] = VTS[V1[i]];
      			else if (VTS[V1[i]] != V1[i] + 1 && VTS[V2[i]] != V2[i] + 1)
      				ConectorDeVertices (VTS, VERTICES, VTS[V2[i]], VTS[V1[i]]);
      			else
      			{
      				VTS[V1[i]] *= (-1);
      				VTS[V2[i]] = VTS[V1[i]];
      			}
      			PESO[i] = 0;
      			CONTA_VERTICES++;
      		}
    	}
		RESULTADO = GASTOS_ANTES - RESULTADO;
		printf ("%lld\n", RESULTADO);
		free (V1);
		free (V2);
		free (PESO);
		free (VTS);
		scanf ("%d %d", &VERTICES, &ARESTAS);
	}
	return 0;
}