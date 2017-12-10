#include <iostream>

using namespace std;

int main()
{
	float NUM, NUM2;
	NUM = 0;
	NUM2 = 1;
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 3; j++)
		{	
			cout << "I=" << NUM << " J=" << NUM2 << endl;
			NUM2++;
		}
		NUM += 0.2;
		NUM2 = 1 + NUM;
	}
	return 0;
}