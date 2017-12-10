#include <iostream>
#include <map>

using namespace std;
int main() {
	int qt_alunos, i, j, voto, max_votos;
	map <int, int> popularidade;
	cin >> qt_alunos;
	while (qt_alunos != 0) {
		max_votos = 0;
		for (i = 1; i <= qt_alunos; i++) {
			for (j = 1; j <= qt_alunos; j++) {
				cin >> voto;
				if (voto == 1)
					popularidade[j]++;
			}
		}

		for (map<int,int>::iterator it = popularidade.begin(); it != popularidade.end(); ++it) {
			if (it->second > max_votos)
				max_votos = it->second;
		}

		cout << max_votos << endl;

		cin >> qt_alunos;
		popularidade.clear();
	}
	return 0;
}