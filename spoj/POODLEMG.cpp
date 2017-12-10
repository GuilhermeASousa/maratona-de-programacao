#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	int qt_paginas, i;
	double qt_docs, qt_resultadosPagina;
	string poodle;
	while (true) {
		cin >> qt_docs >> qt_resultadosPagina;
		if (qt_docs == 0 && qt_resultadosPagina == 0)
			break;
		qt_paginas = ceil(qt_docs/qt_resultadosPagina);
		if (qt_paginas <= 6)
			cout << "Poodle" << endl;
		else if (qt_paginas >= 20)
			cout << "Poooooooooooooooodle" << endl;
		else {
			poodle = "Poo";
			for (i = 0; i < qt_paginas - 6; i++){
				poodle = poodle + "o";
			}
			poodle = poodle + "dle";
			cout << poodle << endl;
		}

	}
	return 0;
}