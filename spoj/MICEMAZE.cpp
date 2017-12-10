#include <iostream>
using namespace std;

int INT_MAX = 999999;

void limpaLabirinto(int labirinto[100][100], int tamanho) {
	int i, j;
	for (i = 0; i < tamanho; i++) {
		for (j = 0; j < tamanho; j++)
			labirinto[i][j] = INT_MAX;
	}	
}

void floydWarshall(int labirinto[100][100], int tamanho) {
	int i, j, k;
	for (i = 0; i < tamanho; i++) {
		for (j = 0; j < tamanho; j++) {
			for (k = 0; k < tamanho; k++) {
				if (labirinto[j][i] + labirinto[i][k] < labirinto[j][k] && labirinto[j][i] + labirinto[i][k] < INT_MAX)
	 				labirinto[j][k] = labirinto[j][i] + labirinto[i][k];	
			}
		}
	}
}

int contaCamundongos(int labirinto[100][100], int tamanho, int saida, int tempo){
	int i, j, cont_camundongos;
	cont_camundongos = 1;
	for (i = 0; i < tamanho; i++) {
		if (labirinto[i][saida] <= tempo)
			cont_camundongos++;
	}
	return cont_camundongos;
}

int main() {
	int qt_celulas, celula_saida, tempo, qt_conexoes, labirinto[100][100], a, b, p, i;
	cin >> qt_celulas >> celula_saida >> tempo >> qt_conexoes;
	celula_saida--;
	limpaLabirinto(labirinto, qt_celulas);
	for (i = 0; i < qt_conexoes; i++) {
		cin >> a >> b >> p;
		a--; b--;
		labirinto[a][b] = p;
	}
	floydWarshall(labirinto, qt_celulas);
	cout << contaCamundongos(labirinto, qt_celulas, celula_saida, tempo) << endl;
	return 0;
}