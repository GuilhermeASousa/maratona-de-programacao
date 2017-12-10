#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Comercio (int *GARRAFAS, int HABITANTES)
{
	long long int TRABALHO;
	int i, j, FLAG;
	TRABALHO = 0;
	FLAG = 0;
	for (i = 0; i < HABITANTES; i++)
	{
		if (GARRAFAS[i] > 0)
			for (j = FLAG; j < HABITANTES; j++)
			{
				if (GARRAFAS[j] < 0)
				{
					FLAG = j;
					if (GARRAFAS[i] > abs(GARRAFAS[j]))
					{
						TRABALHO += abs (i - j) * abs (GARRAFAS[j]);
						GARRAFAS[i] += GARRAFAS[j];
						GARRAFAS[j] = 0;
						FLAG = j + 1;
					}
					else if (GARRAFAS[i] < abs(GARRAFAS[j]))
					{
						TRABALHO += abs (i - j) * GARRAFAS[i];
						GARRAFAS[j] += GARRAFAS[i];
						GARRAFAS[i] = 0;
					}
					else
					{
						TRABALHO += abs (i - j) * GARRAFAS[i];
						GARRAFAS[i] = 0;
						GARRAFAS[j] = 0;
						FLAG = j + 1;
					}
				}
				if (GARRAFAS [i] == 0)
					break;
			}
	}
	printf ("%lld\n", TRABALHO);
}

int main ()
{
	int HABITANTES, *GARRAFAS, i;
	scanf ("%d", &HABITANTES);
	while (HABITANTES != 0)
	{
		GARRAFAS = malloc (sizeof (int) * HABITANTES);
		for (i = 0; i < HABITANTES; i++)
		{
			scanf ("%d", &GARRAFAS[i]);
		}
        Comercio (GARRAFAS, HABITANTES);
		free (GARRAFAS);
		scanf ("%d", &HABITANTES);
	} 
	return 0;
}