#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool minhaComparacao(const pair<int,int> &terminoA,const pair<int,int> &terminoB){
       return terminoA.second < terminoB.second;
}

int main() {	
	int qt_consultas, inicio, termino, cont, atual, i;
	vector<pair<int,int>> consultas;
	cin >> qt_consultas;
	cont = 1;
	atual = 0;
	for (i = 0; i < qt_consultas; i++)
	{
		cin >> inicio >> termino;
		consultas.push_back(make_pair(inicio,termino));
	}
	sort(consultas.begin(), consultas.end(), minhaComparacao);
	for (i = 1; i < qt_consultas; i++) {
		if (consultas[atual].second <= consultas[i].first){
			cont++;
			atual = i;
		}
	}
	cout << cont << endl;
	return 0;
}