#include <iostream>
#include <vector>

using namespace std;

int main()
{	
	double Y;
	vector <double> VETOR;
	cin >> Y;
	for (int i = 0; i < 100; i++)
	{
		VETOR.push_back(Y);
		Y /= 2.000;
		cout.precision(4);
		cout << fixed << "N[" << i << "] = " << VETOR[i] << endl;
	}
	return 0;
}