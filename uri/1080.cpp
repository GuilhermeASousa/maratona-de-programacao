#include <iostream>
 
using namespace std;

int main() {
  int contador, numero, maximo, posicao;
  maximo = 0;
  for (contador = 1; contador <= 100; contador++) {
    cin >> numero;
    if (numero > maximo) {
      maximo = numero;
      posicao = contador;
    }
  }
  cout << maximo << endl << posicao << endl;
  return 0;
}