#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
	double A, B;
	cin >> A >> B;
	cout << fixed;
	cout << setprecision(2) << ((B * 100) / A) - 100 << "%" << endl;
	return 0;
}