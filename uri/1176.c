#include <stdio.h>

void fibonacci(unsigned long long *result) {
	int i, j, k;
	result[0] = 0;
	result[1] = 1;
	i = 0;
	j = 1;
	k = 2;
	while (k <= 60)
	{
		result[k] = result[i] + result[j];
		i++;
		j++;
		k++;
	}	
}

int main() {
	int T, N, i;
	unsigned long long int result[61];
	scanf ("%d", &T);
	fibonacci(result);
	for (i = 0; i < T; i++) {
		scanf ("%d", &N);
		printf ("Fib(%d) = %lld\n", N, result[N]);
	}
	return 0;
}