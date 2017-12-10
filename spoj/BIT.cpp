#include <iostream>
#include <vector>
using namespace std;

int main() {	
	int valor, id_teste;
	vector<int> qt_cedulas;
	id_teste = 1;
	while (true) {
		cin >> valor;
		if (valor == 0)
			break;
		qt_cedulas.clear();
		qt_cedulas.resize(4, 0);
		while (valor >= 50) {
			valor -= 50;
			qt_cedulas[0]++;
		}
		while (valor >= 10) {
			valor -= 10;
			qt_cedulas[1]++;
		}
		while (valor >= 5) {
			valor -= 5;
			qt_cedulas[2]++;
		}
		while (valor >= 1) {
			valor -= 1;
			qt_cedulas[3]++;
		}
		cout << "Teste " << id_teste << endl;
		cout << qt_cedulas[0] << " " << qt_cedulas[1] << " " << qt_cedulas[2] << " " << qt_cedulas[3] << endl << endl;
		id_teste++;
	}
	return 0;
}