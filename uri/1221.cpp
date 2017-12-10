#include <iostream>
#include <math.h>
 
using namespace std;
 
void itsPrime(unsigned long long int Num){
	unsigned long long int i;
	int flag = 1;
	for (i = 2; i < sqrt(Num); i++){
		if (Num % i == 0){
			cout << "Not Prime" << endl;
			flag = 0;
			break;
		}
	}
	if (flag == 1)
		cout << "Prime" << endl;
}

int main() {
	unsigned long long int N, X, i;
	cin >> N;
	for (i = 0; i < N; i++){
		cin >> X;
		itsPrime(X);
	}
	return 0;
}