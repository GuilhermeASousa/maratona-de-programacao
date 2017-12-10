#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
	int qt_cursos, i;
	string curso;
	cin >> qt_cursos;
	getline(cin, curso);
	for (i = 0; i < qt_cursos; i++){
		getline(cin, curso);
	}
	cout << "Ciencia da Computacao" << endl;
	return 0;
}