#include <iostream>
#include <stdlib.h> 

using namespace std;
int main() {
	int altura_pulo, qt_canos, altura_cano, aux, i;
	bool flag;
	aux = 0;
	flag = true;
	cin >> altura_pulo >> qt_canos;
	for (int i = 0; i < qt_canos; i++)
	{
		cin >> altura_cano;
		if (aux != 0) {
			if (abs(altura_cano - aux) > altura_pulo) {
				cout << "GAME OVER" << endl;
				flag = false;
				break;
			}
		}
		aux = altura_cano;
	}
	if (flag)
		cout << "YOU WIN" << endl;
	return 0;
}