#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
	int qt_pontos, x, y, i, j;
	float minDist, distAux;
	vector<int> eixoX, eixoY;
	minDist = 9999999;
	cin >> qt_pontos;
	for (i = 0; i < qt_pontos; i++){
		cin >> x >> y;
		eixoX.push_back(x);
		eixoY.push_back(y);
	}
	for (i = 0; i < qt_pontos; i++){
		for (j = i + 1; j < qt_pontos; j++){
			distAux = sqrt(pow((eixoX[i] - eixoX[j]), 2) + pow ( (eixoY[i] - eixoY[j]), 2));
			if (distAux < minDist)
				minDist = distAux;
		}
	}
	cout.precision(3);
	cout << fixed << minDist << endl;
	return 0;
}
