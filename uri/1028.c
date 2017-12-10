#include <stdio.h>

int maiorMenor (int a, int b){
	if (a > b)
		return a;
	else if (b > a)
		return b;
	else
		return 0;
}

int mdc (int dividendo, int divisor) {
	int z;
	z = 1;
	while ( z !=0 ){
 		z = dividendo % divisor;
 		dividendo = divisor;
 		divisor = z;
 	};
	return dividendo;
}

int main (){
	int N, F1, F2, i;
	scanf ("%d", &N);
	for (i = 0; i < N; i++){
		scanf ("%d %d", &F1, &F2);
		if (maiorMenor(F1, F2) == 0)
			printf ("%d\n", F1);
		else if (maiorMenor(F1, F2) == F1){
			if (F1 % F2 == 0)
				printf ("%d\n", F2);
			else
				printf ("%d\n", mdc(F1, F2));	
		}
		else {
			if (F2 % F1 == 0)
				printf ("%d\n", F1);
			else 
				printf ("%d\n", mdc(F2, F1));
		}
	}
	return 0;
}