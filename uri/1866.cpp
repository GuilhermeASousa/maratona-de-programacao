#include <iostream>
 
using namespace std;
 
int main() {
	int num_testes, qt_termos, i, soma, j;
	cin >> num_testes;
	for (i = 0; i < num_testes; i++){
		soma = 0;
		cin >> qt_termos;
		for (j = 0; j < qt_termos; j++){
			if (j % 2 == 0)
				soma += 1;
			else
				soma -= 1;		
		}
		cout << soma << endl;
	}
	return 0;
}