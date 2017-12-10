#include <iostream>
#include <string>
#include <vector>
 
using namespace std;

typedef vector< pair<int,int> > vetor;
typedef vector<vetor> grafo;

int str2Int(string s) {
	if (s == "XS") return 0;
	else if (s == "S") return 1;
	else if (s == "M") return 2;
	else if (s == "L") return 3;
	else if (s == "XL") return 4;
	else if (s == "XXL") return 5;
}
 
void existeSolucao(int index, int qt_voluntarios, grafo g, vector<int> qtde, bool &flag) {
	if (index == qt_voluntarios) {
		flag = true;
		return;
	}

	if (flag) return;

	if (qtde[g[index][0].first]) {
		qtde[g[index][0].first]--;
		existeSolucao(index + 1, qt_voluntarios, g, qtde, flag);
		qtde[g[index][0].first]++;
	}

	if (qtde[g[index][0].second]) {
		qtde[g[index][0].second]--;
		existeSolucao(index + 1, qt_voluntarios, g, qtde, flag);
		qtde[g[index][0].second]++;
	}
}

int main() {
	int qt_testes, qt_camisetas, qt_voluntarios, i, j;
	cin >> qt_testes;
	string tam_camisetaA, tam_camisetaB;
	grafo g;
	vector<int> qtde;
	bool flag;
	for (i = 0; i < qt_testes; i++) {
	 	cin >> qt_camisetas >> qt_voluntarios;
	 	g.clear();
	 	g.resize(qt_voluntarios);
	 	qtde.clear();
	 	qtde.resize(6, (qt_camisetas/6));
	 	flag = false;
	 	for (j = 0; j < qt_voluntarios; j++) {
	 		cin >> tam_camisetaA >> tam_camisetaB;
	 		g[j].push_back(make_pair(str2Int(tam_camisetaA),str2Int(tam_camisetaB)));
	 	}
	 	existeSolucao(0, qt_voluntarios, g, qtde, flag);
	 	if (flag)
	 		cout << "YES" << endl;
	 	else
	 		cout << "NO" << endl;
	} 
    return 0;
}