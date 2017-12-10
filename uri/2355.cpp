#include <iostream>
#include <math.h>
#include <iomanip>
 
using namespace std;
 
int main() {
    double brasil, alemanha, minutos;
 	while (true) {
 		cin >> minutos;
 		if (minutos == 0)
 			break;
 		brasil = (1 * minutos) / 90;
 		alemanha = (7 * minutos) / 90;
 		cout << fixed;
 		cout << setprecision(0) << "Brasil " << floor(brasil) << " x Alemanha " << ceil(alemanha) << endl;
 	}
    return 0;
}