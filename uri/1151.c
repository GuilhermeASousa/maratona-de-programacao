#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int N, *VETOR, i;
	scanf ("%d", &N);
	VETOR = malloc(sizeof (int) * N);
	i = 0;
	while (i < N)
	{
		if (i == 0)
			VETOR[i] = 0;
		else if (i == 1 || i == 2)
			VETOR[i] = 1;
		else 
			VETOR[i] = VETOR[i - 1] + VETOR[i - 2];
		if (i + 1 != N)
			printf ("%d ", VETOR[i]);
		else 
			printf ("%d\n", VETOR[i]);
		i++;
	}
	free (VETOR);
	return 0;
}