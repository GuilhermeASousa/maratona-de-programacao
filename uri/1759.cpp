#include <iostream>
 
using namespace std;
 
int main() {
	long int N, i;
	cin >> N;
	for (i = 0; i < N; i++){
		if (i == 0)
			cout << "Ho";
		else if (i < N - 1)
			cout << " Ho";
		else
			cout << " Ho!" << endl;
	}
	return 0;
}