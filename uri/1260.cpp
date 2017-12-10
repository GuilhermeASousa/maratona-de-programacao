#include <iostream>
#include <string>
#include <map>
#include <iomanip>

using namespace std;
int main() {
	int num_testes, i;
	string madeira;
	double tamanho;
	map <string, double> madeiras;
	map <string, double>::iterator it;

	cin >> num_testes;

	getline (cin, madeira);
	getline (cin, madeira);

	cout << fixed;

	for (i = 0; i < num_testes; i++) {
		tamanho = 0;
		getline (cin, madeira);

		if (i != 0)
			cout << endl;

		while (madeira.size() > 0) {
			tamanho++;
			madeiras[madeira]++;
			getline (cin, madeira);	
		}

		for (it=madeiras.begin(); it!=madeiras.end(); ++it)
    		cout << it->first << " " << setprecision(4) << (it->second / tamanho) * 100 << endl;
		madeiras.clear();
	}
	return 0;
}