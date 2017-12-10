#include <iostream>
 
using namespace std;

int main () {
	int contador, qt_numeros, numero, soma;
	soma = 0;
	cin >> qt_numeros;
	for (contador = 0; contador < qt_numeros; contador++) {
		cin >> numero;
		soma += numero;
	}
	cout << soma << endl;
	return 0;
}