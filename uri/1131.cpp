#include <iostream>
 
using namespace std;

void calculaEstatisticas(int &nr_jogos, int &vitorias_inter, int &vitorias_gremio, int &empates, int inter, int gremio){
	if (inter > gremio)
		vitorias_inter++;
	else if (inter < gremio)
		vitorias_gremio++;
	else 
		empates++;
	nr_jogos++;
}

int main() {
	int nr_jogos, vitorias_inter, vitorias_gremio, empates, inter, gremio, repeticao;
	nr_jogos = 0;
	vitorias_inter = 0;
	vitorias_gremio = 0;
	empates = 0;
	cin >> inter >> gremio;
	calculaEstatisticas(nr_jogos, vitorias_inter, vitorias_gremio, empates, inter, gremio);
	cout << "Novo grenal (1-sim 2-nao)" << endl;
	cin >> repeticao;
	while (repeticao == 1){
		cin >> inter >> gremio;
		calculaEstatisticas(nr_jogos, vitorias_inter, vitorias_gremio, empates, inter, gremio);
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> repeticao;
	}
	cout << nr_jogos << " grenais" << endl;
	cout << "Inter:" << vitorias_inter << endl;
	cout << "Gremio:" << vitorias_gremio << endl;
	cout << "Empates:" << empates << endl;
	if (vitorias_inter > vitorias_gremio)
		cout << "Inter venceu mais" << endl;
	else if (vitorias_inter < vitorias_gremio)
		cout << "Gremio venceu mais" << endl;
	else
		cout << "Nao houve vencedor" << endl;
	return 0;
}