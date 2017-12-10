#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int qt_testes, i, j, n, m;
  vector<string> op_criancas;
  string aux;
  cin >> qt_testes;
  for (i = 0; i < qt_testes; i++)
  {
    op_criancas.resize(4);
    for (j = 0; j < 4; j++) {
      cin >> aux;
      op_criancas[j] = aux;
    }
    cin >> n >> m;
    if (((n + m) % 2 == 0 && op_criancas[1] == "PAR") || ((n + m) % 2 != 0 && op_criancas[1] == "IMPAR"))
      cout << op_criancas[0] << endl; 
    else
      cout << op_criancas[2] << endl; 
    op_criancas.clear();
  }
	return 0;
}