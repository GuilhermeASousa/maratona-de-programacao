#include <iostream>
#include <string>

using namespace std;

int main()
{
	string nome;
	getline (cin,nome);
	if (nome.length() <= 140)
		cout << "TWEET" << endl;
	else
		cout << "MUTE" << endl;
	return 0;
}