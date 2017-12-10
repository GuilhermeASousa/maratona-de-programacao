#include <iostream>
 
using namespace std;
 
int main() {
	int num_testes, i, raio_a, raio_b;
	cin >> num_testes;
	for (i = 0; i < num_testes; i++){
		cin >> raio_a >> raio_b;
		cout << raio_a + raio_b << endl; 
	}
	return 0;
}