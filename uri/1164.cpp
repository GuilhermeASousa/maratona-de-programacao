#include <iostream>

using namespace std;

int main()
{
	int N, NUM, SOMA;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> NUM;
		SOMA = 0;
		for (int j = 1; j < NUM; j++)
		{
			if (NUM % j == 0)
				SOMA += j;
		}
		if (SOMA == NUM)
			cout << NUM << " eh perfeito" << endl;
		else
			cout << NUM << " nao eh perfeito" << endl;
	}
	return 0;
}