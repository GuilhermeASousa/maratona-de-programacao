#include <iostream>
#include <queue>
#include <vector>

using namespace std;

typedef vector<int> vetor;
typedef vector<vetor> grafo;

bool buscaEmLargura (grafo rede, int inicio, int qt_estacoes){
	int atual, proximo, i, num_visitados;
	queue<int> fila;
	vector<int> visitados;
	visitados.resize (qt_estacoes, 0);
	fila.push (inicio);
	num_visitados = 0;
	while (!fila.empty()){
		atual = fila.front();
		fila.pop();
		for (i = 0; i < rede[atual].size(); i++){
			proximo = rede[atual][i];
			if (visitados[proximo] == 0){
				visitados[proximo] = 1;
				num_visitados++;
				fila.push (proximo);
			}
		}
	}
	if (num_visitados != qt_estacoes)
		return false;
	return true;
}

int main() {
	int qt_estacoes, qt_linhas, x, y, teste_id, i;
	grafo rede;
	bool flag;
	teste_id = 1;
	while (true) {
		cin >> qt_estacoes >> qt_linhas;
		if (qt_estacoes == 0 && qt_linhas == 0)
			break;
		rede.clear();
		rede.resize(qt_estacoes);
		flag = true;
		for (i = 0; i < qt_linhas; i++) {
			cin >> x >> y;
			x--;
			y--;
			rede[x].push_back(y);
			rede[y].push_back(x);
		}	
		flag = buscaEmLargura(rede, x, qt_estacoes);
		cout << "Teste " << teste_id << endl;
		if (flag){
			cout << "normal" << endl;
		}
		else {
			cout << "falha" << endl;
		}
		cout << endl;
		teste_id++;
	}
	return 0;
}