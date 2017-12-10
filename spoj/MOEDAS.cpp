#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void minMoedas(vector<int> moedas, vector<int> cont_moedas, int pr_mercadoria) {
	int i, j;
	for (i = 0; i < moedas.size(); i++) {
		for (j = moedas[i]; j < cont_moedas.size(); j++) {
			if ((cont_moedas[j - moedas[i]] + 1) < cont_moedas[j])
				cont_moedas[j] = cont_moedas[j - moedas[i]] +1;
		}
	}
	if (cont_moedas[pr_mercadoria] != INT_MAX - 1)
		cout << cont_moedas[pr_mercadoria] << endl;
	else
		cout << "Impossivel" << endl;
}

int main() {
	int pr_mercadoria, qt_moedas, vl_moeda, i;
	vector<int> moedas, cont_moedas;
	while (true) {
		cin >> pr_mercadoria >> qt_moedas;
		if (pr_mercadoria == 0)
			break;
		moedas.clear();
		cont_moedas.clear();
		cont_moedas.resize(pr_mercadoria+1, INT_MAX - 1);
		cont_moedas[0] = 0;
		for (i = 0; i < qt_moedas; i++)
		{
			cin >> vl_moeda;
			moedas.push_back(vl_moeda);
		}
		minMoedas(moedas, cont_moedas, pr_mercadoria); 
	} 	
	return 0;
}