#include <iostream>

using namespace std;

int MAX_INT = 100; 

void limpaVilas(int vilas[100][100], int tamanho) {
	int i, j;
	for (i = 0; i < tamanho; i++) {
		for (j = 0; j < tamanho; j++) 
			vilas[i][j] = MAX_INT;
	}	
}

void imprimeGrafo(int vilas[100][100], int tamanho) {
	int i, j;
	for (i = 0; i < tamanho; i++) {
		for (j = 0; j < tamanho; j++) {
			cout << vilas[i][j] << " ";
		}
			cout << endl;
	}
}

void floydWarshall(int vilas[100][100], int tamanho) {
	int i, j, k;
	for (i = 0; i < tamanho; i++) {
		for (j = 0; j < tamanho; j++) {
			for (k = 0; k < tamanho; k++) {
				if (vilas[j][i] + vilas[i][k] < vilas[j][k] && vilas[j][i] + vilas[i][k] < MAX_INT)
	 				vilas[j][k] = vilas[j][i] + vilas[i][k];	
			}
		}
	}
}

int encontraMelhorVila(int vilas[100][100], int tamanho) {
	int i, j, min_dist, max_dist, candidata;
	min_dist = MAX_INT;
	candidata = 1;
	for (i = 0; i < tamanho; i++) {
		max_dist = 0;
		for (j = 0; j < tamanho; j++) 
		{
			if (vilas[i][j] > max_dist && vilas[i][j] != MAX_INT && i != j)
				max_dist = vilas[i][j];
		}
		if (min_dist > max_dist){
			min_dist = max_dist;
			candidata = i+1;
		}
	}
	return candidata;
}

int main() {
	int qt_vilas, vilas[100][100], x, y, teste_id, i;
	teste_id = 1;
	while (true) {
		cin >> qt_vilas;
		if (qt_vilas == 0)
			break;
		limpaVilas(vilas, qt_vilas);
		for (i = 0; i < qt_vilas - 1; i++) {
			cin >> x >> y;
			x--;y--;
			vilas[x][y] = 1;
			vilas[y][x] = 1;
		}
		floydWarshall(vilas, qt_vilas);
		cout << "Teste " << teste_id << endl;
		cout << encontraMelhorVila(vilas, qt_vilas) << endl;
		cout << endl;
		teste_id++;
	}
	return 0;
}