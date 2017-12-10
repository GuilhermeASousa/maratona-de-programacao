#include <stdio.h>

int main (){
	double O, B, I;
	scanf ("%lf %lf %lf", &O, &B, &I);
	if (O < B && O < I)
		printf ("Otavio\n");
	else if (B < O && B < I)
		printf ("Bruno\n");
	else if (I < B && I < O)
		printf ("Ian\n");
	else
		printf ("Empate\n");
	return 0;
}