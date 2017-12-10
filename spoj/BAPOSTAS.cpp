#include <iostream>
#include <vector>
using namespace std;

void kadane(vector<int> apostas, int &max_total) {
	int max_atual, i;
	max_atual = 0;
	for (i = 0; i < apostas.size(); i++){
		max_atual += apostas[i];
		if (max_atual < 0)
			max_atual = 0;
		if (max_atual > max_total)
			max_total = max_atual;
	}
}

int main() {	
	int tamanho_sequencia, aposta, max_total, i;
	vector<int> apostas;
	while (true) {
		cin >> tamanho_sequencia;
		if (tamanho_sequencia == 0)
			break;
		apostas.clear();
		max_total = -1;
		for (i = 0; i < tamanho_sequencia; i++)
		{
			cin >> aposta;
			apostas.push_back(aposta);
		}
		kadane(apostas, max_total);
		if (max_total > 0)
			cout << "The maximum winning streak is " << max_total << "." << endl;
		else
			cout << "Losing streak." << endl;
	}
	return 0;
}