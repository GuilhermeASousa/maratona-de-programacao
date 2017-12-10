#include <iostream>
#include <string>
#include <iomanip> 
 
using namespace std;
 
int main() {
	double matriz[12][12], soma;
	int i, j, media;
	string operacao;
	cin >> operacao;
	soma = 0;
	for (i = 0; i < 12; i++){
		for (j = 0; j < 12; j++){
			cin >> matriz[i][j];
			if (j > i)
				soma += matriz[i][j];			
		}
	}
	cout << fixed;
	if (operacao == "S")
		cout << setprecision(1) << soma << endl;
	else if (operacao == "M")
		cout << setprecision(1) << soma/66.0 << endl;
	return 0;
}