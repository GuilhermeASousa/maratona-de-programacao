#include <iostream>
#include <string>
#include <vector>
using namespace std;

unsigned long long int maxValue(vector<char> operadores, vector<unsigned long long int> numeros){
	int i;
	unsigned long long int max_value;
	max_value = 1;
	i = 0;
	while (i < operadores.size()) {
		if (operadores[i] == '+') {
			numeros[i + 1] += numeros[i];
			numeros.erase(numeros.begin() + i);
			operadores.erase(operadores.begin() + i);
			i = 0;
		}
		else
			i++;
	}

	if (numeros.size() == 1)
		return numeros[0];

	for (i = 0; i < numeros.size(); i++) 
		max_value *= numeros[i];

	return max_value;
}

unsigned long long int minValue(vector<char> operadores, vector<unsigned long long int> numeros){
	int i;
	unsigned long long int min_value;
	min_value = 0;
	i = 0;
	while (i < operadores.size()) {
		if (operadores[i] == '*') {
			numeros[i + 1] *= numeros[i];
			numeros.erase(numeros.begin() + i);
			operadores.erase(operadores.begin() + i);
			i = 0;
		}
		else
			i++;
	}

	if (numeros.size() == 1)
		return numeros[0];

	for (i = 0; i < numeros.size(); i++) {
		min_value += numeros[i];
	}

	return min_value;
}

int main() {
	int qt_testes, i, j;
	string equacao, numero;
	vector<unsigned long long int> numeros;
	vector<char> operadores;
	cin >> qt_testes;
	for (i = 0; i < qt_testes; i++){
		cin >> equacao;
		numero = "";
		for (j = 0; j < equacao.size(); j++) {
			if (equacao[j] != '+' || equacao[j] != '*') {
				while (equacao[j] != '+' && equacao[j] != '*' && j < equacao.size()) {
					numero = numero + equacao[j];
					j++;
				}
				numeros.push_back(stoi(numero));
				numero = "";
			}
			if (equacao[j] == '+' || equacao[j] == '*') {
				operadores.push_back(equacao[j]);
			}
		}
		cout << "The maximum and minimum are " << maxValue(operadores, numeros) << " and " << minValue(operadores, numeros) << "." << endl;
		equacao.clear();
		numeros.clear();
		operadores.clear();
	}
	return 0;
}