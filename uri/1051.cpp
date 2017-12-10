#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
	double renda, imposto;
	int flag;
	cin >> renda;
	flag = 1;
	imposto = 0;
	if (renda <= 2000.00) 
		cout << "Isento" << endl;
	else {
		renda -= 2000.00;
		while (renda > 0) {
			if (flag == 1) {
				if (renda >= 1000) {
					imposto += 1000 * 0.08;
					renda -= 1000;
				}
				else {
					imposto += renda * 0.08;
					renda = 0;
				}
				flag = 2;
			}
			else if (flag == 2) {
				if (renda >= 1500) {
					imposto += 1500 * 0.18;
					renda -= 1500;
				}
				else {
					imposto += renda * 0.18;
					renda = 0;
				}
				flag = 3;
			}	
			else {
				imposto += renda * 0.28;
				renda = 0;
			}
		}
		cout << fixed;
		cout << "R$ " << setprecision(2) << imposto << endl;
	}
	return 0;
}