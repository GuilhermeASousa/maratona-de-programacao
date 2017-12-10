#include <iostream>
 
using namespace std;
 
int main() {
	unsigned long long int A, B, Soma;
	cin >> A >> B;
	Soma = ((A + B) * (B - A + 1)) / 2;
	cout << Soma << endl;	
	return 0;
}