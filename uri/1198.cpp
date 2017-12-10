#include <iostream>
 
using namespace std;
 
int main() {
	long long int hashmat, oponente; 
	while (cin >> hashmat >> oponente){
		if (hashmat > oponente)
			cout << hashmat - oponente << endl;
		else
			cout << oponente - hashmat << endl;
	}
	return 0;
}