#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	double N, P, M;
	cin >> N;
	P = N/log(N);
	M = P * 1.25506;
	cout << setprecision(1) << fixed;
	cout << P << " " << M <<endl;
	return 0;
}