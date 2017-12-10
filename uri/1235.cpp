#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
	int N, i, fraseSize, j;
	string frase, correcao;
	cin >> N;
	getline (cin, frase);
	for (i = 0; i < N; i++){
		getline (cin, frase);
		fraseSize = frase.length();
		if (fraseSize % 2 != 0){
			for (j = fraseSize/2; j >= 0; j--)
				correcao.append(frase, j, 1);
			for (j = fraseSize; j > fraseSize/2; j--)
				correcao.append(frase, j, 1);
		}	
		else{
			for (j = (fraseSize/2) - 1; j >= 0; j--)
				correcao.append(frase, j, 1);	
			for (j = fraseSize; j >= fraseSize/2; j--)
				correcao.append(frase, j, 1);
		}			
		cout << correcao << endl;
		correcao.erase(correcao.begin(), correcao.end());
	}
	return 0;
}