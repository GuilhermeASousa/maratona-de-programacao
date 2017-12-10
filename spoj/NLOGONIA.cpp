#include <iostream>
using namespace std;

int main() {
	int qt_consultas, n, m, x, y, i;
	while (true) {
		cin >> qt_consultas;
		if (qt_consultas == 0)
			break;
		cin >> n >> m;
		for (i = 0; i < qt_consultas; i++){
			cin >> x >> y;
			if (x == n || y == m)
				cout << "divisa" << endl;
			else if (x > n && y > m)
				cout << "NE" << endl;
			else if (x > n && y < m)
				cout << "SE" << endl;
			else if (x < n && y < m)
				cout << "SO" << endl;
			else if (x < n && y > m)
				cout << "NO" << endl;
		}
	}
	return 0;
}