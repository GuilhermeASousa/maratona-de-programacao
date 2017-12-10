#include <stdio.h>
#include <stdlib.h>

int Fibonacci (int NUM, int *CALLS)
{
   if ( NUM == 0 )
      return 0;
   else if ( NUM == 1 )
      return 1;
   else
   {
   	  *CALLS += 2;
      return (Fibonacci(NUM - 1, CALLS) + Fibonacci(NUM - 2, CALLS));
   }
}

int main ()
{
	int NUM_TESTES, CALLS, NUM, VALOR, i;
	scanf ("%d", &NUM_TESTES);
	for (i = 0; i < NUM_TESTES; i++)
	{
		scanf ("%d", &NUM);
		CALLS  = 0;
		VALOR = Fibonacci (NUM, &CALLS);
		printf ("fib(%d) = %d calls = %d\n", NUM, CALLS, VALOR);
	}
	return 0;
}