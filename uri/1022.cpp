#include <iostream>
#include <vector>
#include <stdlib.h> 
 
using namespace std;
 
void mdc(int numerador, int denominador) {
	int i;
	for (i = abs( min(numerador, denominador) ); i > 0 ; i--){
		if (numerador % i == 0 && denominador % i == 0) {
			numerador /= i;
			denominador /= i;
			break;
		}
	}
	cout << numerador << "/" << denominador << endl;
}

int main() {
	int qt_testes, n1, d1, n2, d2, numerador, denominador, i; 
	char op, aux;
	cin >> qt_testes;
	for (i = 0; i < qt_testes; i++) {
		cin >> n1 >> aux >> d1 >> op >> n2 >> aux >> d2;
		if (op == '+') {
			numerador = (n1*d2)+(n2*d1);
			denominador = d1*d2; 
		}
		else if (op == '-') {
			numerador = (n1*d2)-(n2*d1);
			denominador = d1*d2; 
		}
		else if (op == '*') {
			numerador = n1*n2;
			denominador = d1*d2; 
		}
		else if (op == '/') {
			numerador = n1*d2;
			denominador = n2*d1; 
		}
		cout << numerador << "/" << denominador << " = ";
		mdc(numerador, denominador);
	}
    return 0;
}