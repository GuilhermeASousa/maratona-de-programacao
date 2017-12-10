#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	unsigned long long int T, N, i;
	cin >> T;
	for (i = 0; i < T; i++){
		cin >> N;		
		if (N % 2 == 0)
			cout << "1" << endl;
		else
			cout << "9" << endl;
	}
	return 0;
}