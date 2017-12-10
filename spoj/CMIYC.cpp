#include <iostream>

using namespace std;
int main() {
	long long int qt_testes, tamanho_poligono, i;
	cin >> qt_testes;
	for (i = 0; i < qt_testes; i++) {
		cin >> tamanho_poligono;
		if (tamanho_poligono % 3 == 0)
			cout << tamanho_poligono / 3 << endl;
		else
			cout << "0" << endl;
	}
	return 0;
}