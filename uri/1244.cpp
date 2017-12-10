#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

using namespace std;
void insertionSort(vector<string> & palavras, int tamanho) {
      int i, j;
      string tmp;
      for (i = 1; i < tamanho; i++) {
            j = i;
            while (j > 0 && palavras[j - 1].size() < palavras[j].size()) {
                  tmp = palavras[j];
                  palavras[j] = palavras[j - 1];
                  palavras[j - 1] = tmp;
                  j--;
            }
      }
}

void imprimeVetor(vector<string>palavras, int tamanho) {
	int i;
	for (i = 0; i < tamanho; i++) {
		if (i != tamanho - 1)
			cout << palavras[i] << " ";
		else
			cout << palavras[i] << endl;
	}
}

int main() {
	int qt_testes, i;
	char c;
	vector<string> palavras;
	string palavra;
	cin >> qt_testes;
	getline (cin, palavra);
	for (i = 0; i < qt_testes; i++) {
		palavra = "";
		c = getchar();
        while(c != '\n' && c != EOF) {
            if (c == ' ') {
            	palavras.push_back(palavra);
            	palavra = "";
            }
            else
            	palavra.push_back(c);
            c = getchar();
        }
        palavras.push_back(palavra);
        insertionSort(palavras, palavras.size());
        imprimeVetor(palavras, palavras.size());
        palavras.clear();
	}
	return 0;
}