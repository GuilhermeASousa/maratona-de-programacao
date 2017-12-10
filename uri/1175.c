#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int VETOR[20], AUX, i, j;
	for (i = 0; i <= 19; i++)
		scanf ("%d", &VETOR[i]);
	for (i = 0, j = 19; i <= 9 && j >= 10; i++, j--)
	{
		AUX = VETOR[i];
		VETOR[i] = VETOR[j];
		VETOR[j] = AUX;
	}
	for (i = 0; i <= 19; i++)
		printf ("N[%d] = %d\n", i, VETOR[i]);
	return 0;
}