#include <iostream>
using namespace std;

int MAX_INT = 999999999; 

void limpaCidade(int cidade[110][110], int tamanho) {
	int i, j;
	for (i = 0; i < tamanho; i++) {
		for (j = 0; j < tamanho; j++){
			if (i == j)
				cidade[i][j] = 0;
			else
				cidade[i][j] = MAX_INT;

		}
	}	
}

void floydWarshall(int cidade[110][110], int tamanho) {
	int i, j, k;
	for (i = 0; i < tamanho; i++) {
		for (j = 0; j < tamanho; j++) {
			for (k = 0; k < tamanho; k++) {
				if (cidade[j][i] + cidade[i][k] < cidade[j][k] && cidade[j][i] + cidade[i][k] < MAX_INT)
	 				cidade[j][k] = cidade[j][i] + cidade[i][k];	
			}
		}
	}
}

int main() {
	int qt_locais, qt_ruas, cidade[110][110], x, y, t, local_inicial, local_final, i;
	while (true) {
		cin >> qt_locais >> qt_ruas;
		if (qt_locais == 0 && qt_ruas == 0)
			break;
		limpaCidade(cidade, qt_locais);
		for (i = 0; i < qt_ruas; i++) {
			cin >> x >> y >> t;
			x--; y--;
			cidade[x][y] = t;
		}
		floydWarshall(cidade, qt_locais);
		cin >> local_inicial >> local_final;
		local_inicial--; local_final--;
		if (cidade[local_inicial][local_final] == MAX_INT)
			cout << "-1" << endl;
		else
			cout << cidade[local_inicial][local_final] << endl;
	}
	return 0;
}