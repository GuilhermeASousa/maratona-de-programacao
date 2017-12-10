#include <iostream>
using namespace std;

int main() {	
	int qt_postos, dt_intermedMax, pos_postoAgua, pos_postoAguaAnterior, diferenca, flag, i;
	cin >> qt_postos>> dt_intermedMax;
	cin >> pos_postoAgua;
	flag = 0;
	for (i = 0; i <= qt_postos - 1; i++)
	{	
		if (i == qt_postos - 1) {
			diferenca = 42195 - pos_postoAgua;
			if (diferenca > dt_intermedMax)
				flag = 1;	
		}
		else {
			pos_postoAguaAnterior = pos_postoAgua;
			cin >> pos_postoAgua;
			diferenca = pos_postoAgua - pos_postoAguaAnterior;
			if (diferenca > dt_intermedMax) {
				flag = 1;
				break;
			}
		}
	}
	if (flag == 1) 
		cout << "N" << endl;
	else
		cout << "S" << endl;
	return 0;
}