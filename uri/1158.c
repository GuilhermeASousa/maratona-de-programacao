#include <stdio.h>

int main(){
	int N, X, Y, total, i, j;
	scanf ("%d", &N);
	for (i = 0; i < N; i++){
		scanf ("%d %d", &X, &Y);
		j = X;
		total = 0;
		while (Y > 0){
			if (j % 2 != 0){
				total += j;
				Y--;
			}
			j++;
		}	
		printf ("%d\n", total);
	}
	return 0;
}