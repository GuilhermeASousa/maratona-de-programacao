#include <iostream>
#include <climits>
 
using namespace std;
 
int main() {
 
	int N, NUM, MENOR, POSICAO;
	cin >> N;
	MENOR = INT_MAX;
	for (int i = 0; i < N; i++)
	{
		cin >> NUM;
		if (MENOR > NUM)
		{
			POSICAO = i;
			MENOR = NUM;
		}
	} 
	cout << "Menor valor: " << MENOR << endl << "Posicao: " << POSICAO << endl;
	return 0;
}