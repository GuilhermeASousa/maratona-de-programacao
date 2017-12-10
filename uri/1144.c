#include <stdio.h>

int main() {
	long long int N, i, a;
	scanf ("%lld", &N);
	a = 1;
	for (i = 0; i < N * 2; i++) {
		if (i % 2 == 0)
			printf ("%lld %lld %lld\n", a, a * a, a * (a * a));
		else {
			printf ("%lld %lld %lld\n", a, (a * a) + 1, (a * (a * a)) + 1);
			a++;	
		}
	}
	return 0;
}