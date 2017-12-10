#include <stdio.h>

int main ()
{
	int VALOR, RESULTADO, i;
	scanf ("%d", &VALOR);
	RESULTADO = 1;
	for (i = VALOR; i > 1; i--)
	{
		RESULTADO *= i;
	}
	printf ("%d\n", RESULTADO);
	return 0;
}
