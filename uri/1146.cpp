#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	while (N != 0)
	{
		for (int i = 1; i <= N; i++)
		{
			if (i != N)
			{
				cout << i << " ";
			}
			else
			{
				cout << i << endl;
			}
		}
		cin >> N;
	}
	return 0;
}