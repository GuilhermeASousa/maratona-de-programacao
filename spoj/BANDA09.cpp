#include <iostream>

using namespace std;
int main() {
	int qt_musicos, qt_pares_musicos, matriz[150][150], trio[3], musico1, musico2, nivel_entrosamento, i, j, k, maximo;
	cin >> qt_musicos >> qt_pares_musicos;
	maximo = -1;
	for (i = 0; i < qt_pares_musicos; i++) {
		cin >> musico1 >> musico2 >> nivel_entrosamento;
		matriz[musico1][musico2] = nivel_entrosamento;
		matriz[musico2][musico1] = nivel_entrosamento;
	}
	for (i = 1; i <= qt_musicos; i++) {
		for (j = i + 1; j <= qt_musicos; j++) {
			for (k = j + 1; k <= qt_musicos; k++) {
				if (maximo < matriz[i][j] + matriz[i][k] + matriz[j][k]) {
					maximo = matriz[i][j] + matriz[i][k] + matriz[j][k];
					trio[0] = i;
					trio[1] = j;
					trio[2] = k;
				}
			}
		}
	}
	cout << trio[0] << ' ' << trio[1] << ' ' << trio[2] << endl;
	return 0;
}