#include <iostream>
#include <string>
#include <algorithm> 
#include <set>

using namespace std;
int main() {
	int num_individuos, i;
	string seq_mDNA;
	set<string> indiviuos_distintos;
	cin >> num_individuos;
	while (num_individuos != 0) {
		for (i = 0; i < num_individuos; i++) {
			cin >> seq_mDNA;
			sort (seq_mDNA.begin(), seq_mDNA.end());
			indiviuos_distintos.insert(seq_mDNA);
		}
		cout << indiviuos_distintos.size() << endl;
		indiviuos_distintos.clear();
		cin >> num_individuos;
	}
	return 0;
}