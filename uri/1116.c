#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int N;
	double X, Y, RESULTADO;
	scanf ("%d", &N);
	while (N > 0)
	{
		scanf ("%lf %lf", &X, &Y);
		if (Y == 0)
			printf ("divisao impossivel\n");
		else 
		{
			RESULTADO = X/Y;
			printf ("%.1lf\n", RESULTADO);
		}
		N--;
	}	
	return 0;
}