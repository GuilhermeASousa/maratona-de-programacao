#include <iostream>
 
using namespace std;

unsigned long long int graosToKg(unsigned long long int graos){
	return (graos / 12) / 1000; 
}

unsigned long long int contaGraos(int casas){
	int i;
	unsigned long long int graos, aux;
	graos = 0;
	aux = 1;
	for (i = 0; i < casas; i++){
		graos += aux;
		aux *= 2;	
	}
	return graos;
}

int main() {
	int N, X, i;
	unsigned long long int graos;
	cin >> N;
	for (i = 0; i < N; i++){
		cin >> X;
		graos = contaGraos(X);
		cout << graosToKg(graos) << " kg" << endl;
	}
	return 0;
}