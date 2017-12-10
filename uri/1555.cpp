#include <iostream>
 
using namespace std;

long long int rafael(int x, int y){
	return ((3 * x) * (3 * x)) + (y * y);
}

long long int beto(int x, int y){
	return (2 * (x * x)) + ((5 * y) * (5 * y));
}

long long int carlos(int x, int y){
	return (-100 * x) + (y * y * y);
}

int main() {
 	int N, X, Y, i;
	cin >> N;
	for (i = 0; i < N; i++){
		cin >> X >> Y;
		if ((rafael(X, Y) > beto(X, Y)) && (rafael(X, Y) > carlos(X, Y)))
			cout << "Rafael ganhou" << endl;
		else if ((beto(X, Y) > rafael(X, Y)) && (beto(X, Y) > carlos(X, Y)))
			cout << "Beto ganhou" << endl;
		else
			cout << "Carlos ganhou" << endl;
	}
	return 0;
}