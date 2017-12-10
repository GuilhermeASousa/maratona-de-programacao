#include <iostream>
 
using namespace std;
 
int main() {
	int medidas_de_paisagem, altura_inicio, altura, menor, maior, i, flag;
	cin >> medidas_de_paisagem;
	menor = 0;
	maior = 0;
	flag = 0;
	cin >> altura_inicio >> altura;
	if (altura_inicio > altura)
		menor = 1;
	else if (altura_inicio < altura)
		maior = 1;
	else {
		cout << "0" << endl;
	}
	if (altura_inicio != altura) {
		for (i = 0; i < medidas_de_paisagem - 2; i++) {
			altura_inicio = altura;
			cin >> altura;
			if ((altura_inicio > altura && menor == 1) || (altura_inicio < altura && maior == 1) || altura_inicio == altura) {
				cout << "0" << endl;
				flag = 1;
				break;
			}
			else if (altura_inicio > altura) {
				menor = 1;
				maior = 0;
			}
			else if (altura_inicio < altura) {
				maior = 1;
				menor = 0;
			}
		}
		if (flag == 0)
			cout << "1" << endl;
	}
	return 0;
}