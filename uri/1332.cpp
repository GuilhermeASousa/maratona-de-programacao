#include <iostream>
#include <string>
 
using namespace std;

int verificaPalavra(string palavra, string Num){
	int i, erros;
	erros = 0;
	for (i = 0; i < 3; i++){
		if (palavra [i] != Num[i])
			erros++;		
	}
	return erros;
}
 
int main() {
	int N, i;
	string palavra;
	cin >> N;
	for (i = 0; i < N; i++){
		cin >> palavra;
		if (palavra.length() == 3){
			if (verificaPalavra(palavra, "one") <= 1)
				cout << "1" << endl;
			else
				cout << "2" << endl;
		}
		else
			cout << "3" << endl;
	}	
	return 0;
}