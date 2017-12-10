#include <iostream>
#include <cmath>
#include <limits>

using namespace std;
int main() {
	long long int id_teste; 
	double qt_discos, qt_movimentos;
	cin >> qt_discos;
	id_teste = 1;
	cout.precision(0);
	while (qt_discos != 0) {
		qt_movimentos = pow (2.0, qt_discos) - 1;
		cout << "Teste " << id_teste << endl;
		cout << fixed << qt_movimentos << endl << endl;
		cin >> qt_discos;
		id_teste++;
	}
	return 0;
}