#include <iostream>
 
using namespace std;
 
int main() {
	long long int A, N, i, total;
	total = 0;
	cin >> A >> N;
	while (N <= 0)
		cin >> N;
	for (i = 0; i < N; i++)
		total += A + i;
	cout << total << endl;
	return 0;
}