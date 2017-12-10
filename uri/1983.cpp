#include <iostream>
 
using namespace std;
 
int main() {
	int qt_alunos, mat, new_mat, i;
	double nota, new_nota;
	cin >> qt_alunos;
	nota = 8;
	mat = 0;
	for (i = 0; i < qt_alunos; i++){
		cin >> new_mat >> new_nota;
		if (new_nota >= nota){
			nota = new_nota;
			mat = new_mat;
		}
	}
	if (mat != 0)
		cout << mat << endl;
	else
		cout << "Minimum note not reached" << endl;
	return 0;
}