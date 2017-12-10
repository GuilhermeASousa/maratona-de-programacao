#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
	string dados;
	getline (cin, dados);
	if (dados.length() > 80)
		cout << "NO" << endl;
	else
		cout << "YES" << endl; 
	return 0;
}