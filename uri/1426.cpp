#include <iostream>

void iniciaMatriz(int matriz[10][10]){
	int i, j;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			matriz[i][j] = -1;
		}
	}
}

using namespace std;
int main() {
	int qt_testes, matriz[10][10], i, j, k;
	cin >> qt_testes;
	for (i = 0; i < qt_testes; i++) {
		iniciaMatriz(matriz);
		cin >> matriz[0][0];
		cin >> matriz[2][0];
		cin >> matriz[2][2];
		cin >> matriz[4][0];
		cin >> matriz[4][2];
		cin >> matriz[4][4];
		cin >> matriz[6][0];
		cin >> matriz[6][2];
		cin >> matriz[6][4];
		cin >> matriz[6][6];
		cin >> matriz[8][0];
		cin >> matriz[8][2];
		cin >> matriz[8][4];
		cin >> matriz[8][6];
		cin >> matriz[8][8];
		for (j = 8; j >= 0 ; j--) {
			for (k = 0; k < 9; k++) {
				if (matriz[j][k] == -1) {
					if (j == 8) 
						matriz[j][k] = (matriz[j-2][k-1] - matriz[j][k-1] - matriz[j][k+1]) / 2;
					else
						matriz[j][k] = matriz[j+1][k] + matriz[j+1][k+1];
				}
			}
		}
		for (j = 0; j < 9; j++) {
			for (k = 0; k <= j; k++) {
				cout << matriz[j][k];
				if (k != j)
					cout << ' ';
			}
			cout << endl;
		}
	}
	return 0;
}