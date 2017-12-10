#include <iostream>
 
using namespace std;
 
int main() {
	int N, M, J, P, i;
	cin >> N;
	while (N != 0){
		M = J = 0;
		for (i = 0; i < N; i++){
			cin >> P;
			if (P == 0)
				M++;
			else
				J++;
		}
		cout << "Mary won " << M << " times and John won " << J << " times" << endl;
		cin >> N;
	}
	return 0;
}