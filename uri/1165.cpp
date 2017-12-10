#include <iostream>
#include <cstring>
#include <vector>
#include <map>
#include <list>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
	int N, X, Flag;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> X;
		Flag = 0;
		for (int j = 2; j < X; j++)
			if (X % j == 0)
				Flag = 1;
		if (Flag == 1)
			cout << X << " nao eh primo" << endl;
		else
			cout << X << " eh primo" << endl;
	}
	return 0;
}