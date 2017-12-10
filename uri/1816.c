#include <stdio.h>
#include <stdlib.h>

void InicializaVetor (char vetor[])
{
	int i;
	for (i = 0; i < 26; i++)
		vetor[i] = i + 65;
}

void RedefineLista (char vetor[], int cod)
{
	char aux;
	int i;
	aux = vetor[cod - 1];
	for (i = cod - 1; i > 0; i--)
		vetor[i] = vetor[i - 1];
	vetor[0] = aux;
}

int main ()
{
	int m, cod, i, inst;
	char vetor[26];
	scanf ("%d", &m);
	inst = 1;
	while (m != 0)
	{
		InicializaVetor (vetor);
		printf ("Instancia %d\n", inst);
		for (i = 0; i < m; i++)
		{
			scanf ("%d", &cod);
			printf ("%c", vetor[cod - 1]);
			RedefineLista (vetor, cod);
		}
		printf ("\n\n");
		inst++;
		scanf ("%d", &m);
	}
	return 0;
}