#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>

using namespace std;

typedef vector<int> vetor;
typedef vector<vetor> grafo;

int buscaEmLargura (grafo &cadeia, int inicio, int qt_criaturas){
	int atual, proximo, i, num_visitados;
	queue<int> fila;
	vector<int> visitados;
	visitados.resize (qt_criaturas, 0);
	fila.push (inicio);
	visitados[inicio] = 1;
	num_visitados = 1;
	while (!fila.empty()){
		atual = fila.front();
		fila.pop();
		for (i = 0; i < cadeia[atual].size(); i++){
			proximo = cadeia[atual][i];
			if (visitados[proximo] == 0){
				visitados[proximo] = 1;
				num_visitados++;
				fila.push (proximo);
			}
		}
	}
	return num_visitados;
}

int main() {
	int qt_criaturas, qt_relacoes, max_cadeia, aux, x, y, i;
	string nome_criatura, criaturaA, criaturaB;
	map<string, int> criaturas;
	grafo cadeia;
	while (true) {
		cin >> qt_criaturas >> qt_relacoes;
		if (qt_criaturas == 0 && qt_relacoes == 0)
			break;
		cadeia.clear();
		criaturas.clear();
		cadeia.resize(qt_criaturas);
		max_cadeia = 0;
		for (i = 0; i < qt_criaturas; i++)
		{
			cin >> nome_criatura;
			criaturas[nome_criatura] = i;
		}
		for (i = 0; i < qt_relacoes; i++)
		{
			cin >> criaturaA >> criaturaB;
			x = criaturas[criaturaA];
			y = criaturas[criaturaB];
			cadeia[x].push_back(y);
			cadeia[y].push_back(x);
		}
		for (i = 0; i < qt_criaturas; i++)
		{
			aux = buscaEmLargura(cadeia, i, qt_criaturas);
			if (aux > max_cadeia)
				max_cadeia = aux;
		}
		cout << max_cadeia << endl;
	}
	return 0;
}