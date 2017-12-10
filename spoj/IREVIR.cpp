#include <iostream>
#include <queue>
#include <vector>

using namespace std;

typedef vector<int> vetor;
typedef vector<vetor> grafo;

bool buscaEmLargura (grafo cidade, int inicio, int qt_interseccoes){
	int atual, proximo, i, num_visitados;
	queue<int> fila;
	vector<int> visitados;
	visitados.resize (qt_interseccoes, 0);
	fila.push (inicio);
	num_visitados = 0;
	while (!fila.empty()){
		atual = fila.front();
		fila.pop();
		for (i = 0; i < cidade[atual].size(); i++){
			proximo = cidade[atual][i];
			if (visitados[proximo] == 0){
				visitados[proximo] = 1;
				num_visitados++;
				fila.push (proximo);
			}
		}
	}
	if (num_visitados != qt_interseccoes)
		return false;
	return true;
}

int main() {
	int qt_interseccoes, qt_ruas, v, w, p, i;
	grafo cidade;
	bool flag;
	while (true) {
		cin >> qt_interseccoes >> qt_ruas;
		if (qt_interseccoes == 0 && qt_ruas == 0)
			break;
		cidade.clear();
		cidade.resize(qt_interseccoes);
		flag = true;
		for (i = 0; i < qt_ruas; i++) {
			cin >> v >> w >> p;
			v--;
			w--;
			cidade[v].push_back(w);
			if (p == 2)
				cidade[w].push_back(v);
		}	
		for (i = 0; i < qt_interseccoes; i++) {
			flag = buscaEmLargura (cidade, i, qt_interseccoes);
			if (!flag) 
				break;
		}
		if (flag)
			cout << "1" << endl;
		else
			cout << "0" << endl;
	}
	return 0;
}