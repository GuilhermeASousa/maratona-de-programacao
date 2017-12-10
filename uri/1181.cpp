#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int L;
	char T;
	vector <vector <double> > MATRIZ;
	double RESULT;
	cin >> L;
	cin >> T;
	RESULT = 0;
  	MATRIZ.resize(12);
  	for (int i = 0; i < 12; i++)
    		MATRIZ[i].resize(12);
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			cin >> MATRIZ[i][j];
		}
	}
	if (T == 'S')
	{
		for (int i = 0; i < 12; i++)
		{
			RESULT += MATRIZ[L][i];
		}
	}
	else if (T == 'M')
	{
		for (int i = 0; i < 12; i++)
		{
			RESULT += MATRIZ[L][i];
		}
		RESULT /= 12.0;
	}
	cout.precision(1);
	cout << fixed << RESULT << endl;
	return 0;
}