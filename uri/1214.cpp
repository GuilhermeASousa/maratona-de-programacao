#include <iostream>
#include <vector>
#include <iomanip>
 
using namespace std;
 
int main() {
	int C, i, j;
	double N, nota, media, resultadoFinal;
	vector<double> notas;
	cin >> C;
	for (i = 0; i < C; i++)
	{
		cin >> N;
		media = 0.000;
		resultadoFinal = 0.000;
		for (j = 0; j < N; j++){
			cin >> nota;
			media += nota;
			notas.push_back (nota);
		}
		media /= N;
		for (vector<double>::iterator it = notas.begin(); it != notas.end(); ++it){
			if (*it > media)
				resultadoFinal++;
		}
		resultadoFinal /= N;
		cout << fixed;
		cout << setprecision(3) << resultadoFinal * 100.000 << "%" << endl;
		notas.erase (notas.begin(),notas.end());
	}
	return 0;
}