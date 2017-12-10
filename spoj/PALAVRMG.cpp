#include <iostream>
#include <vector>
#include <cstring>
#include <string>

using namespace std; 
int main ()
{
	int n, flag;
	string palavra;
	cin >> n;
	while (n)
	{
		flag = 0;
		cin >> palavra;
		for (int i = 0; i < palavra.size() - 1; i++)
		{
			if (tolower(palavra[i]) >= tolower(palavra[i+1]))
			{
				flag = 1;
				break;
			}
		}
		cout << palavra << ": ";
		if (flag == 0 || palavra.size() == 1)
			cout << "O" << endl;
		else
			cout << "N" << endl;
		n--;
	}
	return 0;
}
