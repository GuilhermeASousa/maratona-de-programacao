#include <stdio.h>

int main (){
	int N, i, total;
	char V;
	scanf ("%d", &N);
	V = getchar();
	for (i = 0; i < N; i++){
		total = 0;
		while ((V = getchar()) != '\n'){
			if (V == '1')
				total += 2;
			else if (V == '2' || V == '3' || V == '5')
				total += 5;
			else if (V == '4')
				total += 4;
			else if (V == '6' || V == '9' || V == '0')
				total += 6;
			else if (V == '7')
				total += 3;
			else if (V == '8')
				total += 7;
		}
		printf ("%d leds\n", total);
	}
	return 0;
}