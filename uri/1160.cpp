#include <iostream>
 
using namespace std;
 
int main() {
	int num_testes, PA, PB, i, anos;
	double GA, GB;
	cin >> num_testes;
	for (i = 0; i < num_testes; i++){
		cin >> PA >> PB >> GA >> GB;
		anos = 0;
		while ((PA <= PB) && anos <= 100){
			PA = PA + ((PA * GA)/100);
			PB = PB + ((PB * GB)/100);
			anos++;
		}
		if (anos > 100)
			cout << "Mais de 1 seculo." << endl;
		else
			cout << anos << " anos." << endl;
	}
	return 0;
}