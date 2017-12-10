#include <iostream>
#include <map> 

using namespace std;
 
int main() {

	long long int N, valor, max, seg, culpado;
	map<long long int, long long int> suspeitos;
	map<long long int, long long int>::iterator it;
        cin >> N;
	while (N != 0)
	{
		max = 0;
		seg = 0;
		for (long long int i = 0; i < N; i++)
		{
			cin >> valor;
			if (valor > max) max = valor;
			suspeitos[i] = valor;	
		}
		for (it = suspeitos.begin(); it != suspeitos.end(); it++)
		{
			if (it->second < max && it->second > seg)
			{
				culpado = it->first;
				seg = it->second;
			}
		}
		culpado++;
		cout << culpado << endl;
		cin >> N;
	}
    	return 0;
}