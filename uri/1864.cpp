#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
	string citacao;
	int N, i;
	citacao = "LIFE IS NOT A PROBLEM TO BE SOLVED";
	cin >> N;
	for (i = 0; i < N; i++)
		cout << citacao[i];
	cout << endl;
	return 0;
}