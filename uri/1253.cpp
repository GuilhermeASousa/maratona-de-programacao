#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
 	int N, i, P, j;
	string cifra;
	cin >> N;
	for (i = 0; i < N; i++){
		cin >> cifra;
		cin >> P;
		for (j = 0; j < cifra.length(); j++){
			if (cifra[j] - P < 65)
				cifra[j] = 91 - (65 - (cifra[j] - P));
			
			else
				cifra[j] = cifra[j] - P;
		}
		cout << cifra << endl;
	}
	return 0;
}