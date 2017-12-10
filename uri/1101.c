#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int N, M, SOMA, i;
	scanf ("%d %d", &N, &M);
	while (N > 0 && M > 0)
	{
		SOMA = 0;
		if (N > M)
			for (i = M; i <= N; i++)
			{
				printf ("%d ", i);
				SOMA += i;
			}
		if (M > N)
			for (i = N; i <= M; i++)
			{
				printf ("%d ", i);
				SOMA += i;
			}
		printf ("Sum=%d\n", SOMA);
		scanf ("%d %d", &N, &M);
	}
	return 0;
}