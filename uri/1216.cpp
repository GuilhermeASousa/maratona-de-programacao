#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	long int cont;
	double distancia, distancia_total;
	string nome;
	cont = 0;
	distancia_total = 0;
	while (getline (cin,nome)){
		cin >> distancia;
		distancia_total += distancia;
		cont++;
		getline (cin,nome);
	}
	cout << setprecision(1) << fixed;
	cout << distancia_total/cont << endl;
	return 0;
}