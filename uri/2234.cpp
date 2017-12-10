#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
	double hot_dogs, participantes;
	cin >> hot_dogs >> participantes;
	cout << fixed;
	cout << setprecision(2) << hot_dogs/participantes << endl;
	return 0;
}