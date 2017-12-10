/*
Nome: Guilherme Augusto de Sousa
Matrícula: 2013062944
Código problema: CF50B
Problema: Choosing Symbol Pairs(http://codeforces.com/problemset/problem/50/B)
Solução: o vetor contChrs possui tamanho igual a 36(são 36 caracteres possíveis) e nele é armazenado o número de vezes que cada caractere aparece na 
string. Por fim, o vetor é percorrido e um contador é incrementado pelo quadrado de cada valor existente no vetor; este contador representa o resultado
final.
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string str;
	unsigned long long int i, cont;
	vector<unsigned long long int> contChrs;
	cont = 0;
	cin >> str;
	contChrs.resize(36, 0);
	for (i = 0; i < str.size(); i++) {
		if (str[i] >= 97)
			contChrs[str[i] - 87]++;
		else
			contChrs[str[i] - 48]++;
	}
	for (i = 0; i < 36; i++)
		cont += contChrs[i] * contChrs[i];
	cout << cont << endl;
	return 0;
}