#include <iostream>
 
using namespace std;
 
int main() {
 	int N, i, dias;
	double C;
	cin >> N;
	for (i = 0; i < N; i++)
	{
		cin >> C;
		dias = 0;
		while (C > 1){
			C /= 2;
			dias++;
		}
		cout << dias << " dias" << endl;
	}
	return 0;
}