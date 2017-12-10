#include <stdio.h>

int main ()
{
	int VALOR, VETOR[10], i;
	scanf ("%d", &VALOR);
	for (i = 0; i < 10; i++)
	{
		VETOR[i] = VALOR;
		VALOR *= 2;
		printf ("N[%d] = %d\n", i, VETOR[i]);
	}
	return 0;
}