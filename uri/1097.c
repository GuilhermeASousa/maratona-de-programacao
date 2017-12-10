#include <stdio.h>

int main ()
{
	int i, j, k;
	k = 5;
	for (i = 1; i <= 9; i += 2)
	{
		k += 2;
		for (j = k; j >= k - 2; j--)
		{
			printf ("I=%d J=%d\n", i, j);
		}
	}
	return 0;
}