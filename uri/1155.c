#include <stdio.h>

int main (){
	double total, i, j;
	total = 0;
	i = 1.00;
	for (j = 1; j <= 100; j++)
		total += (i/j);
	printf ("%.2lf\n", total);
	return 0;
}