#include <iostream>
 
using namespace std;
 
int main() {
	int num_testes, i;
	string jogador1, jogador2;
	cin >> num_testes;
	for (i = 0; i < num_testes; i++){
		cin >> jogador1 >> jogador2;
		if ((jogador1 == "ataque" && jogador2 == "pedra") || 
		    (jogador1 == "pedra" && jogador2 == "papel") ||
		    (jogador1 == "ataque" && jogador2 == "papel"))
			cout << "Jogador 1 venceu" << endl;
		else if (jogador1 == "papel" && jogador2 == "papel")
			cout << "Ambos venceram" << endl;
		else if (jogador1 == "pedra" && jogador2 == "pedra")
			cout << "Sem ganhador" << endl;
		else if (jogador1 == "ataque" && jogador2 == "ataque")
			cout << "Aniquilacao mutua" << endl;
		else
			cout << "Jogador 2 venceu" << endl;
	}
	return 0;
}