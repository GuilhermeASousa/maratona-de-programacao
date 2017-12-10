#include <iostream>

using namespace std;

int main() {
	double overhang, sum;
	int i;
	while (true) {
		cin >> overhang;
		if (overhang == 0.00)
			break;
		sum = 0.00;
		i = 2;
		while (sum < overhang) {
			sum += 1.00/i;
			i++;
		}

		cout << i - 2 << " card(s)" << endl;
	}
	return 0;
}