#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
	int i;
	string expressao;
	while (cin >> expressao) {
		if (!cin) break;
		for (i = 0; i < expressao.size(); i++){
			if (expressao[i] == 'A' || expressao[i] == 'B' || expressao[i] == 'C') expressao[i] = '2';
			else if (expressao[i] == 'D' || expressao[i] == 'E' || expressao[i] == 'F') expressao[i] = '3';
			else if (expressao[i] == 'G' || expressao[i] == 'H' || expressao[i] == 'I') expressao[i] = '4';
			else if (expressao[i] == 'J' || expressao[i] == 'K' || expressao[i] == 'L') expressao[i] = '5';
			else if (expressao[i] == 'M' || expressao[i] == 'N' || expressao[i] == 'O') expressao[i] = '6';
			else if (expressao[i] == 'P' || expressao[i] == 'Q' || expressao[i] == 'R' || expressao[i] == 'S') expressao[i] = '7';
			else if (expressao[i] == 'T' || expressao[i] == 'U' || expressao[i] == 'V') expressao[i] = '8';
			else if (expressao[i] == 'W' || expressao[i] == 'X' || expressao[i] == 'Y' || expressao[i] == 'Z') expressao[i] = '9';
		}
		cout << expressao << endl;
		expressao.clear();
	}
	return 0;
}