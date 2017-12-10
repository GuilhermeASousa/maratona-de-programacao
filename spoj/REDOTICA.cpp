#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &vertice1, vector<int> &vertice2, vector<int> &peso, int tamanho) {
    int i, j, tmp;
    for (i = 1; i < tamanho; i++) {
        j = i;
        while (j > 0 && peso[j - 1] > peso[j]) {
            tmp = peso[j];
            peso[j] = peso[j - 1];
            peso[j - 1] = tmp;
            tmp = vertice1[j];
            vertice1[j] = vertice1[j - 1];
            vertice1[j - 1] = tmp;
            tmp = vertice2[j];
            vertice2[j] = vertice2[j - 1];
            vertice2[j - 1] = tmp;
            j--;
        }
    }
}

void incializaConexao(vector<int> &conexao, int tamanho) {
	int i;
	for (i = 0; i < tamanho; i++)
		conexao[i] = i;
}

void atualizaConexao(vector<int> &conexao, int componente_antes, int componente_depois) {
	int i;
	for (i = 0; i < conexao.size(); i++) {
		if (conexao[i] == componente_antes)
			conexao[i] = componente_depois;
	}
}

void determinaRamos(vector<int> vertice1, vector<int> vertice2, vector<int> conexao, int tamanho) {
	int i;
	for (i = 0; i < tamanho; i++) {
		if (conexao[vertice1[i]] != conexao[vertice2[i]]) {
			cout << min(vertice1[i] + 1, vertice2[i] + 1) << " " << max(vertice1[i] + 1, vertice2[i] + 1) << endl;
			atualizaConexao(conexao, conexao[vertice2[i]], conexao[vertice1[i]]);
		}
	}
}

int main() {
	vector<int> vertice1, vertice2, peso, conexao;
	int qt_tabas, qt_ramosRede, x, y, z, id_teste, i;
	id_teste = 1;
	while (true) {
		cin >> qt_tabas >> qt_ramosRede;
		if (qt_tabas == 0)
			break;
		vertice1.clear();
		vertice2.clear();
		peso.clear();
		conexao.clear();
		conexao.resize(qt_tabas);
		incializaConexao(conexao, qt_tabas);
		for (i = 0; i < qt_ramosRede; i++) {
			cin >> x >> y >> z;
			x--; y--;
			vertice1.push_back(x);
			vertice2.push_back(y);
			peso.push_back(z);
		}
		insertionSort(vertice1, vertice2, peso, peso.size());
		cout << "Teste " << id_teste << endl;
		determinaRamos(vertice1, vertice2, conexao, qt_ramosRede);
		cout << endl;
		id_teste++;
	}
	return 0;
}