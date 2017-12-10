#include <iostream>
 
using namespace std;
 
int main() 
{
	long long int N, X, Y, SOMA;
	cin >> N;
	for (long long int i = 0; i < N; i++)
	{
		cin >> X;
		cin >> Y;
		SOMA = 0;
		if (X <= Y)
		{
			for (long long int j = X + 1; j < Y; j++)
				if (j % 2 == 1)
					SOMA += j;
		}
		else
		{
			for (long long int j = Y + 1; j < X; j++)
				if (j % 2 == 1)
					SOMA += j;
		}
		cout << SOMA << endl;
	}	
	return 0;
}