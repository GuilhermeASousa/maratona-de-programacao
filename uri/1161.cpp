#include <iostream>
 
using namespace std;
 
unsigned long long int fatorial (int Num) {
	unsigned long long int total;
	if (Num == 0)
		return 1;
	total = Num;
	Num--;
	while (Num > 0){
		total = total*Num;
		Num--;
	} 
	return total;
}

int main() {
	int M, N;
	while (cin >> M >> N)
		cout << fatorial(M) + fatorial(N) << endl;
	return 0;
}