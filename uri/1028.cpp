#include <iostream>
using namespace std;

int maiorMenorIgual (int a, int b){
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
	while (z !=0){
 		z = dividendo % divisor;
 		dividendo = divisor;
 		divisor = z;
 	};
	return dividendo;
}

int main (){
	int N, F1, F2, i;
	cin >> N;
	for (i = 0; i < N; i++){
		cin >> F1 >> F2;
		if (maiorMenorIgual(F1, F2) == 0)
			cout << F1 << endl;
		else if (maiorMenorIgual(F1, F2) == F1){
			if (F1 % F2 == 0)
				cout << F2 << endl;
			else
				cout << mdc(F1, F2) << endl;	
		}
		else {
			if (F2 % F1 == 0)
				cout << F1 << endl;
			else 
				cout << mdc(F2, F1) << endl;
		}
	}
	return 0;
}