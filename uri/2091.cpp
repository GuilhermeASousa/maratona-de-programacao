#include <iostream>
#include <map>

using namespace std;
int main()
{
	long long int numeros, numero, i, candidato;
	map<long long int, long long int> pares;
	cin >> numeros;
	while (numeros != 0) {
		for (i = 0; i < numeros; i++) {
			cin >> numero;
			pares[numero]++;
		}
		for (map<long long int,long long int>::iterator it = pares.begin(); it != pares.end(); ++it) {
			if (it->second % 2 != 0) {
				cout << it->first << endl;
				break;
			}
		}
		pares.clear();
		cin >> numeros;	
	}
    return 0;
}