#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int T, Aux;
	vector<int> VETOR;
	cin >> T;
	Aux = 0;
	for (int i = 0; i < 1000; i++)
	{
		VETOR.push_back(Aux);
		Aux++;
		if (Aux == T)
		{
			Aux = 0;
		}
		cout <<  "N[" << i << "] = " << VETOR[i] << endl;
	}
	return 0;
}