#include <stdio.h>
#include <stdlib.h>

int main ()
{
	double VETOR[100];
	int i;
	for (i = 0; i < 100; i++)
	{
		scanf ("%lf", &VETOR[i]);
		if (VETOR[i] <= 10.0)
			printf ("A[%d] = %.1lf\n", i, VETOR[i]);
	}
	return 0;
}