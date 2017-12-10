#include <iostream>

using namespace std;

int main()
{
	int IDADE;
	double MEDIA, N;
	N = 0;
	MEDIA = 0;
	cin >> IDADE;
	while (IDADE >=0)
	{	
		N++;
		MEDIA += IDADE;
		cin >> IDADE;		
	}
	MEDIA = MEDIA/N;
	cout.precision(2);
	cout << fixed << MEDIA << endl;
	return 0;
}