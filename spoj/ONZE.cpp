#include <iostream>
#include <string>
using namespace std;

int main() {
	string numero;
	int soma_pares, soma_impares, i;
	while (true) {
		cin >> numero;
		if (numero == "0")
			break;
		soma_pares = soma_impares = 0;
		for (i = 0; i < numero.size(); i++){
			if (i % 2 == 0)
				soma_pares += numero[i] - '0';
			else
				soma_impares += numero[i] - '0';
		}
		if (abs(soma_pares - soma_impares) % 11 == 0)
			cout << numero << " is a multiple of 11." << endl;
		else
			cout << numero << " is not a multiple of 11." << endl;
		numero.clear();
	}
	return 0;
}