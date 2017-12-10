#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	int NUM_TESTES, POS, TAMANHO, i, j;
	char TEXTO[1000], AUX;
	scanf ("%d ", &NUM_TESTES);
	for (i = 0; i < NUM_TESTES; i++)
	{
		fgets (TEXTO, 1000, stdin);
		TAMANHO = strlen (TEXTO);
		for (j = 0; j < TAMANHO; j++)
		{
			if ((TEXTO[j] >= 97 && TEXTO[j] <= 122) || (TEXTO[j] >= 65 && TEXTO[j] <= 90))
				TEXTO[j] = TEXTO[j] + 3;
		}
		POS = TAMANHO - 2;
		for (j = 0; j < TAMANHO && j < POS; j++)
		{
			AUX = TEXTO[j];
			TEXTO[j] = TEXTO[POS];
			TEXTO[POS] = AUX;
			POS--;
		}
		for (j = (TAMANHO - 1)/2; j < TAMANHO - 1; j++)
		{
			TEXTO[j] = TEXTO[j] - 1;
		}
		printf ("%s", TEXTO);
		strcpy (TEXTO, "\0");
	}
	return 0;
}