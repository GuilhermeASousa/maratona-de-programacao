#include <iostream>
#include <vector>
#include <set> 
#include <algorithm> 

using namespace std;
int main() {
	int qt_instancias, qt_conjuntos, tamanho_conjunto, num, qt_operacoes, op, a, b, i, j, k;
	vector<set<int> > conjuntos;
	vector<int> aux;
	cin >> qt_instancias;
	for (int i = 0; i < qt_instancias; i++)
	{
		cin >> qt_conjuntos;
		conjuntos.resize(qt_conjuntos);
		for (j = 0; j < qt_conjuntos; j++) {
			cin >> tamanho_conjunto;
			for (k = 0; k < tamanho_conjunto; k++) {
				cin >> num;
				conjuntos[j].insert(num);
			}
		}
		cin >> qt_operacoes;
		for (j = 0; j < qt_operacoes; j++) {
			cin >> op >> a >> b;
			a--;
			b--;
			if (op == 1) {
				set_intersection(conjuntos[a].begin(), conjuntos[a].end(),
                          conjuntos[b].begin(), conjuntos[b].end(),
                          back_inserter(aux)); 
				cout << aux.size() << endl;
			}
			else if (op == 2) {
				set_union (conjuntos[a].begin(), conjuntos[a].end(),
                          conjuntos[b].begin(), conjuntos[b].end(),
                          back_inserter(aux));
				cout << aux.size() << endl;
			}
			aux.clear();
		}
		conjuntos.clear();
	}
	return 0;
}