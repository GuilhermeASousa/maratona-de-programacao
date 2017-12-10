#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
	int i, maiuscula;
 	string sentenca;
	while (getline(cin,sentenca)){
		maiuscula = 1;
		for (i = 0; i < sentenca.length(); i++)
			if ((maiuscula == 1) && (sentenca[i] >= 97) && (sentenca[i] <= 122)){
				sentenca[i] = sentenca[i] - 32;
				maiuscula = 0;
			}
			else if ((maiuscula == 1) && (sentenca[i] >= 65) && (sentenca[i] <= 90)){
				maiuscula = 0;
			}
			else if ((maiuscula == 0) && (sentenca[i] >= 65) && (sentenca[i] <= 90)){
				sentenca[i] = sentenca[i] + 32;
				maiuscula = 1;
			}
			else if ((maiuscula == 0) && (sentenca[i] >= 97) && (sentenca[i] <= 122)){
				maiuscula = 1;
			}
		cout << sentenca << endl;
	}
	return 0;
}