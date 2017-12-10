#include <iostream>
 
using namespace std;
 
int main() {
	int cha, i, qt_acertadores, palpite;
	cin >> cha;
	qt_acertadores = 0;
	for (i = 0; i < 5; i++){
		cin >> palpite;
		if (palpite == cha)
			qt_acertadores++;
	}
	cout << qt_acertadores << endl;
	return 0;
}