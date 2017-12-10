#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
void zeraVetor (int (&vetor)[14]) {
	int i;
	for (i = 0; i <= 13; i++) {
		vetor[i] = 0;
	}
}

int variedadeCartas (int vetor[14]) {
	int i, contador;
	contador = 0;
	for (i = 1; i <= 13; i++) {
		if (vetor[i] != 0)
			contador++;
	}
	return contador;
}

int regraUmSete (vector<int> cartas) {
	int i;
	for (i = 0; i < 5; i++) {
		if (i != 4) {
			if (cartas[i + 1] != cartas[i] + 1) {
				return 0;
			}	
		}
	}
	return cartas[0] + 200; 
}

int regraDoisTres (int vetor[14]) {
	int i;
	for (i = 1; i <= 13; i++) {
		if (vetor[i] == 4) {
			return i + 180;
		}
		else if (vetor[i] == 3) {
			return i + 160;
		}
	}
}

int regraQuatroCinco (int vetor[14]) {
	int i, x, y;
	x = y = 0;
	for (i = 1; i <= 13; i++) {
		if (vetor[i] == 3) {
			return i + 140;
		}
		else if (vetor[i] == 2) {
			if (i > x) {
				y = x;
				x = i;
			}
			else
				y = i;
		}
	}
	return (3 * x)+(2 * y)+20;
}

int regraSeis (int vetor[14]) {
	int i;
	for (i = 1; i <= 13; i++) {
		if (vetor[i] == 2) {
			return i;
		}
	}
}

int main() {
	int qt_testes, id_teste, i, j, carta, cartas_aux[14], c, pontuacao;
	vector <int> cartas;
	cin >> qt_testes;
	id_teste = 1;
	for (i = 0; i < qt_testes; i++) {
		zeraVetor(cartas_aux);
		for (j = 0; j < 5; j++) {
			cin >> carta;
			cartas_aux[carta]++;
			cartas.push_back(carta);
		}
		sort(cartas.begin(), cartas.end());
		c = variedadeCartas(cartas_aux);
		if (c == 2) {
			pontuacao = regraDoisTres(cartas_aux);
		}
		else if (c == 3) {
			pontuacao = regraQuatroCinco(cartas_aux);
		}
		else if (c == 4) {
			pontuacao = regraSeis(cartas_aux);
		}
		else if (c == 5) {
			pontuacao = regraUmSete(cartas);
		}
		cout << "Teste " << id_teste << endl;
		cout << pontuacao << endl << endl;
		cartas.clear();
		id_teste++;
	}
	return 0;
}