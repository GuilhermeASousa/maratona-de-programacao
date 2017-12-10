#include <iostream>
 
using namespace std;
 
int main() {
	int qt_numeros, multi_dois, multi_tres, multi_quatro, multi_cinco, num, i;
	multi_dois = 0;
	multi_tres = 0;
	multi_quatro = 0;
	multi_cinco = 0;
	cin >> qt_numeros;
	for (i = 0; i < qt_numeros; i++){
		cin >> num;
		if (num % 2 == 0)
			multi_dois++;
		if (num % 3 == 0)
			multi_tres++;
		if (num % 4 == 0)
			multi_quatro++;
		if (num % 5 == 0)
			multi_cinco++;
	}
	cout << multi_dois << " Multiplo(s) de 2" << endl;
	cout << multi_tres << " Multiplo(s) de 3" << endl;
	cout << multi_quatro << " Multiplo(s) de 4" << endl;
	cout << multi_cinco << " Multiplo(s) de 5" << endl;	
	return 0;
}