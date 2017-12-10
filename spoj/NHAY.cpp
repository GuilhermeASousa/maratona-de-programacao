#include <iostream>
#include <string>
#include <vector>
using namespace std;

void kmp(string agulha, string palheiro, int tam_agulha) {
	int idx_substr, i;
  	vector<int> prefixo;

  	prefixo.resize(tam_agulha + 1);
  	prefixo[0] = -1;
  	for (i = 0; i < tam_agulha; i++) {
    	prefixo[i+1] = prefixo[i];
    	while (prefixo[i+1] > -1 and agulha[prefixo[i+1]] != agulha[i]) {
      		prefixo[i+1] = prefixo[prefixo[i+1]];
    	}
    	prefixo[i+1]++;
  	}

  	idx_substr = 0;
  	for (i = 0; i < palheiro.size(); i++) {
    	while (idx_substr > -1 and agulha[idx_substr] != palheiro[i]) {
      		idx_substr = prefixo[idx_substr];
    	}
    	if (++idx_substr == tam_agulha) {
      		cout << (i - tam_agulha + 1) << endl;
			idx_substr = prefixo[tam_agulha];
    	}
  	}
}

int main() {
	int tam_agulha, i, j, k;
	string agulha, palheiro;
	while (cin >> tam_agulha >> agulha >> palheiro){
		if (!cin) break;
		i = j = k = 0;
		kmp(agulha, palheiro, tam_agulha);
		agulha.clear();
		palheiro.clear();
		cout << endl;
	}
	return 0;
}