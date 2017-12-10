#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
	int qt_produtos, i, produto, quantidade;
	double total;
	cin >> qt_produtos;
	total = 0;
	for (i = 0; i < qt_produtos; i++){
		cin >> produto >> quantidade;
		if (produto == 1001)
			total += quantidade * 1.50;
		else if (produto == 1002)
			total += quantidade * 2.50;
		else if (produto == 1003)
			total += quantidade * 3.50;
		else if (produto == 1004)
			total += quantidade * 4.50;
		else if (produto == 1005)
			total += quantidade * 5.50;
	}
	cout << fixed;
	cout << setprecision(2) << total << endl;
	return 0;
}