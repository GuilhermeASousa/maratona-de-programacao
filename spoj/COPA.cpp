#include <iostream>
#include <string>

using namespace std;
int main() {
	int qt_times, qt_partidas, pontos, total_pontos, max_pontos, i;
	string nm_time;
	cin >> qt_times >> qt_partidas;
	while (qt_times != 0) {
		total_pontos = 0;
		max_pontos = 3 * qt_partidas; 
		for (i = 0; i < qt_times; i++) {
			cin >> nm_time >> pontos;
			total_pontos += pontos;
		}
		cout << max_pontos - total_pontos << endl;
		cin >> qt_times >> qt_partidas;
	}
	return 0;
}