#include <stdio.h>

int main() {
	long long int X, Z, total, cont;
	scanf ("%lld", &X);
	scanf ("%lld", &Z);
	total = 0;
	cont = 0;
	while (Z <= X) {
		scanf ("%lld", &Z);
	}
	while (total <= Z){
		total += X;
		X++;
		cont++;
	}
	printf ("%lld\n", cont);
	return 0;
}