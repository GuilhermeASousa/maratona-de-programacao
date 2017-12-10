#include <iostream>
#include <queue>
#include <vector>

using namespace std;

typedef vector< pair<int,int> > vetor;
typedef vector<vetor> grafo;

int buscaMenorIdade(grafo chefes, int func, int qt_emp) {
	int atual, proximo, menorIdade, i;
	menorIdade = 101;
	queue<int> fila;
	vector<int> visitados;
	visitados.resize (qt_emp, 0);
	fila.push (func);
	while (!fila.empty()) {
		atual = fila.front();
		fila.pop();
		for (i = 0; i < chefes[atual].size(); i++) {
			proximo = chefes[atual][i].first;
			if (visitados[proximo] == 0){
				visitados[proximo] = 1;
				fila.push (proximo);
			}
			if (chefes[atual][i].second < menorIdade)
				menorIdade = chefes[atual][i].second;
		}
	}
	return menorIdade;
}

void trocaPosicoes(grafo &chefes, int x, int y, int qt_emp, vector<int> idades) {
	int i, j;
	pair<int, int> funcX (x, idades[x]);
	pair<int, int> funcY (y, idades[y]);
	chefes[x].swap(chefes[y]);
	for (i = 0; i < qt_emp; i++) {
		for (j = 0; j < chefes[i].size(); j++) {
			if (chefes[i][j] == funcX) 
				chefes[i][j] = funcY;
			else if (chefes[i][j] == funcY)
				chefes[i][j] = funcX;
		}
	}
}

int main() {
	int qt_emp, qt_rel, qt_inst, idade, x, y, func, menorIdade, i;
	char inst;
	grafo chefes, funcs;
	vector<int> idades;
	while (cin >> qt_emp>> qt_rel >> qt_inst) {
		idades.clear();
		idades.resize(qt_emp);
		chefes.clear();
		chefes.resize(qt_emp);
		funcs.clear();
		funcs.resize(qt_emp);
		for (i = 0; i < qt_emp; i++) {
			cin >> idade;
			idades[i] = idade;
		}
		for (i = 0; i < qt_rel; i++) {
			cin >> x >> y;
			x--;y--;
			chefes[y].push_back(make_pair(x,idades[x]));
		}
		for (i = 0; i < qt_inst; i++) {
			cin >> inst;
			if (inst == 'P') {
				cin >> func;
				func--;
				menorIdade = buscaMenorIdade(chefes, func, qt_emp);
				if (menorIdade < 101)
					cout << menorIdade << endl;
				else
					cout << "*" << endl;
			}
			else if (inst == 'T') {
				cin >> x >> y;
				x--;y--;
				trocaPosicoes(chefes, x, y, qt_emp, idades);
			}
		}
	}
	return 0;
}