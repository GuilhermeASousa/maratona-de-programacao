#include <iostream>
#include <vector>

using namespace std;
int main() {
	int qt_pacotes_balas, num_balas, total_balas, num_movimentos, aux, i;
	vector<int> balas;
	cin >> qt_pacotes_balas;
	while(qt_pacotes_balas != -1) {
		total_balas = 0;
		num_movimentos = 0;
		for (i = 0; i < qt_pacotes_balas; i++) {
			cin >> num_balas;
			balas.push_back(num_balas);
			total_balas += num_balas;
		}
		if (total_balas % qt_pacotes_balas != 0)
			cout << "-1" << endl;
		else {
			aux = total_balas / qt_pacotes_balas;
			for (i = 0; i < qt_pacotes_balas; i++) {
				if (balas[i] > aux)
					num_movimentos += balas[i] - aux;
			}
			cout << num_movimentos << endl;
		}
		balas.clear();
		cin >> qt_pacotes_balas;
	}
	return 0;
}