#include <stdio.h>

int main (){
	double total, i, j;
	total = 0;
	i = 1.00;
	j = 1.00;
	for (i = 1; i <= 39; i += 2){
		total += (i/j);
		j *= 2;
	}
	printf ("%.2lf\n", total);
	return 0;
}