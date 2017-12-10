#include <iostream>
#include <vector>

using namespace std;

int MAX_INT = 50; 

void imprimeGrafo(int pais[50][50], int tamanho) {
	int i, j;
	for (i = 0; i < tamanho; i++) {
		for (j = 0; j < tamanho; j++) {
			cout << pais[i][j] << " ";
		}
			cout << endl;
	}
}

void limpaPais(int pais[50][50], int tamanho) {
	int i, j;
	for (i = 0; i < tamanho; i++) {
		for (j = 0; j < tamanho; j++) 
			pais[i][j] = MAX_INT;
	}
}

void floydWarshall(int pais[50][50], int tamanho) {
	int i, j, k;
	for (i = 0; i < tamanho; i++) {
		for (j = 0; j < tamanho; j++) {
			for (k = 0; k < tamanho; k++) {
				if (pais[j][i] + pais[i][k] < pais[j][k] && pais[j][i] + pais[i][k] < MAX_INT)
	 				pais[j][k] = pais[j][i] + pais[i][k];	
			}
		}
	}
}

void determinaCidades(int pais[50][50], int tamanho, int origem, int max_pedagios) {
	int i;
	vector<int> cidades;
	for (i = 0; i < tamanho; i++) {
		if (pais[origem][i] <= max_pedagios && origem != i)
			cidades.push_back(i+1);
	}	
	for (i = 0; i < cidades.size(); i++) {
		if (i != cidades.size() - 1)
			cout << cidades[i] << " ";
		else
			cout << cidades[i] << endl;
	}
}

int main() {
	int qt_cidades, qt_estradas, cidade_origem, qt_max_pedagios, pais[50][50], x, y, teste_id, i;
	teste_id = 1;
	while (true) {
		cin >> qt_cidades >> qt_estradas >> cidade_origem >> qt_max_pedagios;
		if (qt_cidades == 0 && qt_estradas == 0 && cidade_origem == 0 && qt_max_pedagios == 0)
			break;
		limpaPais(pais, qt_cidades);
		for (i = 0; i < qt_estradas; i++) {
			cin >> x >> y;
			x--;y--;
			pais[x][y] = 1;
			pais[y][x] = 1;
		}
		floydWarshall(pais, qt_cidades);
		cout << "Teste " << teste_id <<endl;
		determinaCidades(pais, qt_cidades, cidade_origem-1, qt_max_pedagios);
		cout << endl;
		teste_id++;
	}
	return 0;
}