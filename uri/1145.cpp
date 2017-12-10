#include <iostream>

using namespace std;

int main()
{	
	int X, Y, AUX;
	cin >> X >> Y;
	AUX = 1;
	for (int i = 1; i <= Y; i++)
	{	
		if (AUX != X)
		{
			cout << i << " ";
			AUX++;
		}
		else 
		{
			cout << i << endl;
			AUX = 1;
		}
	}
	return 0;
}