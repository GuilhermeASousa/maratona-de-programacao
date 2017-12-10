#include <iostream>

using namespace std;

int main()
{
	double NOTA, N, MEDIA;
	N = 0;
	MEDIA = 0;
	while (N < 2)
	{
		cin >> NOTA;
		if (NOTA < 0 || NOTA > 10) cout << "nota invalida" << endl;
		else
		{
			MEDIA += NOTA;
			N++;
		}
	}
	MEDIA = MEDIA/N;
	cout.precision(2);
	cout << fixed << "media = " << MEDIA << endl;
	return 0;
}