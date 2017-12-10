#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

void addZeros(string &str){
	while (str.size() < 4)
		str = '0'+ str;
}

void delFront(string &str){
	int size;
	size = str.size();
	if (size > 4)
		str.erase(0, abs(4 - size));
}

int main() {
	int index, i;
	double valor;
	string aposta, sorteado;
	vector<int> grupos;

	grupos.resize(100, 0);
	index = 0;
	grupos[0] = 24;
	for (i = 1; i < 100; i++){
		grupos[i] = index; 
		if (i % 4 == 0)
			index++;
	}

	while (true) {
		cin >> valor >> aposta >> sorteado;
		if (valor == 0 && aposta == "0" && sorteado == "0")
			break;
		addZeros(aposta);
		addZeros(sorteado);
		delFront(aposta);
		delFront(sorteado);
		cout.precision(2);
		if (aposta == sorteado)
			cout << fixed << valor * 3000 << endl;
		else {
			aposta.erase(0, 1);
			sorteado.erase(0, 1);
			if (aposta == sorteado)
				cout << fixed << valor * 500 << endl;
			else {
				aposta.erase(0, 1);
				sorteado.erase(0, 1);
				if (aposta == sorteado)
					cout << fixed << valor * 50 << endl;
				else if (grupos[stoi(aposta)] == grupos[stoi(sorteado)])
					cout << fixed << valor * 16 << endl;
				else
					cout << fixed << valor * 0 << endl;
			}
		}

		aposta.clear();
		sorteado.clear();
	}
	return 0;
}